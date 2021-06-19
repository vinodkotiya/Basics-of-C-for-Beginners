// not working properly
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>

class question
{

  char que[300],ans;
public:
 char* getque();
 char getans();
 void setque(char[]);
 void setans(char);
 void setdata();
 void showdata();
};

char* question::getque()
{
 return que;
}
char question::getans()
{
 return ans;
}
void question::setque(char pra[200])
{
  strcpy(que,pra);
}
void question::setans(char utt)
{
 ans = utt;
}
void question::setdata()
{
 cout<<"\nEnter question\t";
 cin.getline(que,300);
 cout<<que;
 cout<<"\nEnter ans\t";
 cin>>ans;
}
void question::showdata()
{
 cout<<"\nque: "<<setw(5)<<que;
 cout<<"\nans: "<<setw(5)<<ans<<endl;
}
//overloaded << to handle the output of square objects
ostream& operator << (ostream& s, question x)
{
 //setw is used to give a consistent format in the file
 long int l;
 l= strlen(x.getque());
  s<<setw(5)<<l<<x.getque()<<setw(5)<<x.getans()<<endl;
  return s;
}

//overloaded >>  to input of square objects
istream& operator >> (istream& s,question &x)
{
 char que_in[300],ans_in;
 //because i/p stream is delimited with white spaces,we can
 //i/p all 2 attributes at ones
 long int l;
 s>>l;
 s.getline(que_in,l+1);
 s>>ans_in;
 x.setque(que_in);
 x.setans(ans_in);
 return s;
}
void main()
{
 clrscr();
 question obj[3];
 fstream iofile;

 iofile.open("c:\\cdata\\objin.vin", ios::trunc | ios::in | ios::out );
 for(int i=0;i<3;i++)
 {
  obj[i].setdata();
  iofile<<obj[i];
 }
 iofile.seekg(0);
 question new_obj[3];
 //readthe square data back from the file  . states are same as previous sq

 for(i=0;i<3;i++)
 {
  iofile>>new_obj[i];
  new_obj[i].showdata();
 }
 getch();
}
