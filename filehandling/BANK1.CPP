#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include <iomanip.h>

class record
{
	public:
		void add_to_file(int, char t_name[30], char t_type, float);	// For initial deposits in customers account
		//void display_list(void); // Displaying customers account list
		//void delete_account(int); // Deleting customers account
		//void update_balance(int, char t_name[30], char t_address[30], float); // For updating the customer account
		//void modify(void);   	// To modify the customer account information
		//int found_account(int); // To found the account is in "INITIAL.dat" or not

	void display(int); // To display the customer account
	private:
	 //	void modify_account(int, char t_name[30], char t_address[30]);	// Function to modify the customer account
		int accno;
		char name[30], type;
		float balance;
};

class bank
{
 protected:
	char name[20][5];
	char type[10];
  public:
	int persons,noacc[10],balacc[10];
	void adddata();
	void showdata();
	void show(int i);
	void with(int&,int);
	void disp(int&,int);
      //	void add_to_file(int , char[] , char ,float);
     };

void bank::adddata()      // Take the data from user
{
 int i,acno;
 acno=11;
 record r;
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
   r.add_to_file(noacc[i], name[i],  type[i],balacc[i]);
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

void record::add_to_file(int t_accno, char t_name[30], char t_type,float t_balance)
{
	accno = t_accno;
	strcpy(name, t_name);
	type= t_type;
	balance = t_balance;
	fstream file;

	// Appends new account record with the balance into INITIAL.dat data file
	file.open("c:\\cdata\\RECORD.txt", ios::out|ios::app);
	file.write((char *)this, sizeof(record));
	file.close();
}
void record::display(int t_accno)
{
	fstream file;
	file.open("c:\\cdata\\record.txt", ios::in);
	file.seekg(0, ios::beg);

	// Displays the record contents matching with t_accno from INITIAL.dat data file
	while (file.read((char *)this, sizeof(record)))
	{
		if (t_accno == accno)
		{
			cout << "Account no. " << accno;
			cout << "\nName : ";
			puts(name);
			cout << "\nTypes : "<<type;
			cout << "\nBalance : " 	<< setprecision(2)    // set position of decimal point
						<< setiosflags(ios::left)   // set left justified output
						<< setiosflags(ios::showpoint)  // always show decimal point
						<< setiosflags(ios::fixed)    // set fixed notation for display
						<< balance;
			break;
		}
	}
	file.close();
}



void main()
{
 clrscr();
 record s;
 s.display(11);
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
 //fstream out("C:\\CDATA\\text.txt",ios::binary|ios::in|ios::out);
 //for(int i=0;i<b.persons;i++)
  // {
   //t[i].wrt();
  // out.write((char*)&b,sizeof(b));
  //   }
}
