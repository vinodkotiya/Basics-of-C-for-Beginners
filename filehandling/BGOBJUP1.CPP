//balagurusamy example
//read() & write() handle the data in binary form
//writing the objects in a file & read
//update any object
#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>

const char * filenm = "c:\\cdata\\stockupdate.vin";

class inventory
{
 char nm[10];
 int code;
 float cost;
public:
 void readdata();
 void writedata();
 int search(char[]);
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

int inventory :: search(char t_nm[10])
{
 int v;
 cout<<"\n searching...";
 static int s;
 v = strcmpi(t_nm,nm);
 if(v != 0)
 cout<<"\nObject not found no is "<<s;
 s++;
 return v;
}

int main()
{
 inventory item;
 clrscr();

 fstream file;
 file.open(filenm,ios::ate | ios::in | ios::out | ios::binary);
 file.seekg(0,ios :: beg);     //go to start

 cout<<"\nCurrent contents of stock\n ";
 while(file.read((char * ) & item,sizeof(item)))
  {
   item.writedata();
  }

  file.clear();       // turn of eof

//>>>>>>>>>>>>>>>>>> ADD ONE MORE OBJECT <<<<<<<<<<<<<<<<<<<<<<<<<<<

/* cout<<"\nEnter details of item";
 item.readdata();
 char ch;
 cin.get(ch);
 file.write((char * ) & item,sizeof(item));

// display the appended file

 file.seekg(0);   //return to start
 cout<<"\ncontent of appended file\n\n";
 while(file.read((char * ) & item,sizeof(item)))
  {
   item.writedata();
  }
*/
// find no of objects in the file
 int last = file.tellg();
 int n_obj = last/sizeof(item);

 cout<<"\nNo of objects "<<n_obj<<"\n Size of file is  "<<last;

//>>>>>>>>>>>>>>>> MODIFY DETAILS OF AN ITEM <<<<<<<<<<<<<<<<<<<<<<<<<<

 cout<<"\nEnter name to be updated\n";
 char nam[10];
 cin>>nam;
 getch();
 int find_obj = 1,location,i=0;

 while( file.read((char * ) & item,sizeof(item)))
 {
  //location = (i) * sizeof(item);

  //if(file.eof())
  //file.clear();

  //file.seekp(location);
  find_obj = item.search(nam);
  if(find_obj == 0)
  break;
  i++;
 }
  location = (i) * sizeof(item);

  if(file.eof())
  file.clear();

 file.seekp(location);

 cout<<"\nEnter new values of the object ";

 item.readdata();
 getch();

 file.write((char *) & item, sizeof (item))<<flush;

//>>>>>>>>>>>>>>>SHOW UPDATED FILE <<<<<<<<<<<<<<<<<<<<<<<<<<<

 file.seekg(0);   //return to start
 cout<<"\ncontent of appended file\n\n";
 while(file.read((char * ) & item,sizeof(item)))
  {
   item.writedata();
  }

  file.close();
  getch();
    return 0;
}