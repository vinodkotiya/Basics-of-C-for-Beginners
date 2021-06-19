#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],m,i,n,c,d;
clrscr();
printf("Enter elements of more then 3 digits\n");
for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
for(i=0;i<10;i++)
 {
   n=a[i];
   for(c=0 ;n!=0;n=n/10 )
     {
     m=n%10;
     c=(c*10)+m;
     }

  printf("\nreverse of %d is %d",a[i],c);
  }
getch();
}
