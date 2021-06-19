#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main(void)
{
 clrscr();
 int a[5],b;
 int *p,*q;
 p=a;
 for(b=0;b<5;b++)
 {
  cin>>p[b];
 }
 for(b=0;b<5;b++)
 {cout<<*p++;

  }
  cout<<p<<p++<<p++<<p++;
 //cout<<"a="<<a<<"\np="<<*p<<endl;
 //b=++(*p);
 //a=*p-b;
 //cout<<"\na="<<a<<endl<<"\np="<<*p<<endl<<b;

 //*p=30;
 //b=*p;
 //cout<<"\na="<<a<<b;
 getch();
}
