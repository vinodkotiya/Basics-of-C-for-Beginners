#include<iostream.h>
#include<conio.h>
//using namespace std;
class base
{
 int x,y; //by def private
 public:
  int z;
  void set(int i , int j)
  {
   x = i;
   y = j;
  }
  void show()
  {
   cout<<"\nshowingX  "<<x<<"y "<<y;
  }
};
class der : public base   //public become public & protected become protected but private are not accessed by der
{
 int v;
 public:
 void get(int i)
 {
  v = i;
 }
 void disp()
 {cout<<v;}
};
base :: set(4,5);
show();
void main()
{
 clrscr();
 der obj;
 obj.set(5,6);
 obj.show();
 obj.get(4);
 obj.disp();
 base b;
 //b.x = 5; //not accesible b/c private
 b.z = 5;
 cout<<"bases z "<<b.z;

 getch();
}
