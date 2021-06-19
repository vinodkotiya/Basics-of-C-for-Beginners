#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char nm1[10],nm2[20];
printf("type first name ");
gets(nm1);
printf("Enter sec name");
scanf("%s",nm2);
strcat(nm2,nm1);
printf("%s",nm2);
getch();
clrscr();
}