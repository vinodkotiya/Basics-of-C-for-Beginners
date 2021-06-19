#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char file[20] = {"c:\\cdata\\"},nm1[10],str[80];
 cout<<"\nEnter file name";
 cin>>nm1;
 strcat(file,nm1);
 strcat(file,".vin");
 cout<<endl<<file;
 ofstream out(file,ios::binary);
 cout<<"\nEnter till !";
 do{
  cout<<":";
  cin>>str;
  out<<str<<endl;
 }while(*str != '!');
 out.close();
 cout<<"\n you can get ur file at "<<file;
 getch();
}
