#include<iostream.h>
#include<conio.h>
class A
{
private:
int j;
public:
void operator++()
{
j=2;
j=j++;

}
void show()
{
cout<<j;
}
};
void main()
{
A nav;
clrscr();
nav++;
nav.show();
getch();
}

