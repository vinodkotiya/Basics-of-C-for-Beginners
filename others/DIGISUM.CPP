#include<stdio.h>
#include<conio.h>
void main()
{
int a[4],i,n,m,sum;
clrscr();
printf("Enter elements of more then 3 digits");
for(i=0;i<4;i++)
 {
 scanf("%d",&a[i]);
 }
for(i=0;i<4;i++)
 {
   n=a[i];
   for(sum=0;n!=0;n=n/10 )
     {
     m=n%10;
     sum=sum+m;
     }
  printf("\nsum of %d digit=%d",a[i],sum);
  }
getch();
}
