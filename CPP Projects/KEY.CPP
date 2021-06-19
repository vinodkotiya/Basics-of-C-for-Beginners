#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
void check(int a)
{
 static int press;
 press = a;
}
void main()
{nosound();
clrscr();
 char c;
 int prevup =0, up=1;
 while(1)
 {
  /*if(up != 0)
  nosound();
  else
  cout<<"keyup";*/
  if(!kbhit())
  {up = 1;cout<<"ya\n";}
  else
  cout<<"\nno\n";
  if(!kbhit())
  cout<<"OH";
  up++;
  c=getch();

  if(c=='m')
  {exit (0);}
  else
  {if(!kbhit())
   { sound(256);  delay(1000);nosound();}
    //else
    //nosound();
  }
  cout<<c;
  //you can us if(!kbhit()) many times always true in 1 hit
 }
 /*while(1)
 {
 if(kbhit())
  {cout<<"no";}
 else if(!kbhit())
  {prevup = up;up++;cout<<"ya";
  c=getche();
   if(c=='m') exit (0);}

 } */
}