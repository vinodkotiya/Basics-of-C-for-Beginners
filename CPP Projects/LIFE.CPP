#include<iostream.h>
#include<conio.h>
#include<dos.h>
const unsigned char top = '\xDF';//sq in upper half
const unsigned char bot = '\xDC';//sq in lower half
const unsigned char both = '\xDB';//sq in both half
const unsigned char none = '\x20';//sq in neither half
const int maxcols = 80; //width
const int maxrows = 50; //2 sq per character
const int maxrealrows = 25; //really only 25 rows

enum state {dead, alive};

class cell
{
 private:
  int xco,yco;      //cell
  state oldstate , newstate;   //
 public:
 void initcell(int,int);         //initialise cell
 void setlive(void);             //set initial pattern
 state getstate(void);           //to check neighbours
 void calc (void);               //to calculate new state
 void display(void);             //disp cell
};

cell c[maxcols][maxrows];        //define array of cells

void cell::initcell(int x,int y)
{
 xco = x;
 yco = y;
 oldstate = newstate = dead;
}

void cell::setlive()
{
 newstate = alive;
}

state cell::getstate(void)
{
 return(oldstate);
}

void cell::calc()
{
 int padosi = c[xco - 1][yco - 1].getstate() +
	      c[xco    ][yco - 1].getstate() +
	      c[xco + 1][yco - 1].getstate() +
	      c[xco - 1][yco    ].getstate() +
	      c[xco + 1][yco    ].getstate() +
	      c[xco - 1][yco + 1].getstate() +
	      c[xco    ][yco + 1].getstate() +
	      c[xco +1 ][yco + 1].getstate() ;

 newstate = dead;

 if(oldstate == alive && (padosi == 2 || padosi == 3))
 newstate = alive;
 else  if(oldstate == dead &&  padosi == 3)
 newstate = alive;
}

//display the cell
//(yco goes from 0 to 49 ,screen row 0-24
void cell :: display (void)
{
 char chbuff[1];    //1 char buffer
 oldstate = newstate;
 if(newstate == alive)
  {
   int screenrow = yco / 2;
   int botrow = yco % 2;

   gettext(xco,screenrow,xco,screenrow,chbuff);
   int ch = chbuff[0];

   if (botrow) //if our cell is in bottom row
     if (ch == none || ch == bot)
      ch = both;
     else
      ch = both;
   else
     if (ch == none || ch == top)
      ch = top;
     else
      ch = both;
   gotoxy(xco,screenrow);
   putch(ch);
  }
}

main()
{
 int x,y;
 clrscr();
 _setcursortype(_NOCURSOR);
 for (x = 0;x<maxcols;x++)
  for (y = 0;y<maxrows;y++)
   c[x][y].initcell(x,y);
 c[39][24].setlive();
 c[40][24].setlive();
 c[41][24].setlive();
 c[39][25].setlive();
 c[41][25].setlive();
 c[39][26].setlive();
 c[41][26].setlive();

 for(x = 0; x<maxcols;x++)
  for(y = 0; y<maxrows; y++)
   c[x][y].display();

 getch();

 while( !kbhit() )
 {          delay(100);
  for(x = 1;x<maxcols;x++)
    for(y =1;y<maxrows - 1; y++)
     {c[x][y].calc();}//delay(500);}
  clrscr();

  for (x = 0;x<maxcols;x++)
   for(y = 0; y<maxrows;y++)
     {c[x][y].display();}//delay(500);}
 }
_setcursortype(_NORMALCURSOR);
}

