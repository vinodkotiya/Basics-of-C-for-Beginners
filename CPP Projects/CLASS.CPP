#include<iostream.h>
#include<conio.h>
class ABC
 {
 protected:
  int a,b;
 public:
 ABC()
 {cout<<"\nThe object invoked me is "<<this;
 }
  void set(int i, int j)
  {
   a = i;
   b = j;
  }
  void show()
  {
   cout<<"\n a = "<<a <<"\n b = "<<b;
  }
 ~ABC()
 {cout<<"\nThe object invoked me is "<<this;
 }

};
class xyz : public ABC
{
 int x,y;
 public:
  void get(int p ,int q)
  {
   x = p;
   y = q;
   }
   void display()
   {
    cout<<"\n x ="<<x<<"\n b = "<<b;
    }
};
void main()
{
 //clrscr();
 ABC obj3;  xyz obj2;
 obj3.set(10,20);  obj3.show();
 obj2.get(30,40);  obj2.display();
 obj2.set(50,60);  obj2.show();
 getch();
}