//single inheritance

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

char l;
char creators();
//=======================one base class================================
class student
{
 char name[20];
 int roll;
public:
 void getdata()
  {
   cout<<"Name\n";
   cin>>name;
   cout<<"Roll number \n";
   cin>>roll;
  }
 void showdata()
  {
   if(l!='j')
   exit(0);
   cout<<"Name : "<<name<<"\n";
   cout<<"Roll number : "<<roll<<"\n";
  }

};
//====================and 1 derived class of the base====================

class test : public student
{
 int   p,c,m;
public:
 void getdata()
  {
   student::getdata();
   cout<<"Enter the marks in Physics, Chemistry, Maths "<<"\n";
   cin>>p>>c>>m;
  }
 void showdata()
  {
   student::showdata();
   cout<<"Marks in Physics " <<p<<" Chemistry "<<c<< " Maths "<<m<<"\n";
  }
};
void main()
{
  clrscr();
  int n,i;
  l=creators();
  test s[10];           //objects of derived
  cout<<"\nEnter the no of students (max10)\n";
  cin>>n;
  for( i=0;i<n;i++)
   {
    cout<<"\nEnter the datas of Student"<<i+1<<"  "<<"\n";
    s[i].getdata();
   }
   getch();
 for(i=0;i<n;i++)
  {
   cout<<"\n***************************************************************\n"
   cout<<"\t\tStudent"<<i+1<<" Details "<<"\n";
   s[i].showdata();
  }
getch();
}

char creators()
{
 cout<<"****************************************************************************";
 char n1[7] = {"Vinod,"},n2[10] = {"Digvijay,"},n3[8] = {"Sameer,"},n4[9] = {"Peeyush,"},n5[8] = {"Vishwas"};
 cout<<"\nCreated by "<<n1<<n2<<n3<<n4<<n5;
	cout<<"\n****************************************************************************\n";
 return n2[5];
}