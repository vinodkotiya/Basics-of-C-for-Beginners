#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

class Directory
{
 char name[20],address[25],telno[15];
 public:
  char* getname();
  char* getaddress();
  char* gettelno();
  void setname( char* name_in);
  void setaddress(char* address_in);
  void settelno(char* telno_in);
  void setll(char* all);
  void setdata();
  void showdata();
  void writetofile(ofstream &file_out);
  void readfromfile(ifstream &file_in);
};

/*char* Directory :: getname()
{
 return name;
}
char* Directory :: getaddress()
{
 return address;
}
char* Directory :: gettelno()
{
 return telno;
}

void Directory :: setname(char* name_in)
{
 strncpy(name,name_in,19);
}
void Directory :: setaddress(char* address_in)
{
 strncpy(address,address_in,24);
}
void Directory :: settelno(char* telno_in)
{
 strncpy(telno,telno_in,14);
}
  */
void Directory :: setdata()
{
 char temp;
 cout<<"\nEnter name";
 cin.get(name,20);
 cin.get(temp);
 cout<<"\nEnter address";
 cin.get(address,25);
 cin.get(temp);

 cout<<"\nEnter telno";
 cin.get(telno,15);
 cin.get(temp);
}

void Directory :: showdata()
{
 cout<<"\nName"<<name;
 cout<<"\nAddress :"<<address;
 cout<<"\nTelno : "<<telno;
}

void Directory :: writetofile(ofstream& file_out)
{
 file_out<<name<<endl;
 file_out<<address<<endl;
 file_out<<telno<<endl;
}
void Directory :: readfromfile(ifstream& file_in)
{
 char temp;
 file_in.get(name,20);
 file_in.get(temp);
 file_in.get(address ,25);
 file_in.get(temp);
 file_in.get(telno,15);
 file_in.get(temp);
}

void main()
{
 clrscr();
 int n =1;
 Directory s[n];
 ofstream out("c:\\directory.vin");
 for(int i=0;i<n;i++)
 {
  s[i].setdata();
  s[i].writetofile(out);
 }
 out.close();
 getch();
 ifstream in("c:\\directory.vin");
 for( i=0;i<5;i++)
 {
  s[i].readfromfile(in);
  s[i].showdata();
 }
 in.close();
 getch();
}
