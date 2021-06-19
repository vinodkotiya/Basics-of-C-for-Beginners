
/* READFILE.*  Borland C++ 3.0

   Copywrite (c) 2001 - ? VINOD KOTIYA Enternational. All rights unreserved.

   From the command line, use:

*/
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 char n,nm[20],a[80];
 cout<<"Enter name of file to be read with correct path & extension\n\t\t\t";
 cin>>nm;
 ifstream obj(nm);
 if(obj.fail())
 {
  cout<<"\nfile can't be opened";
  getch();
  exit(0);
 }
 while(!obj.eof())
 {
  obj.getline(a,79);
  cout<<a<<endl; getch();
  }
  obj.close();
  cout<<"\nAre you want to continue ? Y/N..";
  cin>>n;
  if(n=='y'||n=='Y')
  {
   main();
   }
   else
    {
    getch();
    }

 }