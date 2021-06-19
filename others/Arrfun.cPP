#include<iostream.h>
#include<conio.h>
/*void display(int []);
void main(void)
{
int a[5],i;clrscr();
cout<<"\n enter elements";
for(i=0;i<5;i++)
 {cin>>a[i];
 }
display(a);
getch();
}
void display(int a[5])
{
int i;
for(i=0;i<5;i++)
cout<<"\n"<<a[i];
} */
void display(int[]);
void main(void)
{
int a[5],i;clrscr();
cout<<"\n enter elements";
for(i=0;i<5;i++)
 {cin>>a[i];
 }
display(a);
for(i=0;i<5;i++)
cout<<"\n"<<a[i];
getch();
}
void display(int a[5])
{
int i;
for(i=0;i<5;i++)
 {
 cout<<"\n"<<a[i];
 a[i]=a[i]+1;
 }
}