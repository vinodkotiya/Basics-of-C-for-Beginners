#include<iostream.h>
#include<conio.h>
void main(void)
{
 clrscr();
 int i,j,n,k,m;
 cin>>n;
 /*for (i=1;i<=n;i++)
  {
   m=k/2;
   for(j=1;j<=m;j++)
   cout<<"v";
   for(j=1;j<i+1;j++)
   cout<<"* ";
    for(j=1;j<=k/2;j++)
   cout<<"v";
   cout<<endl;k=n-2;
   }*/
   n = n+4;
  for(i=1;i<=n;i++)
  {
  if((i%2)!=0 || i<2)
   {
   for(j=n;j>=1;j--)
   cout<<" ";
   for(j=1;j<=i;j++)
   cout<<"*";
   cout<<'\n';
   n--;
   }
  }
 getch();
}