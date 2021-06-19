#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(void)
{
long unsigned int n,m,p,sum=0;
int exp,i;
clrscr();
cout<<"Enter no";
cin>>n;
p=n;
for(i=0;n!=0;i++)
{
 n=n/10;
 }
 cout<<"\n NO has "<<i<<"  digits";
  exp=i-1;
for(i=0;p!=0;i++)
  { m=p%10;
   sum=sum+(m*pow(10,exp));
   exp=exp-1;
   p=p/10;
   }
   cout<<"\nThe reverse no is "<<sum;
getch();
}