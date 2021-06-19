#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 int op;
 while(op!=1 || op !=2)
  {
    cout<<"\nEnter 1 for encryption or 2 for decryption : - ";
    cin>>op;
  }
 if (op==1)
  op = encrypt();
 else
  op = decrypt();
}