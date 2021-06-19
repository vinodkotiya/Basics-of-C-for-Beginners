#include<iostream.h>
//OPEN RUN MENU & SELECT ARGUMENTS ,A WINDOW WILL APPEAR
//    	type the command line as:-
 //     no1 no2 operation
 //eg   4 5 +
//then run the program

#include<conio.h>
#include <string.h>
#include <stdlib.h>
	void main(int argc,char *argv[])
{
int a,b;
clrscr();
a=atoi(argv[1]);
b=atoi(argv[2]);
cout<<"\n The nos are "<<a<< "&"<<b;
if(strcmp(argv[3],"+")==0)
	     cout<<"\n Their addition ="<<a+b;
else if(strcmp(argv[3],"-")==0)
	     cout<<"\n Their subtraction ="<<a-b;
else if(strcmp(argv[3],"*")==0)
	     cout<<"\n Their multiplication ="<<a*b;
else if(strcmp(argv[3],"/")==0)
	     cout<<"\n Their division="<<a/b;
else
	   cout<<"\n But the symbol "<<*argv[3]<<"is an unrecognized symbol";
		getch();
}
