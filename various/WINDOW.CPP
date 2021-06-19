#include<iostream.h>
#include<string.h>
#include<conio.h>
class box
{
 int left,top,right,bottom;
 char str[80];
 public:
  box(int l,int t,int r,int b,char s[80])
  {
   left = l;
   top =t;
   right = r;
   bottom = b;
   strcpy(str,s);
  }
  void draw()
  {
   window(left,top,right,bottom);
   cputs(str);
  }
  void erase()
  {
  window(left,top,right,bottom);
  clrscr();
  }
};
void main()
{
 char s1[] = {"this is a test file \n\rcheck the test mode graphics\n\rof c++\n\r"};
 char s2[] = {"it checks the display\n\rsystem of ar system"};
 box a(25,18,55,24,s1);
 a.draw();
 getch();
 a.erase();
 box b(1,1,25,18,s2);
 b.draw();
 getch();
 b.erase();
 getch();
}