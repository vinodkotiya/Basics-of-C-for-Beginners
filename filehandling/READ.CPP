#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{    clrscr();
 ifstream in("temp");
 char nm[10];
 int x;
 in>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 in>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 in>>nm>>x;
 cout<<endl<<nm<<" "<<x;
 in.close();
 getch();
}