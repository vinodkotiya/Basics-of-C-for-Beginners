#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
void main()
{    clrscr();
nosound();
//exit (0);
 ifstream READ("c:\\sur.vin");
 char nm[300],a;
 int x,i=0;
 x = sizeof(READ);
 cout<<x;
  char sur;
 int tim=500;
 long int freq = 256,hz;
     while(!READ.eof())
     { READ.get(nm[i]);
      i++;
     }
int j =0;
 while(nm[j] != 27)
 {
  //READ.get(sur);
  //if(nm[j] == 27)
  //exit (0);
  cout<<sur;              //member 'get(a)' Gets 1 char ,'getline(a,79)' Gets 1 line
  sur = nm[j];
     delay(50);
   //nm[i]=sur;
   j++;
 }
 x = sizeof(nm);
 cout<<x;
 nosound();
 READ.close();
 getch();
}