#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 do
 {printf("\nPress a key");
 ch = getche();
 printf("\nscan code = %d, %c",ch,ch);
 }while(ch !='o');
 getch();
}