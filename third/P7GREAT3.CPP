
//p7 constructor & greater

#include<iostream.h>
#include<conio.h>

class great
{
 int a[3];   //store 3 no
public:
 great (int a,int b,int c)
 {
	if(a>b && a>c)
	cout<<a<<" is greater";
	else if(b>a && b>c)
	cout<<b<<" is greater";
	else
	cout<<c<<" is greater";
 }
};

void main()
{
 clrscr();
	int x,y,z;
 cout<<"Enter the three numbers "<<"\n";
 cin>>x>>y>>z;
 great (x,y,z);
 getch();
}
