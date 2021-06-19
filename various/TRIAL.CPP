#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main();
void end(int j)
{

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

   settextstyle(TRIPLEX_FONT,0,5);
     setcolor(MAGENTA);
   setbkcolor(GREEN);
    if(j==1)
    outtextxy(0,200,"        COMPUTER WINS");       // delay(15555);
    else
    outtextxy(0,200,"     YOU ARE THE VINNER");
    settextstyle(SMALL_FONT,0,5);
    setcolor(BLUE);
    outtextxy( 140,250,"ARE YOU WANT TO PLAY AGAIN(Y/N)");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
     char a=getche();
    if(a=='Y'||a=='y')
      main();
    else
    getch();
 }
void game(int x)
{if(x==1)
 end(1);
 else
 end(2);
}
void main()
{
 clrscr();
 int n;
 cin>>n;
 game(n);
}