#include<iostream.h>
#include<conio.h>
#include<c:\third\creators.h>
void main(void)
{
 clrscr();
 creators();
 char txt[1000],find;
 int i;
 cout<<"\nEnter any text\n";
 cin.getline(txt,1000);
 cout<<"\nEnter any character to be searched \n";
 cin>>find;
 for(i=0;txt[i]!='\0';i++)
  {
  if(find == txt[i])
  break;
  }
 cout<<"\nNow the text will display after the character "<<find<<endl;
 getch();
for(i;txt[i] !='\0';i++)
 cout<<txt[i+1];
 getch();
}