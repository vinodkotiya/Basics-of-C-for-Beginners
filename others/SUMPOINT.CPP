  #include<iostream.h>
#include<conio.h>
void main(void)
{
int a,b,c;int *p,*q,i=0;clrscr();
a=10;b=20;p=&a; q=&b;
while(i<5)
  {
  c=(*p)++ + (*q)++;
  i++;

cout<<a<<"\n"<<b<<"\n"<<*p<<"\n"<<*q<<"\n"<<c;
 }
getch();
}