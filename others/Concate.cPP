#include<iostream.h>
#include<conio.h>
void main(void)
{
int i,j;
char nm1[10],nm2[10],nm3[22],*p,*q;
clrscr();
cout<<"Enter name";
p=nm1;
cin>>p;
cout<<"\nanother name";
p=nm2;
cin>>p;
q=nm3;
p=nm1;
while(*p!='\0')
 {*q=*p;
 p++;q++;
 }
*q++=' ';
p=nm2;
while (*p!='\0')
 {
 *q=*p;
 q++;p++;
 }
*q='\0';
q=nm3;
cout<<"\n  "<<q;
getch();

}

/*
while(nm1[i]!='\0')
 {nm3[i]=nm1[i];i++;
 }

nm3[i]=' ';
 i++;
//p=nm2;
while (nm2[j]!='\0')
 {
 nm3[i]=nm2[j];
 i++;j++;
 }
nm3[i]='\0';
//q=nm3;
cout<<"\n  "<<nm3;
*/