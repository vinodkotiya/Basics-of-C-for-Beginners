#include<iostream.h>
#include<conio.h>
#include<limits.h>
#include<time.h>
unsigned long t;
const unsigned long mult_ =234567891;
const unsigned long mod_  =ULONG_MAX;

 void randomize()
 {
  t = (mult_ * t + 1) % mod_;
 }
 void random()
  {
   t = time(NULL);
  }
  void integer(int min ,int max)
  {
   randomize();
   int l= min+t%(max-min+1);
   cout<< l;
  }

void main()
{
 clrscr();
 random();
 integer(19,25);

 getch();
}