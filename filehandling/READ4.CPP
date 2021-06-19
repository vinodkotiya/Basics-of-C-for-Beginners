#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
void main()
{    clrscr();
 ifstream READ("c:\\sur.vin");
 char nm[300],a;
 int x,i=0;
 x = sizeof(READ);
 cout<<x;
 if(READ.fail())
 {
  cout<<"\nfile can't be opened";
  getch();
  exit(0);
 }
 /*while(!READ.eof())
 {
   READ.get(a);              //member 'get(a)' Gets 1 char ,'getline(a,79)' Gets 1 line
  cout<<a;// getch();
  } */
  //for(x=0;x<50;x++)
//nm[x]= getch();
  // cout<<x;
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
  cout<<sur;              //member 'get(a)' Gets 1 char ,'getline(a,79)' Gets 1 line
  sur = nm[j];
  if (sur == 'a' )  //dwitoni
  {hz = freq ;
   sound(hz);
   }
   else if (sur =='s')
   {hz = (freq * 9)/8;
  sound(hz);
    }
  else if (sur == 'd')
   {hz = (freq * 5)/4;
  sound(hz);
   }
  else if (sur == 'f')
   {hz = (freq * 4)/3;
  sound(hz);
   }
  else if (sur == 'g')
   {hz = (freq * 3)/2;
  sound(hz);
   }
  else if (sur == 'h')
   {hz = (freq * 5)/3;
  sound(hz);
   }
  else if (sur == 'j')
   {hz = (freq * 15)/8;
  sound(hz);
   }
  else if (sur == 'k')
   {hz = (freq * 2);
  sound(hz);
   }
  //else
   //{sound(7);}
   delay(55);
   //nm[i]=sur;
   j++;
 }
 x = sizeof(nm);
 cout<<x;
 nosound();
 READ.close();
 getch();
}