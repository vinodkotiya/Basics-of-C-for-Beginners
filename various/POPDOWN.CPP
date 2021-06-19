#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int r=1,rhk=0;
 char nm[10];
 clrscr();
 printf("Enter your name");
 scanf("%s",&nm);
 while(!kbhit())
 {
  clrscr();
  gotoxy(35,r);
  printf("%s",nm);
  if (rhk == 0)
  r++;
  else
  r =23;
  if(r>=24)
  rhk=1;
  else
  rhk=0;
  delay(150);
 }
getch();
}