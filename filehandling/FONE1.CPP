#include<fstream.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
int s;
int cont();
void welcome();
void start();
void help();
void aboutp();
void aboutm();
void main(void);
char option();
void title(void);
char j,f=5;
void main(void)
{
 clrscr();
// int gd=DETECT,gm;
 //initgraph(&gd,&gm,"c:\\tc\\bgi");
// setbkcolor(BLUE);
// welcome();
 //delay(2000);
 start();
// title();
// dir d;
// d.datacomman();
 closegraph();
 getch();
}

class dir
{
  char fone1[14],fone2[14];
  long int std;        //131 bytes each person
  double mobile;
  char nm[15],snm[15],place[22],ct[10],post[25];

 public:
 void set(long int , char [] ,char [],double,char[],char[],char [],char[],char[]);
 void nmchoice();
 void snmchoice();
 void ctchoice();
 void placechoice();
 void data();
 void show();
};
void dir :: show()
{
   cout<<std<<fone1<<fone2<<mobile<<nm<<snm<<post<<ct<<place;

}

void dir :: set( long int s,char f1[14],char f2[14],double m,char n[15],char sn[15],char pst[25],char c[10],char p[22])
{
 std = s;
 strcpy(fone1,f1);//fone1 = f1;
 strcpy(fone2,f2); //fone2 = f2;
 mobile = m;
 strcpy(nm,n);
 strcpy(snm,sn);
 strcpy(post,pst);
 strcpy(ct,c);
 strcpy(place,p);

}

