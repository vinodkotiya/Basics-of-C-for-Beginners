/*KAUN BANEGA CROREPATI FOR Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
void display();
int rule();
int kbcgame();
void wrong();
void rupees(int);

void main(void)
{   int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    //setbkcolor(BLUE);
    int ch;
    display();
    ch= rule();
    if(ch==1)
    ch=kbcgame();

}
    void rupees(int i)
 {

    cout<<"\n\n\n\t\t\t\t\t\t\t     Rs 1,00,00,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 50,00,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 25,00,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 12,50,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 6,40,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 3,20,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 1,60,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 80,1000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 40,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 20,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 10,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 5,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 3,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 2,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 1,000\-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 0"<<endl;
    gotoxy(58,19-i);
    //outtext("->");

    cout<<"->"<<endl;
    cout<<"\t\t   WNAT TO USE ANY HELP LINE"<<endl<<endl<<endl;
    cout<<"\t1)50:50 \t 2)PHONE A FRIEND \t 3)COMPUTER`s VIEW";


 }






      int kbcgame()
{     setbkcolor(BLUE);
     int ch,i=0;
     char a,c;
     clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 1: Where is the biggest tunnel in the world\n";
     cout<<"A) JAPAN                                 B) U.S.A.\n";
     cout<<"C) INDIA               		         D)NONE\n";
     a=getche();
       if(a!='a'&&a!='A')
	wrong();
       else
      {
      i++;
      cout<<"right answer ";
      cout<<"   U WIN Rs 1000 ";
      cout<<"     WANT TO CONTINUE Y/N";
      c = getche();
     if(c=='Y'||c=='y')
{    clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 2: Which is the biggest country in the world\n";
     cout<<"A) india           	                    B)china\n";
     cout<<"C) uk               		         D)usa\n";
     a = getche();
     if(a!='B'&&a!='b')
      wrong();
    else
    { i++;
      cout<<"RIGHT ANSWER";
      cout<<"   U WIN Rs 2000";
      cout<<"      WANT TO CONTINUE Y/N";
      c= getche();
      if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 3: Who is the first Lady Prime Minister of INDIA\n";
     cout<<"A) J.L.NEHRU                          B)KIRAN BEDI"<<endl;
     cout<<"C) INDIRA GANDHI      		         D)SAROJNI NAIDU";
     a = getche();
     if(a!='C'&&a!='c')
    wrong();
     else
    { i++;
      cout<<"RIGHT ANSWER";
      cout<<"   YOU WIN Rs 3000";
      cout<<"      WANT TO CONTINUE Y/N";
       c = getche();
       if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 4: Which is the first country to launch rocket in space"<<endl;
     cout<<"A) U.S.S.R.                         B)SOUTH AFRICA"<<endl;
     cout<<"C) POLAND      		         D)FRANCE";
     a = getche();
     if(a!='a'&&a!='A')
      wrong();
      else
    { i++;
      cout<<"RIGHT ANSWER";
      cout<<" U WIN Rs 4000";
      cout<<"    WANT TO CONTINUE Y/N";
      c = getche();
       if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 5: Which is the only country in the World \nwhere aphil tower is situated"<<endl;
     cout<<"A) IRAN                         B)FRANCE"<<endl;
     cout<<"C) HOLAND      		         D)CHINA";
     a = getche();
     if(a!='b'&&a!='B')
     wrong();
     else
    { i++;
      cout<<"RIGHT ANSWER";
      cout<<"  YOU WIN Rs 5000";
      cout<<"     WANT TO CONTINUE Y/N";
      c = getche();
       if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,7);
     cout<<"QUESTION 6: Who INVENTED TELEFONE\n";
     cout<<"A) GRAHM BELL                         B)MARCONI\n";
     cout<<"C) BOTH      		              D)NONE\n";
     a = getche();
	if(a!='a'&&a!='A')
	  wrong();
       else
       { i++;
      cout<<"RIGHT ANSWER";
      cout<<" YOU WIN Rs 10000";
      cout<<"    CONGRATULATIONS";
      cout<<endl<<"YOU CLEARED FIRST STAGE"<<endl;
      cout<<"NOW YOU WILL TAKE ATLEAST Rs 10,000/- FROM HERE";
      cout<<endl<<"YOU WANT TO CONTINUE Y/N";
      c = getche();
      if(c=='y'||c=='Y')
      return(1);


   else if(c=='n'||c=='N')
   {cout<<"YOU WIN RS 10,000/-";
    getch();
   }
    }   }
   else if(c=='n'||c=='N')
  { cout<<" YOU WIN Rs 5000/-";
    getch();
   }
   }   }
   else if(c=='n'||c=='N')
  { cout<<"YOU WIN Rs 4000/-";
     getch();
   }
  }   }
   else if(c=='n'||c=='N')
  { cout<<"YOU WIN Rs 3000/-";
    getch();
   }
 } }
  else if(c=='n'||c=='N')
  {cout<<"YOU WIN Rs 2000/-";
    getch();
   }
 } }
  else if(c=='n'||c=='N')
  {cout<<"YOU WIN Rs 1000\-";
    getch();
   }
   }
}

 void wrong()
 {
  cout<<"GALAT JAWAB\nYOU CAN`T WIN\n";
  getch();
 }

    int rule()
  {
    setbkcolor(RED);
    char h,ch ;
    getch();
    clrscr();
    cout<<"\n\n\n\n\n\n\n            TO PLAY PRESS 'Y'AND TO QUIT PRESS 'Q'";
    h=getche();
    if( h == 'q'||h =='Q')
	getch();
     else
    {
     clrscr();
     cout<<" \n\n\n               READ THE FOLLOWING RULES PROPERLY";
     cout<<"\nRULE #1:";
     cout<<"\nRULE #2:";
     cout<<"\nRULE #3:";
     cout<<"\n\n\n       ARE YOU READY Y/N";
     ch = getche();
     if(ch=='y'||ch=='Y')
     return 1;
     else
     return 0;
     }
  clearviewport();

  }

 void display()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(3,DEFAULT_FONT,5);
      textcolor(MAGENTA+128);
    setbkcolor(GREEN);
    outtextxy(0,200," KAUN BANEGA CROREPATI");       // delay(15555);
    settextstyle(SMALL_FONT,0,5);
    setcolor(BLUE);
    outtextxy( 140,250,"TO PLAY PRESS ENTER");
    //closegraph();

}

