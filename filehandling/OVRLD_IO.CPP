// overloading istream and ostream operator
// ostream& operator << (ostream&, class_type);   //parameter by value
// istream& operator >> (istream&, class_type&);  //parameter must be by referance

#include<iostream.h>
#include<conio.h>
#include<string.h>

class person
{
 char name[20];
 int age;
public:
 char* getname();
 int getage();
 void setname(char* name_in);
 void setage(int age_in);
};

char* person::getname()
{
 return name;
}
int person::getage()
{
 return age;
}
void person::setname(char* name_in)
{
 strncpy(name,name_in,19);
 name[19]='/0';
}
void person::setage(int age_in)
{
 age = age_in;
}
//overloaded >>  to input of person objects
istream& operator >> (istream& s,person &x)
{
 char temp_name[20];
 int temp_age;
 cout<<"\nEnter name";
 s.get(temp_name,19);    //get is used to handle embedded spaces
 cout<<"\nEnter age";
 s>>temp_age;
 x.setname(temp_name);
 x.setage(temp_age);
 return s;
}
//overloaded << to handle the output of person objects
ostream& operator << (ostream& s, person x)
{
 return s<<"Name: "<<x.getname()<<"\nAge: "<<x.getage();
}
void main()
{
 clrscr();
 person obj;
 cin>>obj;
 cout<<obj;
 getch();
}
