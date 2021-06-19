#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
char creators();
char d;
class person
{
 public:
 char name[20],designation[20];
 int code;
 void set()
 {
	cout<<"\nEnter The Name -->";
	cin>>name;
	cout<<"\nEnter The Designation --> ";
	cin>>designation;
	cout<<"\nEnter The ID Number -->";
	cin>>code;
	}
 void show()
 {
	cout<<"\nName -->"<<name<<"\nDesignation --> "<<designation<<"\nID Number -->" <<code;
 }

};

class account : virtual public person
{
 public:
	float pay;

	void payinput()
	{
	 //person :: set();
	 cout<<"\nEnter pay -->";
	 cin>>pay;
	 if (d != 'j')
		exit(0);

	}
	void payshow()
	{
	//person :: show();
	cout <<"\nPay --> Rs "<<pay<<" /-";
	}
};

class admin : virtual public person
{
 public:
 int exp;
 void setexp()
 {
	person :: set();
	cout<<"\nEnter experience in year(s) -->";
	cin>>exp;
 }
 void showexp()
 {
 person :: show();
	cout<<"\nExperience -->"<<exp<<" year(s)";
 }
};

class master : public account , public admin
{
 public:
	void all()
	{
	 admin :: setexp();
	 account :: payinput();
	 admin :: showexp();
	 account :: payshow();
 }
};
void main ()
{
 clrscr();

 d = creators();
 master m [20];
 int n,i = 0;
 cout<<"\nEnter the no of employee(max 20) -->";
 cin>>n;
 if(n>=20)
 exit(0);
 for(i ; i<n ;i++)
 m [i].all();
 getch();
}

char creators()
{
 cout<<"****************************************************************************";
 char n1[7] = {"Vinod,"},n2[10] = {"Digvijay,"},n3[8] = {"Sameer,"},n4[9] = {"Peeyush,"},n5[8] = {"Vishwas"};
 cout<<"\nCreated by "<<n1<<n2<<n3<<n4<<n5;
	cout<<"\n****************************************************************************";
 return n2[5];
}