#include<iostream.h>
#include<conio.h>
#include<string.h>
	char chkname[20];
int j=0 ;
class shop
{
 private:
	 float price;
	 int stock;
	 char title[20],author[20],publisher[20];
 public:

 void initialize();
 int check();
 void stockes();
};
 int shop :: check()
 {
	int v;
	cout<<"\nEnter the name of book";
	cin>>chkname;
	v=strcmp(chkname,title);
	return v;
 }

 void shop :: stockes()
	{
	 int copy;
	 char choice;
	 cout<<"\nThe book "<<chkname<<"is available in the stock,"<<
		"\n The detail of the book is given below :-";
	 cout<<"\nName of the book is :-"<<title;
	 cout<<"\nAuthor is :-"<<author<<"\n Price:-"<<price;
	 cout<<endl<<publisher;
	 cout<<"\nEnter How many copies do you want";
	 cin>>copy;

	 if(copy > stock)
	 cout<<"\nThe no. of copies you have entered is not available , We have "<<stock<<" no. of copies of the book"
	 <<chkname<<"Do You Want" <<stock<<"No Of Copies  (Y/N):-";
	 cin>>choice;
	 if(choice == 'y' || choice == 'Y')
	 {
		cout<<"\nNo of required copies"<<copy<<" are issued ";
		cout<<"\n The total price is :-"<<price*copy;
	 }
	else
		cout<<" Please visit our shop after one week ";
 }


void shop :: initialize()
{

 cin>>title;
 cin>>author;
 cin>>publisher;
 cin>>price;
 cin>>stock;
}
/*{

 if (j == 0)
 {
	title = {"C++"};
	author = {"BALAGURUSAMY"};
	publisher = {"Tata Mcgraw"};
	price = 130;
	stock = 10;
 }
 else if (j == 1)
 {
	title = {"OOPs"};
	author = {"David Parson"};
	publisher = {"Tata Mcgraw"};
	price = 100.60;
	stock = 7;
 }
 else if (j ==2)
 {
	title = {"VC++ "};
	author = {"Herbert Shield"};
	publisher = {"Tata Mcgraw"};
	price = 200;
	stock = 13;
 }
 else if (j == 3)
 {
	title = {"Java"};
	author = {"Chimu Singh"};
	publisher = {"Tata Mcgraw"};
	price = 400;
	stock = 3;
 }
 else if (j == 4)
 {
	title = {"Oracle"};
	author = {"Timu Singh"};
	publisher = {"Tata Mcgraw"};
	price = 1300;
	stock = 1;
 }
 j++;
}
*/
void main()
{
 shop book[5],s;
 int k=0;
 for(int i=0;i<5;i++)
 book[i].initialize();
 k=book[i].check();
 if(k!=0)
	cout<<" The Book Is Not Available ";
 else
	book[i].stockes();
}
