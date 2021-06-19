//Arrays  name is its base address
//array is never be pass by value it is always pass by referance
// there fore manipulation in other function can also manipulate
//the array in to main .It is not happen in the case of
// other data types(int , char)they can either p b value or p b referance see (II)
// see also arr2.cpp
#include<iostream.h>
#include<string.h>
#include<conio.h>
void display (char [] );
void main()
{
 clrscr();
 char a[10];
 cin>>a;
 cout<<"a is "<<a<<endl;
 display(a);
 cout<<"\n a is "<<a;
 getch();
}
void display(char z[10])
{
 cout<<endl<<z<<endl;
 strcpy(z,"vinod");

 cout<<z<<endl;
}
/* {II}
void display (char );     //char *
void main()
{
 clrscr();
 char a;
 cin>>a;
 cout<<"a is "<<a<<endl;
 display(a);              // &a
 cout<<"\n a is "<<a;
 getch();
}
void display(char z)
{
 cout<<endl<<z<<endl;
 //strcpy(z,"vinod");
 z='b';                   //*z
 cout<<z<<endl;
}      */
