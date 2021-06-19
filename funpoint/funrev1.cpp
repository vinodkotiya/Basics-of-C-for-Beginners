#include<stdio.h>
#include<conio.h>

int chk()
{
 int a,b,j,c=0;
 printf("Enter a no");
 scanf("%d",&a);
 j=a;
 while(a!=0)
 {
  b=a%10;
  c=(c*10)+b;
  a=a/10;
 }
 printf("\nReverse %d",c);
 if(c==j)
 return(1);
 else
 return(0);
}
int chk();

void main(void)
{
 clrscr();
 int d,g;
 d=chk();
 if(d==1)
 printf("\n both eqal");
 else
 printf("\nBoth uneqal");
 getch();
}