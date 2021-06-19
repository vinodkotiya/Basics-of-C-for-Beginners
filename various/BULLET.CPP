#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int r=23,rhk=0,j=24;
 clrscr();
 while(!kbhit())
 {
  clrscr();
  gotoxy(37,r);
  printf(" %c                                         ",j);
  if (rhk == 0)
  r--;
  else
  r =23;
  if(r<=1)
  rhk=1;
  else
  rhk=0;
  delay(80);
 }
getch();
}