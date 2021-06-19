//an alternative approach to file i/o for objects is to write file handling
//methods for object classes rather than overloading>><<.
//this is simpler b/c we can refer directly to the attributes of the object
//inside its method rather than having to pass a referance to the object
//to an ovrlded operator

#include<fstream.h>
#include<conio.h>
#include<string.h>

class person
{
 char name[20];
 char address[25];
 char telno[15];
public:
 char* getname();
 char* getaddress();
 char* gettelno();
 void setname(char* name_in);
 void setaddress(char* address_in);
 void settelno(char* telno_in);
 void setall(char* all);
 void setdata();
 void showdata();
 void writetofile(ofstream& file_out);
 void readfile(ifstream& file_in);
};

char* person::getname()
{
 return name;
}
char* person::getaddress()
{
 return address;
}
char* person::gettelno()
{
 return telno;
}
void person::setname(char* name_in)
{
 strncpy(name,name_in,19);
}
void person::setaddress(char* address_in)
{
 strncpy(address,address_in,24);
}
void person::settelno(char* telno_in)
{
 strncpy(telno,telno_in,14);
}
void person::setdata()
{
 char temp_char;
 cout<<"\nEnter name";
 cin.get(name,20);
 cin.get(temp_char);
 cout<<"\nEnter address";
 cin.get(address,25);
 cin.get(temp_char);
 cout<<"\nEnter tel no";
 cin.get(telno,15);
 cin.get(temp_char);
}
void person::showdata()
{
 cout<<"\nName: "<<name;
 cout<<"\nAddress : "<<address;
 cout<<"\tTelno : "<<telno<<endl;
}
//method for writing out attributes as seperate records.method uses referance
//to an ofstream object but has direct acess to the attributes of the person
//object thus simplifying the syntax each attribute is written out as a
//seperate record
void person::writetofile(ofstream& file_out)
{
 file_out<<name<<endl;
 file_out<<address<<endl;
 file_out<<telno<<endl;
}
//method for reading back records representing individual attribute values.
// a referance to an ifstream object is used and values are read directly
//into the attributes via the 'get method which is able to read embedded
//spaces. the single char version of get is used to step over the \n in stream
void person :: readfile(ifstream& file_in)
{

 char temp_char;
 file_in.get(name,20);
 file_in.get(temp_char);
 file_in.get(address,25);
 file_in.get(temp_char);
 file_in.get(telno,20);
 file_in.get(temp_char);
}
void main()
{
 clrscr();
 person p[5];
 char choice;
 cout<<"\nDo you want to enter data (y/n)?:  ";
 cin>>choice;
 if(choice == 'y')
 {
  ofstream out("c:\\cdata\\person.vin");
  for(int i=0;i<5;i++)
  {
   p[i].setdata();
   p[i].writetofile(out);
  }
   out.close();
 }
  person newp[5];
 ifstream in("c:\\cdata\\person.vin");
 for(int i=0;i<5;i++)
 {
  newp[i].readfile(in);
  newp[i].showdata();
 }
  in.close();
  getch();
}
