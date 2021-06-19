#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class bank
{
 protected:
	char name[20][5];
	char type[5];
  public:
	int persons,noacc[5],balacc[5];
	void adddata();
	void showdata();
	void show(int i);
	void with(int&,int);
	void disp(int&,int);
     };

void bank::adddata()      // Take the data from user
{
 int i,acno;
 acno=11;

 for(i=0;i<persons;i++)
  {
   cout<<"\n Enter the Name :";
   fflush(stdin);
   cin>>name[i];
   cout<<"\n Type of Account(Recurring-r,Saving-  s,Current-c) : ";
   cin>>type[i];
   cout<<"\n Amount to be deposited  ";
   cin>>balacc[i];
   while(balacc[i]<500)
      {
      cout<<"\nsorry!amount is less than min amount";
      cout<<"\n Please Deposite more than 500";
      cout<<"\n Amount to be deposited  ";
      cin>>balacc[i];
      }
   noacc[i]=acno+i;
   cout<<"\n Account Number : "<<noacc[i];
   cout<<" \n* * * * * * * * * * * * * * *\n ";
  }
}
void bank::showdata()         //show the account information
{
 for(int i=0;i<persons;i++)
  {
   cout<<"\n Person # "<<i+1;
   cout<<"\n Name :->"<<name[i];
   cout<<"\nYour Account No:->"<<noacc[i];
   if(type[i]=='r'||type[i]=='R')
    cout<<"\n Type of Account:->Recurring";
   if(type[i]=='c'||type[i]=='C')
    cout<<"\n Type of Account:->Current";
   if(type[i]=='s'||type[i]=='S')
    cout<<"\n Type of Account:->Saving";
   cout<<"\nBalance Amount:->"<<balacc[i];
   getch();
  }
}
void bank::disp(int &x,int i)
 {
   int a;
   cout<<"\n Enter the Deposit Amount : ";
   cin>>a;
   x=x+a;
   cout<<"\n Name :->"<<name[i];
   cout<<"\n Account No:->"<<noacc[i];
   cout<<"\n Type of Account :->"<<type[i];
   cout<<"\n Balance Amount:->"<<balacc[i];
}
void bank::show(int i)
{
 cout<<"\n Name :->"<<name[i];
 cout<<"\n Account no:->"<<noacc[i];
 cout<<"\n Type of Account:->"<<type[i];
 cout<<"\n Balance Amount:->"<<balacc[i];
}
void bank::with(int &x,int i)
 {
 int b;
 cout<<"\n Enter the Withdraw Amount : ";
 cin>>b;
 x=x-b;
 if(x>500)
   {
    cout<<"\n Name:->"<<name[i];
    cout<<"\n Account No:->"<<noacc[i];
    cout<<"\n Type of Account:->"<<type[i];
    cout<<"Balance Amount :->"<<balacc[i];
    }
 else
   {
     cout<<"Sorry!Minimum Balance should be 500 left ";
     x=x+b;
   }
}

void main()
{
 clrscr();
 bank b;
 cout<<"\nEnter the no of persons (max 10) :  ";
 cin>>b.persons;
 b.adddata();
 b.showdata();
 int z,flag=0;
 char a;
 do
 {
  int i=0;
  flag=0;
  cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * *\n";
  cout<<"\nYou can now proceed with the transactions";
  cout<<"\nPlease enter the account number :";
  cin>>z;
  for(i=0;i<5;i++)
     {
      if(b.noacc[i]==z)
	  {
	    int ch1;
	    flag=1;
	    cout<<"\n\n 1.Deposit amount \n 2.Withdraw amount \n 3.Checking balance";
	    cout<<"\n your choice :(1,2,3) ";
	    cin>>ch1;
	    switch(ch1)
	     {
	       case 1:
		  b.disp(b.balacc[i],i);
	       break;

	       case 2:
		  b.with(b.balacc[i],i);
	       break;
	       case 3:
		b.show(i);
	      }
	}
     }
 if(flag==0)
 cout<<"\n sorry ! this account no. is not in this bank ";
 cout<<"\n do you want to continue (y/n): ";
 a = getch();
 }while(a=='y'|| a=='Y');
 getch();
}
