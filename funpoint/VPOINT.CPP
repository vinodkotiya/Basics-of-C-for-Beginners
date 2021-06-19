#include<iostream.h>
#include<conio.h>
void main(void)
{
int a,b;int *p;clrscr();
p=&a;
a=10;
b=*p+1;
cout<<"\n"<<a<<"\n"<<b<<"\n"<<*p;
getch();
}