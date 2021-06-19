#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 int driver,mode;
 char nm[20];
 cout<<"\nEnter your name";
 cin>>nm;
 driver = DETECT;
 initgraph(&driver,&mode,"\\tc\\bgi");
 moveto(240,115);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
 setcolor(GREEN);
 setusercharsize(5,3,4,1);
 outtext(nm);
 moveto(240,300);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
 setcolor(RED);
 setusercharsize(5,3,4,1);
 outtext(nm);
 moveto(100,150);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
 setcolor(BLUE);
 setusercharsize(4,7,4,6);
 outtext(nm);
 getch();
 closegraph();
 restorecrtmode();
}