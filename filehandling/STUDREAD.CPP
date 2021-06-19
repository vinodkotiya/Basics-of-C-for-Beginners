#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
class stud
{
 int roll;char grad,nm[10];float per;
 public:
  void show()
  {
  cout<<"\nname"<<nm;
  cout<<"\nRoll"<<roll;
  cout<<"\ngrade"<<grad;
  cout<<"\nper"<<per;
  }
};
void main()
{
 clrscr();
 char c;
 cout<<"want to see the file";
 cin>>c;
 if(c=='y')
 {
  stud p;
  ifstream in ("stud",ios::in);
  in.read((char * ) &p,sizeof(p));
  p.show();
  in.close();
  getch();
  }
  else
  exit(0);

}