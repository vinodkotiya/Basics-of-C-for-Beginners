#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
void main()
{
char nam[10];
cout<<"Enter name of file";
cin>>nam;
 ifstream in(nam);
 if(in.fail())
 {
  cout<<"\nfile can't be opened";
  exit (0);
 }
 char nm[80];
 while(!in.eof())
 {
  in.getline(nm,79);
  cout<<nm;
 }
in.close();
getch();
}