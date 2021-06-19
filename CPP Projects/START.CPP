#include<iostream.h>
#include<conio.h>
#include<dos.h>
void welcome();
void start();
void help();
void aboutp();
void aboutm();
void main(void)
{
 clrscr();
 welcome();
 delay(1000);
 start();
 getch();
}
void welcome()
{
 cout<< "\n\n\n\n\n\n\t\t\tWELCOME TO INTERACTIVE TELIPHONE DIRECTORY";
}
void start()
{
 char r;
 cout<<"\n\n\n\n\n\nENTER YOUR CHOICE\n\n\n";
 cout<<"A*OPEN DIRECTORY  (press Enter or A)\n\n";
 cout<<"B*HELP  (press B)\n\n";
 cout<<"C*ABOUT... PROGRAM  (press C)\n\n";
 cout<<"D*ABOUT... ME    (press D)\n\n";
 r = getche();
 if(r==13 ||r=='a'||r=='A')
 {
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
  else
  getch();
}
void help()
{clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tHELP\n\nPLEASE On The Caps Lock key FOR EASILY ACCESS \n\n";
 cout<<"PLEASE FOLLOW THE INSTRUCTION GIVEN IN PROGRAM";
 cout<<"\n\n\n\n\t\tpress Any Key To Exit from Help";
 getch();
}
void aboutp()
{
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tABOUT...PROGRAM\n\n THIS PROGRAM IS CREATED By  VINOD KOTIYA \n DATA ENTRY IS DONE By AMIT KOTIYA";
 cout<<"\n DATE OF CREATION :- 16-Jun-2002 to 17-Jun-2002";
 cout<<"\n EXE TYPE :- Dos";
 cout<<"\n PROGRAMMING LANGUAGE USED :- C++\n"
     <<" PROGRAM SIZE ABOUT:-   KB\n";
 cout<<"\n THIS PROGRAM CONTAINS NAME ,TEL No.,Mobile No. & Address\n";

 cout<<"\n\n\t\t\tpress Any Key to return";
 getch();
}
void aboutm()
{
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tABOUT...ME\n\n NAME :- VINOD KOTIYA"
     <<"\n\ts/o SHRI R.K.KOTIYA"
     <<"\n NATIONALITY :- INDIAN"
     <<"\n\n B.E.Second Year in INFORMATION TECHNOLOGY"
     <<"\n BHOPAL ENGINEERING COLLEGE "
     <<"\n\n Address:- S-2 ,SHRIMAYA APARTMENT SECTOR -B/363,\n"
     <<"   SARVDHARM COLONY KOLAR ROAD BHOPAL (M.P.)"
     <<"\n   PHONE:- +91-0755-794428";
 cout<<"\n\n\n\t\t\tpress any Key to return";
 getch();
}


















