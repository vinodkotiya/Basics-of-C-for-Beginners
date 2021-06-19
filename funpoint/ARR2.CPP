#include<iostream.h>
#include<string.h>
#include<conio.h>
void display (char * );
void main()
{
 clrscr();
 char a[10];
 cin>>a;
 cout<<"a is "<<a<<endl;
 display(a);
 cout<<"\n a is "<<a;
 getch();
}
void display(char *z)
{
 cout<<endl<<z<<endl;
 strcpy(z,"vinod");

 cout<<z<<endl;
}