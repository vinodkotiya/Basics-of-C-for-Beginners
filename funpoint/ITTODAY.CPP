#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,l;
clrscr();
for(i=1;i<=4;i++)
{
 for(j=1;j<=4-i;j++)
 {printf(" ");}
 for(k=1;k<=i;k++)
 {printf("%d",k);}
 for(l=k-2;l>=k-i;l--)
 {printf("%d",l);}
 printf("\n");
}
getch();
}