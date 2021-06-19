#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void initializeseed();
void toss();
void win();
void loss();
void main()
{
 clrscr();
 initializeseed();
 int point = toss();
 if(point == 2 || point == 3 || point == 12)
  loss();
 if (point == 7||point == 11)
 win();
 for( ; ;)
 {
  int t= toss();
  if (t==7)
  lose();
  if(t== point)
  win();
 }
getch();
}
void initializeseed()
{
 unsignede seed = time(NULL);
 srand(seed);
}
int toss()
{
 int die1 = rand()/10%6+1;
 int die2 = rand()/10%6+1;
 int t = die1+die2;
 cout<<"\tyou tossed a :-"<<t<<"\t"<<die1<<die2;
 return t;
 }
void win()
{
 cout<<"\nyou won";
 exit(0);
}
void lose()
{
 cout<<"\nyou lost";
 exit (0);
}