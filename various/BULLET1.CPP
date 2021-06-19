#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int r=23,j=24;
 while(r!=1)
  {
  clrscr();
  gotoxy(37,r);
  printf(" %c                                         ",j);
  r--;
  delay(80);
  }
getch();
}