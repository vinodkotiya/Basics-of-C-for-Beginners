//                   strings.cpp

#include<iostream.h>
#include<conio.h>

void main()
{
 char nm1[10],nm2[20];
 int i,j,length;
 clrscr();
 cout<<"Enter 1st string (less than 9 char)\n";
//>>>>>>>>>>>>>>>   reading string        <<<<<<<<<<<<<<<<<<<<<<<<<<<<
 cin>>nm1;
 for(i=0; nm1[i]!='\0' ;i++);
    length=i;

//>>>>>>>>>>>>>>>>  reversing string      <<<<<<<<<<<<<<<<<<<<<<<<<<<<
 for(i=0,j = length-1; j>=0 ;i++,j--)
  nm2[i] = nm1[j];
 nm2[i] = '\0';
 cout<<"\nThe reversed string is  "<<nm2;

//>>>>>>>>>>>>>>>>  copying string        <<<<<<<<<<<<<<<<<<<<<<<<<<<<
 for(i=0;nm1[i]!='\0';i++)
     nm2[i]=nm1[i];
 cout<<"\nThe string is copied "<<nm2;
 cout<<"\nEnter 2nd string(less than 9 char )\n";
 cin>>nm2;
//>>>>>>>>>>>>>>>>  concatinating strings <<<<<<<<<<<<<<<<<<<<<<<<<<<<

 for(i=0;nm2[i]!='\0';i++);
    length=i;
 for(i=0,j=length;nm1[i]!='\0';i++,j++)
   nm2[j]=nm1[i];
 nm2[j]='\0';
 cout<<"\nThe strings are concatinated "<<nm2;
getch();
}
