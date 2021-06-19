#include<iostream.h>
#include<conio.h>
class distance
{
int feet,inches;
public:
distance(){}
distance(int ft, int in)
{
feet=ft;
inches=in;
}
void get_dist()
{
cout << "enter feet & inches ";
cin >> feet >>inches;
}
void showdist()
{
cout <<feet <<"\'" << "\""<<inches ;
}
distance operator+ (distance);
};
distance distance:: operator +(distance d3)
{
distance d;
d.inches=inches +d3.inches;
d.feet=0;
if (d.inches>=12)
{
d.inches=d.inches-12;
d.feet ++;
}
d.feet =d.feet +feet+d3.feet;
return d;
}
void main()
{
distance d1(10,2),d2 (11,6.25),d3;
d3=d1+d2;
d3.showdist();
getch();
}







