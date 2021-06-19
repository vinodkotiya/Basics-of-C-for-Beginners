#include<iostream.h>
#include<conio.h>
class student
{protected:
int roll;
public:
void get_number(int);
void put_number(void);
};
	void student::get_number(int a)
	 {
	 roll = a;
	 }
	 void student::put_number()
	 {
	 cout<<"Roll Number: "<<roll<<"\n";
	 }
	 class test : public student
	 {
	 protected:
	 float p,c,m;
	 public:
	 void get_marks(float,float,float);
	 void put_marks(void);
	 };
	 void test :: get_marks(float x,float y, float z)
	 {
	 p=x;
	 c=y;
	 m=z;
	 }
	 void test::put_marks()
	 {
	 cout<<"Marks in Physics "<<p<<"\n";
	 cout<<"Marks in Chemistry "<<c<<"\n";
	 cout<<"Marks in Maths "<<m<<"\n";
	 }
	 class result:public test
	 {
	 float total;
	 public:
	 void display(void);
	 };
	 void result:: display(void)
	 {
	 total = p+c+m;
	 put_number();
	 put_marks();
	 cout<<"Total = "<<total<<"\n";
	 }
	 void main()
	 {int r;
	 float i,j,k;
	 result student1,student2;
	 cout<<"Enter The Roll No.  ";
	 cin>>r;
	 cout<<"Enter The marks in physics,chemistry,maths  ";
	 cin>>i>>j>>k;
	 student1.get_number(r);
	 student1.get_marks(i,j,k);

	 student1.display();
	 getch();
	 }
