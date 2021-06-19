#include<iostream.h>
//using namespace std;
class base
{
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
class der : private base   //public  & protected become private of der but
{	     //still accesible by members of der & private are not accessed by der
 int v;
 public:
 void get(int i)
 {
  v = i;
  set(5,6);  //becomes private of der
 }
 void disp()
 {
  cout<<v;
  show();   //becomes private of drv
 }
};

void main()
{
 der obj;
 //obj.set(5,6);   error not accesible
 //obj.show();     error
 obj.get(4);
 obj.disp();
}
