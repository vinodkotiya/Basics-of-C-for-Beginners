
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
int s;//repeat=0;
void cont();
void welcome();
void start();
void help();
void aboutp();
void aboutm();
void main(void);
char option();
void title(void);
char j,f=4;
class dir
{
  long int fone,std;        //71 bytes each person
  double mobile;
  char nm[20],snm[20],place[22],ct[15];

 public:
 void set(long int , long int ,double,char[],char[],char[],char[]);
 void nmchoice();
 void snmchoice();
 void ctchoice();
 void placechoice();
 void data();
};
void dir :: set( long int s,long int f,double m,char n[20],char sn[20],char c[15],char p[22])
{
 std = s;
 fone = f;
 mobile = m;
 strcpy(nm,n);
 strcpy(snm,sn);
 strcpy(ct,c);
 strcpy(place,p);

}

void dir :: data()
{
 int i,v,r=1,loop;
 char choice[10],ch,e;
 dir s[47];
 s[0].set(755,794428, 0,"RAMESH","KOTIYA","BHOPAL","SARVDHARM COL");
 s[1].set(95731,463057, 0,"MAHENDRA","KADAM","INDORE","INDRAPURI");
 s[2].set(755,763809,98272.04449 ,"REWARAM","JATAV","BHOPAL","TTNAGAR");
 s[3].set(755,736852, 0 ,"JAI","NEEM","KHAMGAON"," ");
 s[4].set(755,767173, 0 ,"PAPPU"," ","BHOPAL","TTNAGAR");
 s[5].set(95731,363153,98272.15774 ,"RAJKUMAR","NEEM","INDORE","AZAD NAGAR");
 s[6].set(755,574446, 0,"RAMKUMAR","SHARMA","BHOPAL","MAYUR PARK");
 s[7].set(755,556544, 0,"ANIL","SHRIVASTAVA","BHOPAL","JAHANGIRABAD");
 s[8].set(755,794840, 0,"RAJABABU","SHRIVAS","BHOPAL","SARVADHARAM COL.");
 s[9].set(755,793714, 0,"VAIBHAV","UNDE","BHOPAL","RAJHARSH COLONY");
 s[10].set(755,559199,0,"KUNAL","PUROHIT","BHOPAL","MAYUR PARK");
 s[11].set(755,794821,0,"RAMESH","VERMA","BHOPAL","SARVADHARAM COL");
 s[12].set(755,794146,0,"VARSHA","MAHIRALE","BHOPAL","SARVADHARAM COL.");
 s[13].set(755,731244,0,"RAMKISHAN","JATAV","BHOPAL","P&T COLONY");
 s[14].set(755,535599,0,"RAMKISHAN","JATAV","BHOPAL","EXCHANGE");
 s[15].set(755,535721,0,"UMESH"," ","BHOPAL","HAMIDIA HOSPITAL");
 s[16].set(755,660666,0,"DIGVIJAY","CHOUHAN ","BHOPAL","POLYTECHNIC");
 s[17].set(755,793511,0,"MAHESH","VERMA","BHOPAL","SARVADHARAM COLONY");
 s[18].set(755,774139,0,"RAVINDRA","MANAVAT","BHOPAL"," ");
 s[19].set(755,556047,0,"AMIT","GUPTA","BHOPAL","6 NO. STOP");
 s[20].set(755,792074,0,"RAIGAS","R-15380","BHOPAL","BEEMAKUNJ");
 s[21].set(755,428204,0,"SHANKAR","PATEL","BHOPAL","SHAHPURA CHAWANI");
 s[22].set(755,468269,0,"KUNAL","GAJBHIYE","BHOPAL ","E3-345 ARERA COLONY");
 s[23].set(755,779462,0,"RAJU","BHARAT","BHOPAL","NORTH T.T.NAGAR");
 s[24].set(755,421774,0,"AMOL"," ","BHOPAL","NEAR AYUSHMAN HOSPITAL");
 s[25].set(755,436852,0,"PIYUSH","MALVIYA ","BHOPAL","ROYAL MARKET");
 s[26].set(0,0,98270.15072,"RAM GOPAL","ARYA","BHOPAL","SARVADHARAM COLONY");
 s[27].set(95731,710868,0,"NAND KISHOR","NEEM","INDORE","MUSA KHEDI");
 s[28].set(957595,55361,0,"BHAGWATI","PATEL","VIDISHA","KAKHPUR");
 s[29].set(7542,30583,56528*56,"BAKORIYA","A.D.S.","GUNA"," ");
 s[30].set(957562,63461,0,"KUSHIRAM"," ","SIHORE","BADNAGAR");
 s[31].set(957562,63441,0,"KUSHIRAM"," ","SIHORE","BADNAGAR");
 s[32].set(7591,53500,0,"RAJKUMAR","KABEERPANTHI","VIDISHA","SIRONGE");
 s[33].set(957595,55389,0,"HEERALAL"," ","VIDISHA","NATERAN");
 s[34].set(734,517982,0,"HANSABHABHI"," ","UJJAIN"," ");
 s[35].set(7263,55840,0,"NARAYAN SINGH","PIMPLE","MAHARASHTRA","KHAMGAON");
 s[36].set(755,794348,0,"GF","SHAHEER","BHOPAL","SARVADHARAM COLONY");
 s[37].set(755,422980,422981,"AYUSHMAN","HOSPITAL","BHOPAL","SHAHPURA");
 s[38].set(755,793600,0,"RITUMEMORIAL","HOSPITAL","BHOPAL","KOLAR ROAD");
 s[39].set(755,793889,0,"POLICESTATION"," ","BHOPAL","KOLAR ROAD");
 s[40].set(755,275525,0,"PRIYANSHU","MISHRA","BHOPAL"," ");
 s[41].set(755,274147,98260.11268,"BUNTY","AD TECH","BHOPAL","MPNAGAR");
 s[42].set(755, 0 ,0,"VISHWAS","RATHORE","BHOPAL","BAIRAGARH");
 s[43].set(7542,54916,0," ","SANGER","GUNA","A.D.S.O.");
 s[44].set(755,540841,0,"ENQUIRY","NADARA BUS STAND","BHOPAL","HAMIDIA ROAD");
 s[45].set(755,540806,0,"HAMIDIA","HOSPITAL","BHOPAL","HAMIDIA ROAD");
 s[46].set(755,552490,0,"RAJEEV","GOVT.S.H.S.SCHOOL","BHOPAL","7 NO.STOP");
 s[47].set(7542,56228,0,"BAKORIYA","A.D.S.","GUNA","  ");
 s[48].set(95731,720523,788795,"A.K.","BAKLIBAL","INDORE","  ");
 s[49].set(7642,52631,52408,"ANIL","UPADHYA","MANDLA","  ");
 s[50].set(761,327139,0,"SUDHIR","AGRAWAL F.O.","JABALPUR","  ");
 s[51].set(957574,54236,0,"RAKESH","SHRIVASTAVA A.D.S.","HOSHNGABAD","  ");
 s[52].set(957578,52093,52851,"RAKESH","SHRIVASTAVA A.D.S.","PANCHMADI","  ");
 s[53].set(957592,34620,35965,"ATUL","THAPER A.D.S.","VIDISHA","  ");
 s[54].set(957372,55089,54818,"BANDNA","PANERI A.D.S.","RAJGARH","  ");
 s[55].set(957562,56673,55619,"R.S.","SOLNKI A.D.S.","SIHORE","  ");
 s[56].set(7632,41781,0,"SARAD","SHRIVASTAVA A.D.S.","BALAGHAT","  ");
 s[57].set(7422,42543,55751,"P.C.","GUPTA A.D.S.","MANDSORE","  ");
 s[58].set(957792,30120,33915,"A.K.","PATEL A.D.S.","NARSINGHPUR","  ");
 s[59].set(7822,2704,0,"M.L.","SONI A.D.S.","SAHDOL","  ");
 s[60].set(95734,510620,0,"S.P.","DUBAY A.D.S.","UJJAIN","  ");
 s[61].set(957292,48584,0,"K.C.","BADJATYA A.D.S.","DHAR","  ");
 s[62].set(755,243574,0,"SUNIL","SHRIVASTAVA F.O.S.","BHOPAL","  ");
 s[63].set(755,535737,555835,"POLY MARKATING","  ","BHOPAL","HAMIDIA ROAD");
 s[64].set(957482,22520,0,"K.S.","RATHORE","RAISEN","  ");
 s[65].set(957482,22547,0,"JAGDISH","MANDLEKAR","RAISEN","  ");
 s[66].set(755,551773,778237,"DR.H.K.","CHATURBEDY J.D.S.","BHOPAL","  ");
 s[67].set(755,534335,597357,"PUROSHOTTAM","SHARMA","BHOPAL","BALLABH BHAVAN");
 s[68].set(755,552118,0,"H.O.SERICULTURE","  ","BHOPAL","SATPUDA");
 s[69].set(755,748639,0,"NEERAJ","BHARTI","BHOPAL","KAMLAPARK");
 s[70].set(755,556811*480,0,"AFSER","KHAN","BHOPAL","P.H.Q.");
 s[71].set(755,597402,0,"S.K.","VISVAKARMA","BHOPAL","GRAMO.MANTRALAYA");
 s[72].set(755,597388,576467,"R.K.","TIWARI","BHOPAL","GRAMO.MANTRALAYA");
 s[73].set(755,625293,0,"K.M.","KANKANE","BHOPAL","  ");
 s[74].set(755,767462,0,"S.K.","JADHAV","BHOPAL","  ");
 s[75].set(755,584685,0,"PROMILA","KADAM","BHOPAL"," ");
 s[76].set(755,551316,0,"USHA","THILLORE","BHOPAL"," ");
 loop=77;
 v=option();
 title();

 if(v=='a'||v=='A')
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
  cont();
 }
  else if(v=='b'||v=='B')
 {
  cout<<"\nENTER ONLY SURNAME \n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].snm)==0)
    {r=0;
    s[i].snmchoice();}
  }
  if(r!=0)
  cout<<"\nThe SURNAME "<<choice<<" You Have Entered Does Not Exist.";
  cont();
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
    if(k>1 && k%4 ==0)
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }

    s[i].ctchoice();}
  }
  cout<<"\n"<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<"  STAUS:- "<<k<<" NUMBERS FOUND  "<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f;
  if(r!=0)
  cout<<"\nThe CITY NAME "<<choice<<" You Have Entered Does Not Exist.";
  cont();
 }
 else if(v=='d'||v=='D')
 {
  cout<<"\nENTER ONLY CITY AREA NAME IN CAPITAL LETTERS\n\t";
  cin>>choice;
  int k=0;
  for(i=0;i<loop;i++)
  {

   if(choice[0]==s[i].place[0] && choice[1]==s[i].place[1] && choice[2] == s[i].place[2])
    {r=0;k++;
    if(k>1 && k%4==0)
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
  cont();
 }
 else if(v=='e'||v=='E')
 {
  cout<<"\nENTER  FIRST CHARACTER OF NAME ONLY IN CAPITAL LATTER\n\t";
  cin>>ch;
  int k=0;
  for(i=0;i<loop;i++)
  {

   if(ch==s[i].nm[0])
    {

     r=0;k++;
     if(k>1 && k%4==0)
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
  cont();
 }
 else if(v=='f'||v=='F')
  {
   for(i=0;i<loop;i++)
   {
   if(i>1 && i%4==0 )
      {
       cout<<"\nPRESS ENTER TO PROCEDE";e=getch();
       if(e==13)
	{title();}
      }
    // else
   s[i].nmchoice();
   }
  cout<<"\nSTAUS:- "<<i<<" NUMBERS FOUND";
  cont();
  }

 else
  {
  cout<<"\nPLEASE ENTER CHOICE No.like a/A/b/B/c/C/d/D/e/E/f/F  YOU FOOL";
  getch();
  start();
  }

}
void dir :: nmchoice()
{

  cout<<nm<<" "<<snm<<"  \n"<<place<<" "<<ct<<"\t\tPHONE: "<<std<<"-"<<fone<<"\tMOBILE:"<<mobile<<endl<<endl;

}
void dir :: snmchoice()
{

  cout<<snm<<" "<<nm<<"  \n"<<place<<" "<<ct<<"\t\tPHONE: "<<std<<"-"<<fone<<"\tMOBILE:"<<mobile<<endl<<endl;

}
void dir :: ctchoice()
{

  cout<<ct<<" "<<place<<" \n"<<nm<<"  "<<snm<<"\t\tPHONE: "<<std<<"-"<<fone<<"\tMOBILE:"<<mobile<<endl<<endl;

}
void dir :: placechoice()
{
  cout<<place<<" "<<ct<<" \n"<<nm<<"  "<<snm<<"\t\tPHONE: "<<std<<"-"<<fone<<"\tMOBILE:"<<mobile<<endl<<endl;

}
void main(void)
{
 clrscr();
 //if(repeat==0)
    {
    welcome();
    }
 //else
     //delay(2000);
 start();
// title();
// dir d;
// d.datacomman();
 getch();
}

char option()
{
 int v;
 cout<<"\t\nENTER YOUR WAY TO FIND OUT PHONE NO.(a/A...f/F etc.)\n\n";
 cout<<"  A* By Typing Name"<<" \tB* By Typing Surname\n\n"
     <<"  C* By Typing City"<<" \tD* By Typing Area\n\n"
     <<"  E* By Typing First Character of Name\n\n"
     <<"  F* Want To See Whole Teliphone Directory List\n\n\t";
 v=getch();
 if(v==27)
 exit(0);
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
{ char l=178;
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
}
void start()
{
 title();
 char r;
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
  exit(0);
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
     <<" PROGRAM SIZE ABOUT:- 50 KB\n";
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
void cont()
{
 char w;
 cout<<"\nAre You Want to SEARCH Again ?(Y/N)-";
 w=getche();
 if(w=='y' || w=='Y'|| w==13)
 {//repeat=1;
   start();//main();
 }
 else
 exit(0);
}


