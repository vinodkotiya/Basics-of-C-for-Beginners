#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 nosound();
 clrscr();
 char c;
 do
 {
  if(kbhit() )//&& k == 0)
  {cout<<"no HIT";sound(256);
  }
  //c=getche();
 } while(kbhit());
 getch();
 getch();
 nosound();
}
