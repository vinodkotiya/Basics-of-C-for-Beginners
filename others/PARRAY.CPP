#include<iostream.h>
#include<conio.h>
class abc
{
int a;
public:
void get()
{
cin>>a;
}
void show()
{
cout<<a;
}
};
void main()
{
abc *ptr[5];
//abc *ptr=new abc[5];
//abc *dtr;
//dtr=ptr;
for(int i=0;i<5;i++)
{
ptr[i]=new abc;
ptr[i]->get();
///ptr++;
}
//ptr=dtr;
for(i=0;i<5;i++)
{
ptr[i]->show();
//ptr++;
}
getch();
}