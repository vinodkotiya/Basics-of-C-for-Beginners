/// atoi converts string to integer.
#include<iostream.h>
#include<stdlib.h>
void main()
{
 char val[3];
 cout<<"\nenter val  ";
 cin>>val;
 if(val[0] == '?') cout<<"hi";
 cout<<atoi(val);
 if(atoi(val) == 24) cout<<"\nya equal";
}