/*ROTATE.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int c =1,j=2,chk=0;
 //char nm[20];
 clrscr();
 //scanf(" %s ",&nm);
 while(!kbhit())
 {
  clrscr();
  gotoxy(c,2);
  printf(" %c ",j);
  if(chk ==0)
  c++;
  else
  c--;
  //else
  //c=69;
  if(c>=70)
  chk=1;
  if(c<=1)//else
  chk==0;
  delay (20);
  }
 getch();
}