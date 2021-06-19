//                     ARRAYS.CPP

#include<iostream.h>
#include<conio.h>
#include<c:\final\creators.h>

void main()
{
 char v;
 clrscr();
 v = creators();
 int A[5],B[5],C[5][2];
 long int i,j,temp;
 cout<<"\nEnter the elements of array A[5] in any order \n";
 for(i=0;i<5;i++)
  cin>>A[i];
 cout<<"\nEnter the elements of array B[5] in any order \n";
  for(i=0;i<5;i++)
   cin>>B[i];
  for(i=0;i<5;i++)
   {
     for(j=i+1;j<5;j++)
	{
	 if(A[i]>A[j])
	 {  temp=A[i];
	    A[i]=A[j];
	    A[j]=temp;
	  }
	  if(B[i]>B[j])
	  { temp=B[i];
	    B[i]=B[j];
	    B[j]=temp;
	  }
	}
     }

 cout<<"\nElements of A[5] in ascending order\n ";
 for(i=0;i<5;i++)
  cout<<A[i]<<"\t";
 cout<<"\nElements of B[5] in ascending order\n ";
 for(i=0;i<5;i++)
  cout<<B[i]<<"\t";
 for(i=0;i<5;i++)
   {
     for(j=i+1;j<5;j++)
	{
	 if(A[i]<A[j] && v ==  'Y')
	 {  temp=A[i];
	    A[i]=A[j];
	    A[j]=temp;
	  }
	  if(v == 'Y' && B[i]<B[j] )
	  { temp=B[i];
	    B[i]=B[j];
	    B[j]=temp;
	  }
	}
     }

 for(i=0;i<5;i++)
      C[i][0] = A[i];
 for(i=0;i<5;i++)
      C[i][1] = B[i];
  cout<<"\nnow A[5] & B[5] will merge in C[5][2] in descending order\n";
  for(j=0;j<2;j++)
   {
    for(i=0;i<5;i++)
      cout<<C[i][j]<<"\t";
    cout<<endl;
    }
 getch();
}