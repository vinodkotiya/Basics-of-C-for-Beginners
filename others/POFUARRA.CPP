#include<iostream.h>
#include<conio.h>
void display(int *);
void main(void)
{
int a[10],i;
clrscr();
for(i=0;i<10;i++)
 {
 cout<<"Enter elements";
 cin>>a[i];
 }
display(a);
for(i=0;i<10;i++)
  cout<<"\n"<<a;
}
void display(int *p)
 {
 int i;
 for(i=0;i<10;i++)
 cout<<"\n"<<*(p+i);
 *(p+i)=*(p+i)+2;
 getch();
 }

