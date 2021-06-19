#include<iostream.h>
#include<conio.h>
/*void selectsort(int x[],int n);*/
void main(void)
{
 int x[5],i,indx,j,large;
 clrscr();
 cout<<"Enter an array";
 for(i=0;i<5;i++)
 cin>>x[i];
 for(i=4;i>0;i--)
   {
   large=x[0];
   indx=0;
   for(j=1;j<=i;j++)
    { if(x[j]>large)
	{
	large=x[j];
	indx=j;
	}
    }
  x[indx]=x[i];
  x[i]=large;
  }
for(i=0;i<5;i++)
cout<<endl<<x[i];
getch();
}
