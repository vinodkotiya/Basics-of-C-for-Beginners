#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
void main()
{//clrscr();
 fstream file("test",ios::out ! ios::in)
 if(|file)
 {
  cout<<"\nthis file can't be opened";
   exit 0;
  }
  file<<"This is a test file \n";
  file<<"this is designed by vinod kotiya";
  char n[80];
  while(!file.eof())
  {
   file.getline(n,79);
   cout<<n<<endl;
   }
  file.close();
  getch();
}