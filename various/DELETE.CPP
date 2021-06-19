#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a[10];
cout<<"Enter elements";
cin>>a;
cout<<a<<endl;
//getch();
delete []a;
cout<<a;
cout<<"name delete";
getch();
}