/*MATCHY1.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
//#include"random.cpp"
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<graphics.h>
#include<dos.h>
void title();
int game(int);
void end(int);
void vin();
const unsigned long mult_ =234567821;
const unsigned long mod_  =ULONG_MAX;

class random
{
 unsigned long t;
 void randomize()
 {
  t = (mult_*t+1)%mod_;
 }
 public:
  random()
  {
   t = time(NULL);
  }
  int integer(int min ,int max)
  {
   randomize();
   return min+t%(max-min+1);
  }
};
void title()
{

    settextstyle(DEFAULT_FONT,0,5);
      setcolor(LIGHTGREEN);
    setbkcolor(BROWN);
    outtext("MATCH STICK GAME");       // delay(15555);
  //clrscr();
 outtextxy(0,40,"*********************************************************");
 cout<<"\n\n\n\n********************************************************************************";
 cout<<"ABOUT GAME:-    #THIS IS MATCH STICK GAME ";
 cout<<"\n\t\t#HERE SOME MATCH STICKS WILL APPEAR RANDOMLY(20or21or22or23or24) \t\t#YOU CAN PICK ONLY 1/2/3/4 MATCH STICK(S) AT A TIME\n\t\t#WHOEVER IS FORCED TO PICK THE LAST MATCH STICK LOSSES THE GAME";
 cout<<"\n```IF YOU DEFEAT THE COMPUTER YOU WILL WIN \n\t\t\t\HOLIDAY PACKAGE WITH OSAMA BIN LADEN & Rs. 1 CRORE CASH ''''";
 cout<<"\n********************************************************************************";
 cout<<"********************************************************************************";
}

void end(int j)
{


     gotoxy(1,1);
    settextstyle(3,DEFAULT_FONT,5);
      textcolor(MAGENTA+128);
    setbkcolor(GREEN);
    if(j==1)
    outtextxy(0,200,"        COMPUTER WINS");       // delay(15555);
    else
     outtextxy(0,200,"     YOU ARE THE VINNER");
    settextstyle(SMALL_FONT,0,5);
    setcolor(BLUE);
    outtextxy( 140,250,"ARE YOU WANT TO TRY AGAIN(Y/N)");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";


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
int game(int x)
{
  int com,man;

  int n,i ,m;  char nm[10],a;
   unsigned int l=x;
  cout<<"\n\t\tEnter your name  ";
  cin>>nm;  cout<<"\n";
  clearviewport();gotoxy(1,1);
  title();
  cout<<"    THIS TIME TOTAL NO OF MATCH STICK IS "<<x<<endl;
  int t = l/5;
  for(i=1;l!=1;i++)
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
  cin>>n; man=n;
   if(n==0)
    exit(0);
  if(n>=5||n<1)
   {cout<<"\nPLEASE PICK ONLY 1/2/3/4 STICK(S) AGAIN";
    goto v;
   }
   l=l-n;
    if(l>5)
    com=5-n;

    else if(l==5)
    com=4;
    else if(l==4)
    com =3;
    else if(l==3)
    com =2;
    else if(l==2)
    com=1;


 cout<<"\nCOMPUTERSTURN    PICKING :- "<<com<<"  MATCH STICKS\n";
  l=l-com;
  cout<<"\n\t\tMATCH STICKS LEFT :-    "<<l<<"\n\n";

  if(x%2==1&&l==1)
   {
    cout<<"\nMr."<<nm<<"YOU HAVE TO PICK LAST MATCH STICK SO YOU LOSES THE GAME";
    //cout<<"\n\t\t````COMPUTER WINS''''";
    delay(1000);
    return (1);

    }
   else if(x%2==0&&l==1)
   {
    delay(1000);
    return (2);
    }
  }


}
void main()
{

  vin();
  delay(1300);
  clearviewport();
  title();
  RESTART:
  class random r;
 int n= r.integer(20,24);
  int e = game(n);
  if(e==1)
  {clearviewport();
  end(1);
  }
  else if(e==2)
  {clearviewport();
  end(2);
  }
  char a;
   cin>>a;
    if(a=='Y'||a=='y')
      goto RESTART;
    else
     {vin();
     getch();
     }
 getch();
}