#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void main()
{
 clrscr();
 int a,b;
 cin>>a>>b;
 cout<<"\n &a="<<&a<<endl;
 swap(a,b);
 cout<<a<<b;
 getch();
}
void swap (int &p,int &q)
{
 int temp;
 cout<<p<<q;
 cout<<"\n&p= "<<&p<<"  &q="<<&q<<endl;
 temp = p;
 p = q;
 q = temp;
}
