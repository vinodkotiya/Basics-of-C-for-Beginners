#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{ char ch;
while(1)
{
clrscr();
 cout<<"\n1.GRAPHICS\n2.MATCHBOX\n3.DIRECTION";
 ch=getche();
 switch(ch)
 {
  case '1':system("graphics");break;
  case '2':system("matchbox");break;
  case '3':system("direction");break;
  case '4':clrscr();
  textbackground(RED);
  textcolor(BLUE);
  gotoxy(15,12);
  cprintf("Thisd");
  exit(0);break;
  default:cout<<"\ninvalid choice";
  delay(200);
  break;
 }
 }
 getch();
}