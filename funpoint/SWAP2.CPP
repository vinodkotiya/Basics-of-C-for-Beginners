//no swapping is possible b/c function does not return values
//while using pointer we can swap without returning back to main see swap.cpp & swap1.cpp
//similarly we can manipulate the arrays with the help of pointers {declare parameter
// fun(char *); call fun(arr );& define fun (char *p) see arr1.cpp}
//   without sending it to any other function
#include<iostream.h>
#include<conio.h>
void swap(int ,int );
void main()
{
 clrscr();
 int a,b;
 cin>>a>>b;
 //cout<<"\n &a="<<&a<<endl;
 swap(a,b);
 cout<<a<<b;
 getch();
}
void swap (int p,int q)
{
 int temp;
 cout<<p<<q;
 //cout<<"\n&p= "<<&p<<"  &q="<<&q<<endl;
 temp = p;
 p = q;
 q = temp;
}
