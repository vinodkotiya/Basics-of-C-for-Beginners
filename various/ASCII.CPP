/*  ASCII.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{                              //esc -27
 clrscr();                     //Enter -13
 int i,j=206;
 char c = 1;                       //delete -83 'S'
 for( i=0;i<255;i++)           //end -79 'O'
 printf("%d  %c",i,i);         //PgUp -73 'I'
 printf("%c",j);               //PgDn -81 'Q'
 getch();                      //Home -71 'G'
			       //Insert -82 'R'
 cout<<endl<<"\t\t"<<c;	       //space -32
			       //Backspace -8
			       // <- 75 'K'
			       // -> 77 'M'
			       // up 72 'H'
}			       // down 80 'P'