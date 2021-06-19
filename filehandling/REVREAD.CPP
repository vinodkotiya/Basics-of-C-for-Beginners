#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<process.h>

void main()
{
char nam[35],n;
long int size;
cout<<"Enter name of file";
cin>>nam;
 fstream read(nam,ios::in | ios::ate);
 size = read.tellg();
 cout<<"\nFile size is = "<<size<< " Bytes\n";
 if(read==NULL)
 {
  cout<<"\nfile can't be opened";
  exit (0);
 }
 read.seekg(-30,ios::end);
 char nm[80],c;
/* while(size >= 0)                  //reverse only lines from bottom to top
 {
   size = size - 79;

   read.seekg(-79,ios::cur);
   read.getline(nm,79);
   //read.get(c);
   cout<<nm;

  getch();
 } */
for(long int i = size-1;i>=0 ;)        //reverse each character of file from bottom
 {
  for(int j = 0;j<79 && i>=0;i--,j++)
 {
   read.seekg(i);
   read.get(c);
   cout<<c;
   }
   getch();
  }
read.close();
 cout<<"\nAre you want to continue ? Y/N..";
  cin>>n;
  if(n=='y'||n=='Y')
    main();
  else
   cout<<"\nBYE-BYE";
}