#include<iostream.h>
#include<conio.h>
void main(void)
{
int a[5];
int *p;int i;clrscr();
p=a;
cout<<"\nEnter array";
for(i=0;i<5;i++)
  {
  cin>>p[i];
  }
for(i=0;i<5;i++)
 {
 cout<<"\n"<<*(p+i);
 }
 getch();
}