void dir :: data()
{
 cout<<"\nwe are in data";
 getch();
 int i,v,r=1,get;
 char choice[15],ch,e;
 int loop=91;     //should be more then one of s[].set
 fstream file;
 file.open("c:\\cdata\\directry.vin",ios::ate |ios::in | ios::out | ios :: binary);
 //file.open(filenm,ios::ate | ios::in | ios::out | ios::binary);
 file.seekg(0,ios :: beg);     //go to start

 dir s;

 cout<<sizeof(s);
 while(file.read((char * ) & s,sizeof(s)))
  {
   char c;
   s.show();
   file.get(c);
  }
 getch();
 cout<<"\nDF df are yuo ";

 file.close();
 getch();
 VINOD:
 title();
 v=option();
 title();

 /*if(v=='n'||v=='N')
 {
  cout<<"\nENTER ONLY NAME  WITHOUT SURNAME\n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].nm)==0)
    {
     r=0;
     s[i].nmchoice();
    }
  }
  if(r!=0)
  cout<<"\nThe NAME "<<choice<<" You Have Entered Does Not Exist.";
  get = cont();
  if(get == 6)
  goto VINOD;
 }
  else if(v=='s'||v=='S')
 {
  cout<<"\nENTER ONLY SURNAME \n\t";
  cin>>choice;  int k=0;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].snm)==0)
    {r=0;k++;
    if(k>1 && k%2 ==0)        //SEE F
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }
    s[i].snmchoice();}
  }
  if(r!=0)
  cout<<"\nThe SURNAME "<<choice<<" You Have Entered Does Not Exist.";
  get = cont();
   if(get == 6)
  goto VINOD;
 }
  else if(v=='c'||v=='C')
 {
  cout<<"\nENTER ONLY CITY NAME \n\t";
  cin>>choice;
  int k=0;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].ct)==0)
    {r=0;k++;
    if(k>1 && k%2 ==0)        //SEE F
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }

    s[i].ctchoice();}
  }
  cout<<"\n\t"<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<"  STAUS:- "<<k<<" NUMBERS FOUND  "<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f;
  if(r!=0)
  cout<<"\nThe CITY NAME "<<choice<<" You Have Entered Does Not Exist.";
  get = cont();
   if(get == 6)
  goto VINOD;
 }
 else if(v=='A'||v=='a')
 {
  cout<<"\nENTER ONLY CITY AREA NAME IN CAPITAL LETTERS\n\t";
  cin>>choice;
  int k=0;
  for(i=0;i<loop;i++)
  {

   if(choice[0]==s[i].place[0] && choice[1]==s[i].place[1] && choice[2] == s[i].place[2])
    {r=0;k++;
    if(k>1 && k%2==0)  //SEE F
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }

    s[i].placechoice();}
  }
  cout<<"\n"<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<"  STAUS:- "<<k<<" NUMBERS FOUND  "<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f;
  if(r!=0)
  cout<<"\nThe CITY AREA NAME "<<choice<<" You Have Entered Does Not Exist.";
  get = cont();
   if(get == 6)
  goto VINOD;
 }
 else if(v=='F'||v=='f')
 {
  cout<<"\nENTER  FIRST CHARACTER OF NAME ONLY IN CAPITAL LATTER\n\t";
  cin>>ch;
  int k=0;
  for(i=0;i<loop;i++)
  {

   if(ch==s[i].nm[0])
    {

     r=0;k++;
     if(k>=1 && k%2==0)      // STARTING WITH K=1& THEN MULTIPLE OF 2
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }

       s[i].nmchoice();
    }
  }
  cout<<"\n"<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<"  STAUS:- "<<k<<" NUMBERS FOUND  "<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f;
  if(r!=0)
  cout<<"\nThe CHARACTER "<<ch<<" You Have Entered Does Not Exist OR NOT IN CAPITAL.";
  get = cont();
   if(get == 6)
  goto VINOD;
 }
 else if(v=='P' || v=='p')
 {cout<<"\n\t\tTHIS CHOICE IS NOT AVAILABLE";
   getch();
  goto VINOD;
 }


 else if(v=='D'||v=='d')
  {
   for(i=0;i<loop;i++)
   {
   if(i>1 && i%2==0 )
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }
    // else
   s[i].nmchoice();
   }
  cout<<"\nSTAUS:- "<<i<<" NUMBERS FOUND";
  get = cont();
   if(get == 6)
  goto VINOD;
  }

 else
  {
  cout<<"\nPLEASE ENTER CHOICE No.like a/A/b/B/c/C/d/D/e/E/f/F  YOU FOOL";
  getch();
  start();
  }
 */
}
void dir :: nmchoice()
{

  cout<<nm<<" "<<snm<<"  \n"<<post<<endl<<place<<" "<<ct<<"\n\t\t\t\tPHONE1: "<<std<<"-"<<fone1<<"    MOBILE:"<<mobile<<"\n\t\t\t\tPHONE2: "<<std<<"-"<<fone2<<endl<<endl;

}
void dir :: snmchoice()
{

  cout<<snm<<" "<<nm<<"  \n"<<post<<endl<<place<<" "<<ct<<"\n\t\t\t\tPHONE1: "<<std<<"-"<<fone1<<"    MOBILE:"<<mobile<<"\n\t\t\t\tPHONE2: "<<std<<"-"<<fone2<<endl<<endl;

}
void dir :: ctchoice()
{

  cout<<ct<<" "<<place <<" \n"<<nm<<"  "<<snm<<endl<<post<<"\n\t\t\t\tPHONE1: "<<std<<"-"<<fone1<<"    MOBILE:"<<mobile<<"\n\t\t\t\tPHONE2: "<<std<<"-"<<fone2<<endl<<endl;

}
void dir :: placechoice()
{
  cout<<place<<" "<<ct<<" \n"<<nm<<"  "<<snm<<endl<<post<<endl<<"\t\tPHONE1: "<<std<<"-"<<fone1<<"\n\t\t\t\tPHONE2: "<<std<<"-"<<fone2<<"\tMOBILE:"<<mobile<<endl<<endl;

}

char option()
{
 int v;
 cout<<"\t\nENTER YOUR WAY TO FIND OUT PHONE NO.(n/N...d/D etc.)\n\n";
 cout<<"  N* By Typing Name"<<" \tS* By Typing Surname\n\n"
     <<"  C* By Typing City"<<" \tA* By Typing Area\n\n"
     <<"  F* By Typing First Character of Name\n\n"
     <<"  P* By Typing Phone No..\n\n"
     <<"  D* Want To See Whole Teliphone Directory List\n\n\t";
 v=getch();
 if(v==27)
 {
  closegraph();
  exit(0);
 }
 return (v);
}
void title (void)
{
 clrscr();
 char f=1,d=3;
 for(int i=0;i<80;i++)
 cout<<d;
 cout<<"********************************************************************************";
 cout<<"************************** TELIPHONE  DIRECTORY ********************************";
 cout<<"********************************************************************************"
     <<"*****************                                               *****************"
     <<"*************                                                    **************";
 cout<<"***********    COPYWRITE 2002 VINOD KOTIYA .ALL RIGHTS UNRESERVED   ************";
 cout<<"*************                                                     **************";
 for(i=0;i<80;i++)
 cout<<f;cout<<endl<<endl;
}


