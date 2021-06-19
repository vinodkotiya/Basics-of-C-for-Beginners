//warning before running read sorce

#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void target()
{
 int c ,j=2;
 for(int i=0;i<1;i++)
 {
  for(c=1;c<=75;c++)
  {
  clrscr();
  gotoxy(c,9);
  printf(" %c ",j);delay(50);
  }
  for(c=75;c>=1;c--)
  {
  clrscr();
  gotoxy(c,9);
  printf(" %c ",j);delay(50);
  }
 }
 getch();
}
void path(int p)
{
 int r=23,j=24;
 while(r!=1)
  {
  //clrscr();
  gotoxy(p,r);
  printf(" %c                                         ",j);
  r--;
  delay(80);
  }
exit(0);
}

void main()
{nosound();
 clrscr();
 char ch,fire; int gun=206,c=35;
 int p;
 printf("\nPRESS DIRECTION KEYS FOR MOVEMENT \n\nPRESS SPACEBAR TO FIRE");getch();
 clrscr();
 target();
 v:
 ch = getch();
 if(ch == 75)
  {
   c--;
   gotoxy(c,23);
   printf(" %c                            ",gun);
   fire =getch();
   if(fire == 32)
     {
       p = c;
       path(p);
     }
  }
  else if(ch ==77)
  {c++;
  gotoxy(c,23);
  printf(" %c                            ",gun);
   fire =getch();
   if(fire == 32)
     {
       p = c;
       path(p);
     }
  }
  else if(fire == 27)
  exit (0);
  else
  printf("%c",ch);
  goto v;

}