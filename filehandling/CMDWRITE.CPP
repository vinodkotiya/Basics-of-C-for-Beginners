//OPEN RUN MENU & SELECT ARGUMENTS ,A WINDOW WILL APPEAR
//    	type the command line as:-
 //     filenm1 filenm2
 //eg   vino vina
//then run the program
#include<fstream.h>
#include<iostream.h>
#include <string.h>
#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
   char arr[200],ch;
   fstream in(argv[1],ios::in|ios::out);
   ofstream out;
   out.open(argv[2]);
    cout<<"\n Enter the text :- ";
    gets(arr);
    in<<arr;
	    in.seekg(0);
    while(!in.eof())
    {
      in.get(ch);
	  out.put(ch);
	  cout<<ch;
     }
 getch();
}
