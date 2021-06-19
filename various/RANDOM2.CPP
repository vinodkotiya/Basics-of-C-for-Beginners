#include"random.cpp"
#include<iostream.h>
#include<conio.h>
void main(void)
{
 clrscr();
 random r;
 int n= r.integer(19,25);
 cout<<n<<endl;
 getch();
}