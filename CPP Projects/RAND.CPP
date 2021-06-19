#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
 clrscr();
  char s;
  while(!kbhit()){s =  65+ random(8);
  if(s == 'B') s = 'S';
  else if(s == 'C') s= 'J';
  else if(s == 'E') s ='K';
  cout<<s;  delay(500);}
 getch();
}