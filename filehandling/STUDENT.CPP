#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
class stud
{
 int roll;char grad,nm[10];float per;
 public:
  void get()
  {
   cout<<"\nEnter The Name :-";
   cin>>nm;
   cout<<"\nEnter The Roll No :-";
   cin>>roll;
   cout<<"\nEnter The Grade :-";
   cin>>grad;
   cout<<"\nEnter The Percentage :-";
   cin>>per;
  }
  void show()
  {
  cout<<"\nName "<<nm;
  cout<<"\nRoll"<<roll;
  cout<<"\ngrade"<<grad;
  cout<<"\nper"<<per;
  };
};
void main()
{
 clrscr();
 char c;
 //cout<<"Enter the no. of students;
 //cin>>n;
 stud s;
 s.get();
 ofstream out("stud",ios::out);
 out.write((char * ) &s,sizeof (s));
 out.close();
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
   //for(int i=0;i<n;i++)
 //{
 // char a++;
 // stud s;
  //s.get();
}