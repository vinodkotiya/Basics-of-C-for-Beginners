//balagurusamy example
//read() & write() handle the data in binary form

#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>

const char * filenm = "c:\\cdata\\stock.vin";

class inventory
{
 char nm[10];
 int code;
 float cost;
public:
 void readdata();
 void writedata();
};

void inventory :: readdata()
{
 cout<<"\nEnter name "; cin>>nm;
  cout<<"\nEnter code "; cin>>code;
   cout<<"\nEnter cost "; cin>>cost;
}

void inventory :: writedata()
{
 cout<<setiosflags(ios::left)
     <<setw(10)<<nm
     <<setiosflags(ios::right)
     <<setw(10)<<code
     <<setprecision(2)
     <<setw(10)<<cost<<endl;
}

int main()
{
 inventory item[3];
 clrscr();
 fstream file;
 file.open(filenm,ios::in | ios::out);
 cout<<"\nEnter details of 3 data";

 for(int i = 0;i<3;i++)
  {
   item[i].readdata();
   file.write((char * ) & item[i],sizeof(item[i]));
   file<<endl;             //put a \n after each object data for multiline file but don't forget to
  }                                             //consume \n after each object via get when reading the file

 file.seekg(0);   //return to start
 cout<<"\noutput\n\n\n\n";
 for( i = 0;i<3;i++)
  {
   char c;
   file.read((char * ) & item[i],sizeof(item[i]));
   item[i].writedata();
   file.get(c);        //used to take endl
  }
  file.close();
  getch();
    return 0;
}