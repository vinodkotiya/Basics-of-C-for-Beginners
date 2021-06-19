#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a no.");
scanf("%d",&n);
if(n>0&&n<=9)
printf("One Digit");
if(n>9&&n<=99)
printf("Two Digit");
if(n>99&&n<=999)
printf("Three Digit");
getch();
}
