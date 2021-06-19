//#include <fstream.h>
//#include <conio.h>
#include<ctype.h>
#include<stdlib.h>
extern char pwd[200];     //put its value in to file

void title();
void help();
int encrypt()
{
   vinod:
     int  j, x,  num[63];
     long int i;
   char opt,value[3];
   char srcfile[300],destfile[300];
   cleardevice();
   title();
   settextstyle(2,0,8);
    setcolor(MAGENTA);
    outtextxy(40,150,"     Encryption(Cyphering)");
    outtextxy(40,180,"    ***********************");

  //  while (1)
   //	{
	settextstyle(2,0,6);
	setcolor(YELLOW);
	outtextxy(5,230,"Enter Option (1 or 2):");
	setcolor(GREEN);
	outtextxy(5,270,"      1: Offset or Transposition Encryption");
	outtextxy(5,300,"      2: Substitution Encryption");
	setcolor(LIGHTRED);
    settextstyle(2,0,4);
    outtextxy(20,330,"Use Substitution encryption for high security.But file size should be less then 100 MB");
    outtextxy(20,350,"Use this for Photographs,Text files,Databases and other important documents. ");
    outtextxy(20,370,"For music,vedios and other large files of low security use Offset encryption.");
   gotoxy(35,15);
   opt=getch();
	if (opt == '?')
	  {
	   help();
	   goto vinod;     //refresh
	  }
	else if(opt == 27 || opt == 'q' || opt == 'Q')
	  return 1;  //go to option again
	if ((opt!='1') && (opt!='2'))
	  {
	   setcolor(RED);
	   outtextxy(300,260,"invalid entry! Enter 1 or 2 ! Press any key ...  ");
	   getch() ;
	   goto vinod;      //refresh
	  }
  //	else break;
     //	}
// 'opt'= 1 i.e. 6 means the encrytion Offset (assumed) shifting by value will done .......
 reEnter:
 cout<<"resolving scope of all variables";
 {                         //resolver bracket
   if (opt=='1')
       {

	cleardevice();
	title();
	settextstyle(2,0,8);
	setcolor(MAGENTA);
	outtextxy(30,150,"    Offset or Transposition Cypher");
	outtextxy(30,180,"   .............................................");
	settextstyle(2,0,5);
	setcolor(3);
	outtextxy(5,250,"Enter the value(1 to 128) by which shifting of characters will made:");
	gotoxy(70,18);
	cin>>value;     //when value is integer if user enter character instead integer it cause a dangerous termination of program
		   //problem resolved if value is char type provided that we cant enter 2 or 3 digit
		   //another resolution use string var for value which accept 1-128 and use atoi
	if(value[0] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
	else if(value[0] == 'q' || value[0] == 'Q') return 1;//go to option again
	if ((atoi(value) < 1) || (atoi(value) > 128))
	 {
	 setcolor(LIGHTRED);
	 outtextxy(20,280,"Please enter any integer between 1 to 128 ");
	 outtextxy(20,310,"otherwise the data corruption will large ");
	 getch();
	 opt = '1';         //reseting b/c value was lost
	 goto reEnter;
	 }
      }
   else if(opt == '2')
   {
	cleardevice();
	title();
	settextstyle(2,0,8);
	setcolor(MAGENTA);
	outtextxy(30,150,"    Substitution Cypher");
	outtextxy(30,180,"   ..............................");
	settextstyle(2,0,6);
	setcolor(3);
    }    //end of else

   setcolor(YELLOW);
   settextstyle(2,0,6);
   outtextxy(10,280,"Enter the name of the source file(eg: c:\\vin.txt) -");
   gotoxy(20,20);
   //getch();
   //cin.getline(srcfile,300);
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
    outtextxy(20,310,"file can't be opened. Check path and filename.");
    getch();
    in.close();
    goto reEnter;
   }
   outtextxy(10,330,"Enter name of target file(encrypted)-eg c:\\vinen.xxx ") ;
   gotoxy(20,23);
   //cin.getline(destfile,300);
   //gets(destfile);
   cin>>destfile;
    if(destfile[0] == '?'|| destfile[1] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
    else if(destfile[0] == 'q'||destfile[0] == 'Q') return 1;//go to option again
    ofstream out(destfile,ios::binary); /////// open destination file
   if(out.fail() || destfile[1] != ':')
   {
    setcolor(LIGHTRED);
    outtextxy(20,360,"\nfile can't be created.check path and filename.");
    getch();
    out.close();
    goto reEnter;
   }
 char e,c;
 time_t t;          //now start counting time
 t = time(NULL);
 /////////////////////////////////////////////////////////////////////////
	    //****************** TRANSPOSITION OR OFFSET CYPHER **********
 /////////////////////////////////////////////////////////////////////////
 if(1)
   {     //decreasing life of tempa
    /// make redundancy
       char tempa[200] = {"This file is encrypted by vinod kotiya's \n VIN Cryptograph v1.0\nAdd:S-2 Shrimaya Apart Sector-B/363 Sarvdharm Colony Bhopal-42 fone+91-0755-2794428 web:http:\\vinodkotiya.tripod.com"};
       out.write(tempa,sizeof(tempa));

       for (i=0; i<63; i++)
       {
	x=random(250) ;
	out.put((char)x) ;
       }
   }
   /// put imp information password of user
    for(i=0 ; i<200;i++)
       out.put(pwd[i] + 24);
 if (opt=='1')
    {
       out.put(6);       //enter 6 for offset in file
       // if  opt=1 i.e.6 and then the offset encryption is
       // only the scanned 'value' should be entered in the target file .......
       out.put(atoi(value));

	while (!in.eof())
	{
	in.get(c);	// get the character in 'c' .......
	e=c+atoi(value);	// offset it i.e. advance it by 'value' .......
	//cout<<e;
	out.put(e);	// put the advanced value of 'd' in file
	}

      //	getch();
     }
   /////////////////////////////////////////////////////////////////////////
	    //****************** SUBSTITUTION CYPHER **********
   /////////////////////////////////////////////////////////////////////////
  else
    {
       out.put(8);     //enter 8 for substitution cypher in file
       /*Now, when it is going to be Substitution encryption, let's generate
	63 random numers at all. Out of all these 63, 26 are for Capital letters,
	26 for small letters, 10 for numeric digits and one is a special character
	which will be used to substitute the exclusive character which does not
	comes under the above category, in some tactical way .......*/

	for (i=0; i<63; i++)
	{
	 while (1)
	  {
	   num[i] = random (250) ;    //get rndm no
	   for (j=0,x=0; j<i; j++)
	    {
	     if (num[i]==num[j]) {x=1; break;} //if two characters are equal then again get new rndm character
	    }
	   if (x==0) break;
	  } //eow
	}  //eof
       // All these 63 generated random numbers should be now stored consecutively in the target fiue .......

       for (i=0; i<63; i++)
       {
	c=num[i] ;
	out.put(c) ;
       }
      // Now, the real encryption, i.e. the conversion is going to take place .......

      // means Substitution encryption .......
	while (!in.eof())
	{
	  in.get(c);
	  i=65;
	  if ((c>=65) && (c<=90)) // means 'c' is a Capital letter .......
	   {			 // then 'e' should take the value from
	   e=num[c-i] ;          // num[0] to num[25], depending upon
	   out.put(e) ; continue ; // its position from the beginning .......
	   }
	   i=71;
	  if ((c>=97) && (c<=122)) // means 'c' is a small letter .......
	   {			  // and then 'e' should take a value .......
	   e=num[c-i] ;          // from num[26] to num[51], purvanusaar .......
	   out.put(e) ; continue;
	   }
	   i=4;
	  if ( (c>=48) && (c<=57)) // means 'c' is a numeric digit .......
	   {			  // and then 'e' is going to take a .......
	   e=num[c+i] ;           // value from num[52] to num[61] .......
	   out.put(e) ; continue ;
	   }
	  e=num[62] ;   // if all the above conditions become*/
			// false, num[62] gets substituted  .......
	  out.put(e) ;  // following which the concerned special .......
	  out.put(c) ;  // character is also dumped in the file  .......


       }//end of while

   } //end of else

  in.close();
  out.close();
  char s1[30] = {"Total time "},s2[10];
  ltoa(time(NULL)-t,s2,10);
  strcat(s1,s2);
  strcat(s1," Seconds");
  setcolor(RED);
  outtextxy(30,380,"Encryption complete......") ;
  //textcolor(RED);
 // textbackground(BLACK);
  gotoxy(20,27);
  cout<<s1;
 // cputs(s1);
  getch();
 }             //resolver bracket closed.
  return 1;//go to option again
}