#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>

//*******  interchange kth character with ith char *******************
void interchange(char a[],int k,int i)
{
 char temp;
 temp = a[k];
 a[k] = a[i];
 a[i] = temp;
 //cout<<"\nafter interchange"<<a;
 //return a;
}

void main()
{
 int gm,gd=DETECT,vin = 6;
 initgraph(&gd,&gm,"");
 clrscr();
 cleardevice();
 setbkcolor(BLACK);
 setcolor(GREEN);
 settextstyle(2,0,6);
 char mainchoice = 'y';
 while(mainchoice == 'y')
 {
  //clrscr();
  //title();
  //count = 1;                              //reset count
  char nm[80];      //no means don't want to stuck in loop
  int length,brk=0,k=2,i=3;
  unsigned long int pankti=2;

   cout<<"\nEnter your Name " <<endl;
   cin>>nm;
   length = strlen(nm);
      outtext(nm);
       while(brk < 200)
    {  brk++;
     k = random(80);
     i = random(70);
     if(k==i)
      k = i-1;
     interchange(nm,k,i);    //interchange kth character with ith char of a
     cout<<" ";
     outtextxy(1,pankti,nm);
     pankti = pankti + 12;
     if(pankti > 900)
      {cleardevice();
      pankti=1;}
     if(kbhit() )
     {//loop breaking algorithm by key pressing:( invented by vinod kotiya
      brk = 1;
     }
    }
  //out.close();           //closing your file

  cout<<"\n\n\t\tDo you want some more combinations (Y/N)? :- ";
  mainchoice = getche();
 }      //end of external while

 getch();
}