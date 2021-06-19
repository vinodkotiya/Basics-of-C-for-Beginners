#include <stdlib.h>
//#include<fstream.h>
#define NO 1
#define YES 0
extern char pwd[200];     //match its value from password obtained in file

void title();
void help();
int decrypt ()
{ reEnter:
  int  j, filter=0, num[63] ;
  long int i;
  char c, d, opt,value, srcfile[300],destfile[300], str[31] ;
  cleardevice();
  title();
  settextstyle(2,0,8);
  setcolor(MAGENTA);
  outtextxy(40,150,"     Decryption(DeCyphering)");
  outtextxy(40,180,"    ************************");

  settextstyle(2,0,6);
  setcolor(YELLOW);
  outtextxy(10,220,"Enter the source filename to be decrypted:");
  outtextxy(20,250,"eg : d:\\mydoc\\vinen.xxx ");
  gotoxy(20,18);
  cin>>srcfile;
  if(srcfile[0] == '?'||srcfile[1] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
   else if(srcfile[0] == 'q' || srcfile[0] == 'Q') return 1;//go to option again
  ifstream in(srcfile,ios::binary); ////// open source file
  if(in.fail())
   {
    setcolor(LIGHTRED);
    outtextxy(30,280,"file can't be opened. Check path or filename.");
    getch();
    in.close();
    goto reEnter;
   }

  outtextxy(10,290,"Enter the name of the target file(decrypted) - ");
  outtextxy(20,310,"eg : d:\\mydoc\\vindec.txt ");
  gotoxy(20,22);
  cin>>destfile;
  if(destfile[0] == '?'|| destfile[1] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
    else if(destfile[0] == 'q'||destfile[0] == 'Q') return 0;
  ofstream out(destfile,ios::binary); /////// open destination file
   if(out.fail() || destfile[1] != ':')
   {
    setcolor(LIGHTRED);
    outtextxy(30,340,"file can't be created.Check path or file name.");
    getch();
    goto reEnter;
   }
 time_t t;          //now start counting time
 t = time(NULL);

  // remove redundancy
  char tempa[200];
  in.read(tempa,sizeof(tempa));
  for (i=0; i<63; i++)
	in.get(c) ;
  //get pssword odf user
  for (i=0;i<200;i++)
   {
    in.get(c);
    tempa[i] = c-24;
   }
  //cout<<"current  "<<pwd<<"  old "<<tempa;
  if(strcmp(pwd,tempa) != 0)
  {
   settextstyle(2,0,4);
   setcolor(GREEN);
   outtextxy(50,370,"file will not be decrypted.");
   outtextxy(50,390,"Your current password does not match with password at time of encryption.");
   outtextxy(50,410,"Quit and Reenter the write password to decrypt this file.");

   getch();
   in.close();
   out.close();
   return 1;
  }

  in.get(opt) ;// 'opt' collecting the very first character of source file  a 1 for Offset encr or a 2 for Substitution encr!	.......
  //cout<<opt;getch();

  if (opt==6)	// means there is Offset encryption, and then .......
    { in.get(value);	// 'value' collecting the number by which data .......
		// offsetting has been made in the source file .......
       while (!in.eof())
	{
	in.get (c) ;	// collect the input character in 'C' .......
	d=c-(int)value ;	// reduce the character by value .......
	out.put(d) ;	// put the decrypted character in target file .......
	}
    }
  else if(opt == 8)
   {			//	Substitution encryption	.......
	for (i=0; i<63; i++)	// it means there is 	.......
	{		// the next 63 characters denotes the 63 random .......
	in.get(c) ;	// numbers which have been used for substitution .......
	num[i]=c ;	// and they must be collected somewhere before .......
	}		// proceeding anymore , here it is num[63] 	.......
   // means Substitution encryption .......

    while (!in.eof())
      {
	in.get(c) ;	// collect the character in 'c' .......
	j=0 ;	// a flag when turned 1 transfers control to the beginning .......
	if (filter==NO)	// no filtering i.e. interpretation in any way .......
	{		// for the character collected in 'c' and then .......
		out.put(c) ;	// dump the character in target file .......
		filter=YES ;	// toggle the value of filter  .......
		continue ;	// go to the beginning of the loop .......
	}
     for (i=0; i<26; i++)
       {
	if (c==num[i])	// means 'c' is in the range of num[0] to num[25].......
	 {		// that have been substituted for Capital letters*/
	  d=i+65 ;	// advance 65 i.e. A's ascii, by value of i .......
	  out.put(d) ;	// put it in target file .......
	  j=1; break ;	// turn flag j to 1 which will take you in turn .......
	 }		// to the beginning of the master loop .......
       }
    if (j==1) continue ;
    for (i=26; i<52; i++)
      {
	if (c==num[i])	// means 'c' is in the range of numbers*/
	 {		// being substituted for small letters .......
	  d=i+71; out.put(d); j=1; break ;
	 }
      }
    if (j==1) continue ;
    for (i=52; i<62; i++)
     {
      if (c==num[i])	// means 'c' is in the range of numbers*/
	{	// being substituted for numeric digits*/
	d=i-4; out.put(d); j=1; break ;
	}
      }
	if (j==1) continue ;
	if (c==num[62])	// if all the above conditions become false*/
	filter=NO ;	// turn filter to NO .......
    }//end of while
  }//end else
in.close () ;
out.close () ;
char s1[30] = {"Total time "},s2[10];
  ltoa(time(NULL)-t,s2,10);
  strcat(s1,s2);
  strcat(s1," Seconds");
setcolor(RED);
outtextxy(30,380,"Decryption Complete ........");
 gotoxy(20,27);
  cout<<s1;
getch();
 return 1;   //sussecc
}