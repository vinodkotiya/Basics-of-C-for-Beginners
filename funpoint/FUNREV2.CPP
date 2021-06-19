#include<iostream.h>
#include<conio.h>
int chk(int);
void main(void)
{
int a,d;
cout<<"Enter a no.";
cin>>a;
d=chk(a);
if(d==1)
cout<<"Both eqal";
else
cout<<"Uneqal";
getch();
}
int chk(int x)
{
int b,c=0,j;
j=x;
while(x!=0)
 {b=x%10;c=(c*10)+b;x=x/10;}
 cout<<"\n reverse"<<c;
 if(c==j)
 return(1);
 else
 return(0);
 }