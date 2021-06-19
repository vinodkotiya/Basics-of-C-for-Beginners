#include<iostream.h>
#include<conio.h>
#include<limits.h>
#include<time.h>
const unsigned long mult_ =234567821;
const unsigned long mod_  =ULONG_MAX;

class random
{
 unsigned long t;
 void randomize()
 {
  t = (mult_*t+1)%mod_;
 }
 public:
  random()
  {
   t = time(NULL);
  }
  int integer(int min ,int max)
  {
   randomize();
   return min+t%(max-min+1);
  }
};
/*void main(void)
{
 clrscr();
 random r;
//\\for(int i=0;i<10;i++)
 {
  int n = r.integer(19,25);
  cout<<n<<endl;
 }
getch();
} */