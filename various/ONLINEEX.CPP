/*ONLINEEXAMINATION.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<iostream.h>
#include<conio.h>
int que ();
void display(int );
void main()
{
 clrscr();
  que();
  getch();
}
int que()
{
 char ans;
 int r=0;
 cout<<"\n\n";
 cout<<"Que 1:  WHICH OF THE FOLLOWING IS A HEXADECIMAL NO ? \n"
     <<"        (A) 570   			(B) hex 5         \n"
     <<"        (C) 20X9F			(D) 0X5		" ;
 cin>>ans;
 if(ans == 'a' || ans == 'A')
   r++;
 clrscr();
  cout<<"\n\n";
 cout<<"Que 2:   ?"<<"\n"
     <<"        (A) 		(B)          \n"
     <<"        (C) 		(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
  cout<<"\n\n";
 cout<<"Que 3:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 4:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D)		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 5:  WHICH OF THE FOLLOWING IS A HEXADECIMAL NO ? \n"
     <<"        (A) 570   			(B) hex 5         \n"
     <<"        (C) 20X9F			(D) 0X5		" ;
 cin>>ans;
 if(ans == 'a' || ans == 'A')
   r++;
 clrscr();
  cout<<"\n\n";
 cout<<"Que 2:   ?"<<"\n"
     <<"        (A) 		(B)          \n"
     <<"        (C) 		(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
  cout<<"\n\n";
 cout<<"Que 3:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 4:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D)		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 1:  WHICH OF THE FOLLOWING IS A HEXADECIMAL NO ? \n"
     <<"        (A) 570   			(B) hex 5         \n"
     <<"        (C) 20X9F			(D) 0X5		" ;
 cin>>ans;
 if(ans == 'a' || ans == 'A')
   r++;
 clrscr();
  cout<<"\n\n";
 cout<<"Que 2:   ?"<<"\n"
     <<"        (A) 		(B)          \n"
     <<"        (C) 		(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
  cout<<"\n\n";
 cout<<"Que 3:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 4:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D)		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 1:  WHICH OF THE FOLLOWING IS A HEXADECIMAL NO ? \n"
     <<"        (A) 570   			(B) hex 5         \n"
     <<"        (C) 20X9F			(D) 0X5		" ;
 cin>>ans;
 if(ans == 'a' || ans == 'A')
   r++;
 clrscr();
  cout<<"\n\n";
 cout<<"Que 2:   ?"<<"\n"
     <<"        (A) 		(B)          \n"
     <<"        (C) 		(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
  cout<<"\n\n";
 cout<<"Que 3:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 4:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D)		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 1:  WHICH OF THE FOLLOWING IS A HEXADECIMAL NO ? \n"
     <<"        (A) 570   			(B) hex 5         \n"
     <<"        (C) 20X9F			(D) 0X5		" ;
 cin>>ans;
 if(ans == 'a' || ans == 'A')
   r++;
 clrscr();
  cout<<"\n\n";
 cout<<"Que 2:   ?"<<"\n"
     <<"        (A) 		(B)          \n"
     <<"        (C) 		(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
  cout<<"\n\n";
 cout<<"Que 3:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D) 		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 cout<<"\n\n";
 cout<<"Que 4:   ?"<<"\n"
     <<"        (A)    			(B)          \n"
     <<"        (C) 			(D)		" ;
 cin>>ans;
 if(ans == '' || ans == '')
   r++; clrscr();
 display(r);
}
void display(int r)
{
 int marks;
 int total_que = 5, wrong,right;
 right = r;
 wrong = total_que - right ;
 marks = (4*right) - wrong;
 cout<<"\nYOUR RIGHT ANSWER(s) ARE :  "<<right;
 cout<<"\n\n\nYOUR WRONG ANSWER(s) ARE :   "<<wrong;
 cout<<"\n\n\nYOUR TOTAL MARKS IS:   "<<marks;
}

