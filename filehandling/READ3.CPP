#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void main()
{    clrscr();
 char file[20] = {"c:\\"},nm1[10],str[80];
 cout<<"\nEnter file name  ";
 cin>>nm1;
 strcat(file,nm1);
 strcat(file,".vin");
 cout<<endl<<file<<endl;


 ifstream READ(file);
 char nm[50],a;
 int x;
 //x = sizeof(READ);
 //cout<<x;
 if(READ.fail())
 {
  cout<<"\nfile can't be opened";
  getch();
  //exit(0);
 }
 cout<<"\nfile successfully opened";
 while(!READ.eof())
 {
   READ.get(a);              //member 'get(a)' Gets 1 char ,'getline(a,79)' Gets 1 line
  cout<<a;// getch();
  }
 //READ>>nm>>x;
 //cout<<endl<<nm<<" "<<x;
 //READ>>nm>>x;
 //cout<<endl<<nm<<" "<<x;
 //READ>>nm>>x;
 //cout<<endl<<nm<<" "<<x;
 //READ>>nm;
 //cout<<nm<<x;
 READ.close();
 getch();
}