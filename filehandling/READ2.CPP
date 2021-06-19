#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{    clrscr();
 ifstream READ("TEMP");
 char nm[10];
 int x;
 READ>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 READ>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 READ>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 READ.close();
 getch();
}