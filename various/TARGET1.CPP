#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int col ,j=2;
 //window(1,1,75,3);
 for(int i=0;i<1;i++)
 {
  for(col=1;col<=75;col++)
  {
  gotoxy(col,1);
  printf(" %c ",j);delay(30);
  }
  for(col=75;col>=1;col--)
  {
  gotoxy(col,1);
  printf(" %c ",j);delay(30);
  }
 }
 getch();
}