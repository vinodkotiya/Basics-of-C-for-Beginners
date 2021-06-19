#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
//char nam[10];
if(argc!=3)
{
cout<<"Usage: Reverse c:\\sonu.vin 10 \n";
return 1;
}
 fstream in(argv[1] ,ios::in | ios::out | ios::binary);
 if(!in)
 {
  cout<<"\nfile can't be opened";
  return 1;
 }
 char nm[80];
 long e,i,j;
 char c1,c2;
 e = atol(argv[2]);
 for(i=0,j=e;i<j ;i++,j--)
 {
  in.seekg(i,ios::beg);
  in.get(c1);
  in.seekg(i,ios::beg);
  in.get(c2);
  in.seekp(i,ios::beg);
  in.put(c2);
  in.seekp(i,ios::beg);
  in.put(c1);
}

in.close();
getch();
return 0;
}