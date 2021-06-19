#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void path(int p)
{
 int r=22,j=24;
 while(r!=1)
  {
  gotoxy(p,r);
  printf(" %c                                         ",j);
  delay(50);
  gotoxy(p,r);
  printf("  ");
  r--;
  }
}

void main()
{
 clrscr();
 char ch; int gun=206,c=35;
 int p;
 printf("\n\n\n\n\n\t\t\tPRESS DIRECTION KEYS FOR MOVEMENT \n\n\n\t\t\tPRESS SPACEBAR TO FIRE");getch();
 clrscr();
 do
 {
 ch = getch();
  if(ch == 75 && c>=1)
  {
   c--;
   gotoxy(c,23);
   printf(" %c                            ",gun);
 }
  else if(ch ==77 && c<=75)
  {c++;
  gotoxy(c,23);
  printf(" %c                            ",gun);
  }
  else if(ch == 32)
  {
       p = c;
       path(p);
     }
 }while(ch!=27);
}