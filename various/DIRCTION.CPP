#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char dir='a';
int x=10,y=10;
cout<<"type to enter to quit\n";
while(dir!='\r')
{
cout<<"\nyour location is"<<x<<"  "<<y;
cout<<"\npress direction key(n,s,e,w): ";
dir=getche();
if(dir=='n')
y--;
else
if(dir=='s')
y++;
else
if(dir=='e')
x++;
else
if(dir=='w')
x--;
}


getch();
}







