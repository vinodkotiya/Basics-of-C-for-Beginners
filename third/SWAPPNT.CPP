#include<iostream.h>
#include<conio.h>
#include<c:\third\creators.h>
void swap(int *,int *);
void main()
{
 clrscr();
 creators();
 int a,b;
 cout<<"\nEnter two no. followed by enter\n";
 cin>>a>>b;
 swap(&a,&b);

 cout<<"\nSwaped values are "<<a<<b;
 getch();
}
void swap (int *p,int *q)
{
 cout<<"\nOriginal values are "<<*p<<*q<<"\nAddress of first is "<<p<<"\tAddress of second is ="<<q<<endl;
 int temp;

 temp = *p;
 *p = *q;
 *q = temp;
}
