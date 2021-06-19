#include <conio.h>
#include<fstream.h>
#include <string.h>
extern char pwd[200];     //take input in this file
void title();
void help();
int matchpwd (char *);
int createpwd(char *);
int password ()
{
  reEnter:
  int i;
  char c, d ;
  cleardevice();
  title();
  settextstyle(2,0,8);
  setcolor(MAGENTA);
  outtextxy(60,150,"     PASSWORD VERIFICATION");
  outtextxy(60,180,"    ************************");
  settextstyle(2,0,6);
  setcolor(3);
  outtextxy(10,220,"Please Enter your password here:");
 //  outtextxy(20,250,"   1:Want to Enter Password. ");
  setcolor(YELLOW);
    settextstyle(2,0,4);
  outtextxy(10,250,"   Press '1' to get a new password ");
  setcolor(LIGHTRED);
  outtextxy(20,330,"Note: Every user must have a unique password to encrypt/decrypt files.");
  setcolor(GREEN);
  outtextxy(20,350,"      For new user the temporary password is 'vinod'. ");
  setcolor(LIGHTRED);
  outtextxy(20,370,"      Use the same password to decrypt the files by which the file was encrypted.  ");
  outtextxy(20,390,"      otherwise the file will not decrypted.");
  //outtextxy(20,390,"      Your password at encryption and descryption should same,  ");
  //outtextxy(20,410,"      ");
  gotoxy(45,15);
  cin>>pwd;
  if(pwd[0] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
   else if(pwd[0] == 'q' || pwd[0] == 'Q') return 0;

 if(pwd[0] == '1' )
  {
  reNew:
  cleardevice();
  title();
  settextstyle(2,0,8);
  setcolor(MAGENTA);
  outtextxy(60,150,"      Getting New Password");
  outtextxy(60,180,"    ************************");
   settextstyle(2,0,6);
    setcolor(3);
    outtextxy(10,220,"Enter your new password here - ");
    setcolor(LIGHTRED);
    settextstyle(2,0,4);
    outtextxy(20,330,"Note:-Enter Password of atleast 6 and atmost 200 characters which do not contain any space.");
    outtextxy(20,350,"      Maximum no of passwords are limited to 9. ");
    outtextxy(20,370,"      It is recomended that every user should have only one and unique password.");
    outtextxy(20,390,"      Your password at encryption and descryption time should same,  ");
    outtextxy(20,410,"      otherwise the file will not decrypted.");
    gotoxy(45,15);
    cin>>pwd;
    if(pwd[0] == '?')
	  {
	   help();
	   goto reEnter;     //refresh
	  }
   // else if() return 0;

    else if (pwd[0] == '1'||pwd[0] == 'q' || pwd[0] == 'Q')
     {
      setcolor(YELLOW);
      outtextxy(250,260," 1,q,? are not accepted as starting of password.");
      outtextxy(250,280," Use any other password not starting with 1,q and ?. Press any Key.....");
      //because 1 is used as option
      getch();
      goto reNew;
     }
     i = matchpwd(pwd);
     if (i == 1)
      {
       setcolor(YELLOW);
      outtextxy(250,260," Password Already Exist.");
      outtextxy(250,280," Use any different password.Press any Key.....");
      getch();
      goto reNew;
     }
     i = createpwd (pwd);   //return 0 if password not create else 1
     if(i == 0)
      {
      setcolor(YELLOW);
      outtextxy(250,260," Password not created.");
      outtextxy(250,280," Maximum 9 user's are allowed.");
      outtextxy(250,300," Register this product to supprt more users. Press any Key.....");
      getch();
      goto reEnter;
      }
     else if(i == 1)
      {
      setcolor(YELLOW);
      outtextxy(250,260," Password created.");
      outtextxy(250,280," Always use this password to encrypt and decrypt files.");
      outtextxy(250,300," If you encrypt any file with this password.No one will be able ");
       outtextxy(250,320," to decrypt that file by any other password. Press any Key.....");
      getch();
      goto reEnter;
      }
    }     //eof pwd[0] == 1
 // now verify password
 // return 1 if password match
 i = matchpwd(pwd);
 if ( i != 1)
  {
   setcolor(YELLOW);
   outtextxy(250,260," Password not verified.");
   outtextxy(250,280," Please re-enter your password.");
   outtextxy(250,300," Or get a new password. Press any Key.....");
   getch();
   goto reEnter;
  }
 else if ( i == 1)
  {
   setcolor(YELLOW);
   outtextxy(250,260," Password verified.");
   outtextxy(250,280," Permission Granted . Press any Key.....");
   getch();
   return 1 ; //sudssecc
  }
 return 0;
}

// match the password passed to it with existing passwords in file

int matchpwd (char *p)     //return 1 if pwd match
 {
  //cleardevice();
  /*int call;
  call = system("dir");
  if (call != 0 )
   {
    cout<<"\n windows not exist\n"<<call<<endl;
    call = system("md c:\\cdata");
   }
  else
    call = system("cd..");
  cout<<p<<call;*/
  if(strcmp("vinod",p) == 0)   return 1;   //default password

  int i,onlyonce = 1,totalpwd;
  char c;
  ifstream in("koot.vin",ios::binary); ////// open source file
  if(in.fail())
   {
    setcolor(LIGHTRED);
    outtextxy(30,340,"file can't be opened.");
    getch();
    return 0 ;
   }
 in>>i;   //only 1st byte of file contain total no of pwd.next repetation set value of i to 0
// cout<<i;
 totalpwd = i;
 while(!in.eof())
  {

    //if(onlyonce == 1)
      //	totalpwd = i;  //so get total no of pwd once otherwise u get 0
    onlyonce++ ; //now use this variable as loop counter
	//when its value-1 equal the total no of pwd
	//then u have to grab a jabardasti character at the end of file
	//yeh saari kasrat usi ke liye hai.else total pwd ki jaroorat nahi thi.

  //  cout<<"\nTotal pwd "<<i;
    // ********** remove redundancy
    char tempa[200];
    in.read(tempa,sizeof(tempa));
    //************removing redundancy
    for (i=0; i<63; i++)
	in.get(c);

    int l;
    in>>l;
    l = l - 24;      //decrypt by 24
    //cout<<"\nlength ";
    //cout<<l;getch();
  //if (l==6) cout<<"\n equal";

    for(i = 0; i < l; i++)
     {
      in.get(c);
      tempa[i] = c - 21;    //decrypt by 22
      //cout<<c;    getch();
     }
     tempa[i] = '\0';
   //in.read(tempa,sizeof(tempa));   //getting password
   //in.getline(tempa,200);
//   cout<<tempa<<endl;
   if(strcmp(tempa,p)== 0)
     {
      //cout << "\n password authenticated  "<<tempa<<" = "<<p;
      in.close();
      return 1; //sussecc
     }
 //cout << "\n current password"<<"\tlength "<<l<<"\t"<<tempa;
   //************removing redundancy
  in.get(c);
  for (i=0; i<63; i++)
	in.get(c);
 // in.read(tempa,sizeof(tempa));   //removing redundancy
  if((onlyonce - 1 ) == totalpwd)
   {
    in.get(c); //jabran aaya char
    //cout<<"\njabran"<<c<<"  "<<(int)c;
    //getch();
   }
 } //eow
in.close();
return 0;
}
// function create max 9 password

 int createpwd (char *p)
{
  //cleardevice();
  int i,x,num[63],j;
      char c;
  fstream out;
  out.open("koot.vin",ios::in | ios::out | ios::binary | ios::ate ); ////// open source file

  if(out.fail())
   {
    setcolor(LIGHTRED);
    outtextxy(30,340,"file can't be opened.");
    getch();
    return 0;
   }
 // out<<0;    //enter the total no of pwd as 1st byte position : at eof
 //file should initially contain only a 0
 //first make a file manualy
 out.seekg(0,ios::beg);  //position : beg
 out>>i;          //getting 1 st byte
    if( i == 9)    //restricted to 9
      { //cout<<"no more user will be added.Clear previous users.\n"; getch();
	//out.seekp(-1,ios::end);  //  pos: end
       //	out<<EOF;
	out.close();
	return (0);
      }
 //cout<<"was  "<<i;
 i = i+1;      //increament 1st byte
 out.seekp(0,ios::beg);  //  pos: beg
 out<<i;                 //overwrite 1st byte
 //***** so the 1st byte contain total no of pwd.
 //cin>>c; out<<c;
 //cout<<"\ntotal pwd is"<<i;
 out.seekp(0,ios::end);  //now goto eof
  //****************** put redundancy
  char tempa[200] = {"This file is encrypted by vinod kotiya's \n VIN Cryptograph v1.0\nAdd:S-2 Shrimaya Apart Sector-B/363 Sarvdharm Colony Bhopal-42 fone+91-0755-2794428 web:http:\\vinodkotiya.tripod.com"};
  out.write(tempa,sizeof(tempa));
  for (i=0; i<63; i++)
	{while (1)
	  {
	   num[i] = random (222 + strlen(p)) ;    //get rndm no
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
    //*********************put info
   out<<(strlen(p) + 24);        //putting password and length in deccryted form by 22 n 24
   for( ; *p != '\0'; p++)
       out.put(*p + 21);
    //**********************put redundancy
   out.put('v'+random(200));
   for (i=0; i<63; i++)          // again putting some redundancy
	{while (1)
	  {
	   num[i] = random (225 + strlen(p)) ;    //get rndm no
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
   //out.write(p,sizeof(p));
   //out<<p;
  // out<<endl;
   //if(strcmp(tempa,p)== 0)
    //cout << "\n password authenticated\n"<<tempa<<p;
//  strcpy(tempa,"Also try my other softwares on my site.Also get source code free.\0");
 // out.write(tempa,sizeof(tempa));   //putting redundancy

out.close();
cout<<"\nfile close";
return 1;
}