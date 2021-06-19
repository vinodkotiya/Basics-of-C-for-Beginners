#include<iostream.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
 clrscr();
 int a,b;
 cin>>a>>b;
 swap(&a,&b);
 cout<<a<<b;
 getch();
}
void swap (int *p,int *q)
{
 cout<<*p<<*q<<"\n&p="<<p<<"  &q="<<q<<endl;
 int temp;
 temp = *p;
 *p = *q;
 *q = temp;
}