void welcome()
{ char l=177;
 _setcursortype(_NOCURSOR);
 cout<< "\n\n\n\n\n\n\t\tWELCOME TO INTERACTIVE TELIPHONE DIRECTORY";
 cout<<"\n\n\n\n\n\n\n\n\t     NOW LOADING...............................\n\t\t\t";
 for(int k=0;k<10;k++)
 {
  cout<<l;
  delay(500);
 }
 for( k=0;k<20;k++)
 {
  cout<<l;
  delay(200);
 }
 cout<<l<<l<<l<<l;
 _setcursortype(_NORMALCURSOR);
}
void start()
{
 title();
 char r;
 //setbkcolor(MAGENTA);
 cout<<"\nENTER YOUR CHOICE\n\n\n";
 cout<<" A* OPEN DIRECTORY  (press Enter or A)\n\n";
 cout<<" B* HELP  (press B)\n\n";
 cout<<" C* ABOUT... PROGRAM  (press C)\n\n";
 cout<<" D* ABOUT... ME    (press D)\n\n\t\t\t";
 r = getche();
 if(r==13 ||r=='a'||r=='A')
 {
  title();
  dir d;
  d.data();
 }
 else if(r=='b'||r=='B')
 {
  help();
  start();
 }
 else if(r=='c'||r=='C')
 {
  aboutp();
  start();
 }
 else if(r=='d'||r=='D')
 {
  aboutm();
  start();
  }
  else if(r==27)
  { closegraph();
    exit(0);
  }
  else
  { closegraph();
  exit(0);
  }
}
void help()
{title();
 cout<<"\n\n\t\t\t\tHELP\n\nPLEASE On The Caps Lock key FOR EASILY ACCESS \n\n";
 cout<<"PLEASE FOLLOW THE INSTRUCTION GIVEN IN PROGRAM\n\nYOU CAN CLOSE THE PROGRAM BY PRESSING Esc";
 cout<<"\n\n\n\n\t\tpress Any Key To Exit from Help";
 getch();
}
void aboutp()
{ title();
 cout<<"\n\t\t\t\tABOUT...PROGRAM\n\n THIS PROGRAM IS CREATED By  VINOD KOTIYA \n DATA ENTRY IS DONE By AMIT KOTIYA";
 cout<<"\n DATE OF CREATION :- 16-Jun-2002 to 17-Jun-2002";
 cout<<"\n EXE TYPE :- Dos";
 cout<<"\n PROGRAMMING LANGUAGE USED :- C++\n"
     <<" PROGRAM SIZE ABOUT:- 70 KB\n";
 cout<<"\n THIS PROGRAM CONTAINS NAME'S ,TEL No.,Mobile No. & Addresses\n";

 cout<<"\n\t\t\tpress Any Key to return";
 getch();
}
void aboutm()
{  title();
 cout<<"\t\t\t\tABOUT...ME\n\n NAME :- VINOD KOTIYA"
     <<"\n\ts/o SHRI R.K.KOTIYA"
     <<"\n NATIONALITY :- INDIAN"
     <<"\n\n B.E.Second Year in INFORMATION TECHNOLOGY"
     <<"\n BHOPAL ENGINEERING COLLEGE "
     <<"\n\n Address:- S-2 ,SHRIMAYA APARTMENT SECTOR -B/363,\n"
     <<"   SARVDHARM COLONY KOLAR ROAD BHOPAL (M.P.)"
     <<"\n   PHONE:- +91-0755-794428";
 cout<<"\n\t\t\tpress any Key to return";
 getch();
}
int cont()
{
 char w;
 cout<<"\nAre You Want to SEARCH Again ?(Y/N)-";
 w=getche();
 if(w=='y' || w=='Y'|| w==13)
 return(6);
 else
 exit(0);
}


