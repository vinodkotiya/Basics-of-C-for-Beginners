/*ROUND.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int c=1,r=0,chk=0,rhk=0;
char nm[20];
clrscr();

printf("Enter your name");
scanf("%s",nm);
while (!kbhit())
 {
 clrscr();
 gotoxy(c,r);
 printf("%s",nm);
 if(chk==0)
 c+=3;
 else
 c-=3;
 if(rhk==0)
 r++;
 else
 r--;
 if(c>=75)
 chk=1;
 if(c<=1)
 {sound (1430);
  delay(300);
  nosound();
 chk=0;     }
 if(r>=25)
  rhk=1;
 if(r<=1)
 rhk=0;
  delay(50);
 }
getch();
}
