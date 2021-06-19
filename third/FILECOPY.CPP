
//                        FILECOPY.CPP

#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<c:\final\creators.h>
void main()
{
 clrscr();
 char n,source[20],destination[20],temp[80];
 n = creators();
 cout<<"Enter name of source file to be read with correct path & extension"
 <<"\neg. c:\\source.vin  \n\t\t\t";
 cin>>source;
 cout<<"Enter name of destination file to be write with correct path & extension"
 <<"\neg. c:\\destination.vin  \n\t\t\t";
 cin>>destination;
 ifstream src(source);
 ofstream dest(destination);
 dest<<"This duplicate copy of the file "<<source<<" is created by VINOD KOTIYA "
 <<endl <<" Digvijay  "<<" Sameer "<<" Vishwas "<< "Piyush "<<endl;
 if(src.fail())
 {
  cout<<"\nfile can't be opened";
  getch();
  exit(0);
 }
 while(!src.eof())
 {
  src.getline(temp,79);       //temprory stores the source file
  cout<<temp<<endl;
  dest<<temp;
  dest<<endl;
   getch();
  }
  src.close();
  dest.close();
  cout<<"\nYour file has been copied to specified folder."<<
	 "\n Do you want to copy another ? Y/N..";
  cin>>n;
  if(n=='y'||n=='Y')
  {
   main();
   }
   else
    {
    getch();
    }

 }