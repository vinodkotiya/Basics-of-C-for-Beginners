#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()

{
char nm[5][20],temp[29],c;
int i,j,t=0;
clrscr();
cout<<"Enter 5 names";
for(i=0;i<5;i++)
  cin>>nm[i];
for(i=0;i<4;i++)
 {
 for(j=i+1;j<=4 ;j++)
  {
  if(strcmp(nm[i],nm[j])>0)
   {
   strcpy(temp,nm[i]);
   strcpy(nm[i],nm[j]);
   strcpy(nm[j],temp);
   }
 }
 }
for (i=0;i<5;i++)
 cout<<nm[i]<<endl;
getch();
}