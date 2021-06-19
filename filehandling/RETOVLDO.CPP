#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>

class square
{
  int w,b;
public:
 int getwidth();
 int getbreadth();
 void setwidth(int w_in);
 void setbreadth(int b_in);
 //void setdata();
 void showdata();
};

int square::getwidth()
{
 return w;
}
int square::getbreadth()
{
 return b;
}
void square::setwidth(int w_in)
{
  w = w_in;
}
void square::setbreadth(int b_in)
{
 b = b_in;
}
/*void square::setdata()
{
 cout<<"\nEnter width";
 cin>>w;
 cout<<"\nEnter breadth";
 cin>>b;
} */
void square::showdata()
{
 cout<<"\nwidth: "<<setw(5)<<w;
 cout<<"\nbreadth: "<<setw(5)<<b<<endl;
}
//overloaded << to handle the output of square objects
ostream& operator << (ostream& s, square x)
{
 //setw is used to give a consistent format in the file
 return s<<setw(5)<<x.getwidth()<<setw(5)<<x.getbreadth()<<endl;
}

//overloaded >>  to input of square objects
istream& operator >> (istream& s,square &x)
{
 int w_in,b_in;
 //because i/p stream is delimited with white spaces,we can
 //i/p all 2 attributes at ones
 s>>w_in>>b_in;
 x.setwidth(w_in);
 x.setbreadth(b_in);
 return s;
}
void main()
{
 clrscr();
 //square obj[3];
 fstream iofile;

 iofile.open("c:\\cdata\\objin.vin", ios::in | ios::out );
/* for(int i=0;i<3;i++)
 {
  obj[i].setdata();
  iofile<<obj[i];
 }
*/ iofile.seekg(0);
 square obj[3];
 //readthe square data back from the file  . states are same as previous sq

 for(int i=0;i<3;i++)
 {
  iofile>>obj[i];
  obj[i].showdata();
 }
 obj[2].showdata();
 getch();
}
