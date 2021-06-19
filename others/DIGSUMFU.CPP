#include<iostream.h>
#include<conio.h>
int sum(int);
void main(void)
{
int a[5],i,s;
for(i=0;i<5;i++)
  {cout<<"Enter elements";
  cin>>a[i];
  }
for(i=0;i<5;i++)
 {s=sum(a[i]);
 cout<<"\nsum of digits"<<a[i]<<"="<<s;
 }
}
int sum(int a)
{
 int i=0;
 while (a!=0)
  {
  i=i+(a%i);
  a=a/10;
  }
  return (i);
  getch();
}