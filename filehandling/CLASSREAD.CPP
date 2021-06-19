#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class text
{
char str[80];
public:
      void wrt()
      {
	    cout<<"\nEnter the text:";
	    gets(str);
	}

	void show()
     {
	   cout<<"\n "<<str;
		 }
	};
void main()
{
 char ch;
 text t[5];
 clrscr();
     fstream out("C:\\CDATA\\text.txt",ios::binary|ios::in|ios::out);
		for(int i=0;i<5;i++)
		{
   t[i].wrt();
   out.write((char*)&t[i],sizeof(t[i]));
     }
out.seekg(0);
int n,x;
cout<<"\n Enter the no of object:";
cin>>n;
x=(n-1)*sizeof(t[0]);
out.seekg(x);
out.read((char*)&t[0],sizeof(t[0]));
t[0].show();
getch();
}
