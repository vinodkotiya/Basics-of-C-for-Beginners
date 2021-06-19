#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 char ch; int gun=206,c=18;
 v:

   ch = getch();
  if(ch == 75 && c>=1)
  {c--;
  gotoxy(c,23);
  printf(" %c                            ",gun);

  }
  else if(ch ==77 &&c<=75)
  {c++;
  gotoxy(c,23);
  printf(" %c                            ",gun);
  }
  else if(ch == 27)
  exit (0);
  else
  printf("%c",ch);
  goto v;

}