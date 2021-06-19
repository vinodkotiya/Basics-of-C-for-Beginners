/*MATCHBOX.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void title();
void end();
void vin();
void title()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(DEFAULT_FONT,0,5);
      setcolor(LIGHTGREEN);
    setbkcolor(BROWN);
    outtext("MATCH STICK GAME");       // delay(15555);
  //clrscr();
 outtextxy(0,40,"*********************************************************");
 cout<<"\n\n\n\n********************************************************************************";
 cout<<"ABOUT GAME:-    #THIS IS MATCH STICK GAME ";
 cout<<"\n\t\t#THERE ARE 21 MATCH STICKS\n \t\t#YOU CAN PICK ONLY 1/2/3/4 MATCH STICK(S) AT A TIME\n\t\t#WHOEVER IS FORCED TO PICK THE LAST MATCH STICK LOSSES THE GAME";
 cout<<"\n```IF YOU DEFEAT THE COMPUTER YOU WILL WIN \n\t\t\t\HOLIDAY PACKAGE FOR SWITZERLAND & Rs. 1 CRORE CASH ''''";
 cout<<"\n********************************************************************************";
 cout<<"********************************************************************************";
}
void main(void)
{
 int n,l=21,i ,m;  char nm[10],a;
 vin();
 delay(1300);
 title();
 cout<<"\n\t\tEnter your name  ";
 cin>>nm;  cout<<"\n";
 title();
 for(i=1;i<=4;i++)
  {
  m=l;
   for( ;m>=1 ;m--)
    {
  //  setcolor(GREEN);
    cout<<"|  ";
  //  outtext(" |");
    }
  v:
  cout<<"\n\n\tMr."<<nm <<"  YOUR TURN PICK STIC(S) 1/2/3/4 :-     ";
  cin>>n;
   if(n==0)
    exit(0);
  if(n>=5||n<1)
   {cout<<"\nPLEASE PICK ONLY 1/2/3/4 STICK(S) AGAIN";
    goto v;
   }
  cout<<"\nCOMPUTERSTURN    PICKING :- "<<5-n<<"  MATCH STICKS\n";
  l=l-5;
  cout<<"\n\t\tMATCH STICKS LEFT :-    "<<l<<"\n\n";

  if(l==1)
   {
    cout<<"\nMr."<<nm<<"YOU HAVE TO PICK LAST MATCH STICK SO YOU LOSES THE GAME";
    //cout<<"\n\t\t````COMPUTER WINS''''";
    end();

    }
  }
 getch();
}
void end()
{int gd=DETECT,gm;char a;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(3,DEFAULT_FONT,5);
      textcolor(MAGENTA+128);
    setbkcolor(GREEN);
    outtextxy(0,200,"        COMPUTER WINS");       // delay(15555);
    settextstyle(SMALL_FONT,0,5);
    setcolor(BLUE);
    outtextxy( 140,250,"ARE YOU WANT TO TRY AGAIN(Y/N)");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
     a=getchar();
    if(a=='Y'||a=='y')
      main();
    else
     vin();
  //clrscr();
}
void vin()
{  int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(TRIPLEX_FONT,0,5);
      setcolor(RED);
    setbkcolor(LIGHTGREEN);
    outtextxy(0,210," presented by VINOD KOTIYA ");
    outtextxy(0,245,"****************************************************");
    /*sound(30);
    delay(1200);
    nosound();*/
}