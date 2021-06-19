#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<c:\third\creators.h>

struct stud
{
 int exp;
 char nm[25];
 unsigned long int sal;
 };
     input(char[],char[]);
void compare(stud[],int);
void display(stud);
void main()
{
 struct stud s[10];
 int i,n;
 char nm1[10];
 clrscr();
 creators();
 cout<<"\nEnter the no of employees(max 10) ";
 cin>>n;
 cout<<"Enter Name , salery & expirience of employee";
 for(i=0;i<n;i++)
  {
  cout<<"\nName ";
  cin>>s[i].nm;
  cout<<"\nSalary ";
  cin>>s[i].sal;
  cout<<"\nExpereance ";
  cin>>s[i].exp;
  }
 compare(s,n);
 getch();
}
void compare(stud s[5],int n)
{
 int i;

 for(i=0;i<n;i++)
 {
  if(s[i].exp > 10)
  {s[i].sal= s[i].sal + (s[i].sal * 5)/100;
   display(s[i]);
   }
 }

}
void display(stud temp)
{
 cout<<"\nName "<<temp.nm<<"\nSalery "<<temp.sal<<"\t\tExperiance "<<temp.exp;
}

