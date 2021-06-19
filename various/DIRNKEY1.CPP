#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 char ch;
 v:
 cout<<"\nPress a key\n";
  ch = getche();
  //cout<<ch;
  if(ch == 75)
  cout<<"\nthis is left";
  else if(ch =='P')
  cout<<"\ndown";
  else if(ch ==77)
  cout<<"\nright";
  else if(ch =='H')
  cout<<"\nup";
  else if(ch == 27)
  exit (0);
  else
  cout<<ch;
  goto v;

}