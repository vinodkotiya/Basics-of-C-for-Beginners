#include<iostream.h>
#include<conio.h>
//using namespace std;
class base
{
 //protected:
 int x,y; //by def private
 public:
  void set(int i , int j)
  {
   x = i;
   y = j;
  }
  void show()
  {
   cout<<"X  "<<x<<"y "<<y;
  }
};
class der : protected base   //public  & protected become protected of der but
{	     //still accesible by members of der & private are not accessed by der
 int v;
 public:
 void get(int i)
 {
  v = i;
  set(5,6);  //becomes protected of der
 }
 void disp()
 {
  cout<<"V "<<v;
  show();   //becomes protected of derv
 }
};

void main()
{clrscr();
 der obj;
 //obj.set(5,6);   illegal set becomes protected of der
 //obj.show();     illegal -----
 obj.get(4);
 obj.disp();
 getch();
}
