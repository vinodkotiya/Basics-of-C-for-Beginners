#include<iostream.h>
#include<conio.h>
#include<c:\third\creators.h>

void main (void)
{
 clrscr();
 int n; char ch = 'y';
 creators();
 while(ch == 'y' || ch == 'Y')
 {
  cout<<"\nEnter the no of students ";
  cin>>n;
  int roll[256],marks[256];
  for(int i = 0 ;i < n;i++)
  {
   cout<<"\nEnter the rollno & marks of student no. "<< i+1<<endl;
   cin>>roll[i]>>marks[i];
  }
  cout<<"\nPress any key to see the entries ";
  getch();
  for( i = 0; i< n; i++)
  cout<<"\nRoll no "<<roll[i]<<"\t\tMarks  " <<marks[i];
  cout<<"\nDo you want to enter again ?(Y/N):  ";
  cin>>ch;
  }
}