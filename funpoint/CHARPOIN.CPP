#include<iostream.h>
#include<conio.h>
char* fun()
{
 char v[200];
 cout<<"\nEnter something";
 cin.getline(v,200);
 return v;
}
void main()
{
 char h[200];
 cout<<fun();
 cout<<h;
 getch();
}