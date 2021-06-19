
/* READFILE.*  Borland C++ 3.0

   Copywrite (c) 2001 - ? VINOD KOTIYA Enternational. All rights unreserved.

   From the command line, use:

*/
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
  cout<<"\n\t Playlist to Html Converter (unfinished)\n\t\t\t";
  cout<<"\n*************************************************\n\n";
  cout<<"\n This tool convert your music playlist (winamp/any media player) \n like arrahman.m3u to html file like c:\\arrehman.html \n\t\t\t";
  cout<<"\n Created by vinod kotiya for music cd content.\n\n\n";
 char n,nm[20] = {"e:\\old.m3u"},a[100],html[40] = {"e:\\vin.html"};
 cout<<"Enter name of source file with extension like arrehman.m3u\n\t\t\t";
 cin>>nm;
 cout<<"Enter name of htm file with to be created correct path & extension \n like c:\\arrehman.html \n\t\t\t";
 cin>>html;
 cout<<"\nNow press Enter for conversion\n\t";
 getch();
 ifstream obj(nm);
 ofstream out(html);
 if(obj.fail())
 {
  cout<<"\nfile can't be opened";
  getch();
  exit(0);
 }
 int i,j;
 out<<"<html><body>";
 while(!obj.eof())
 {
  char b[80],htmlline[80] = {"<a href = \""};
  obj.getline(a,99);
   //cout<<a;
   for( i = 0; a[i] == ':' || a[i]!= '\0';i++)
     { if (a[i] == ':')
	 break;
     }        //end of for
    //cout<<"\n i in  loop"<<i<<a[i];
 if (a[i] == ':')
   {
     for( j = 0;a[i+j+2] !='\0';j++)       //2 means after : skip \&nbsp
      {
       b[j] = a[i+j+2];
       }
      b[j] = '\0';
   } //end of if
 else
    strcpy(b,a);
  cout<<a[i]<<" i is :"<<i;
   strcat(htmlline,b);
   out<<htmlline<<"\">";
   out<<b;
   out<<"<a><br>" ;
   out<<endl;
  cout<<b<<endl;
  getch();

  }
  obj.close();
  out<<"</body></html>";
  out.close();
  cout<<"\nAre you want to continue ? Y/N..";
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