#include<graphics.h>
#include<conio.h>
const int rad =160;
class ball
{
 int x,y;
 int linecolor,fillcolor;
 public:
 ball(int xco, int yco,int lc,int fc)
 {
  x = xco;
  y = yco;
  linecolor =lc;
  fillcolor =fc;
  }
 void draw()
 {
  setcolor(linecolor);
  setlinestyle(SOLID_LINE,0,THICK_WIDTH);
  circle(x,y,rad);
  setfillstyle(LINE_FILL,fillcolor);
  floodfill(x,y,linecolor);
 }
};
void main()
{
 int driver,mode;
 driver = DETECT;
 initgraph(&driver,&mode,"\\tc\\bgi");
 ball b1(250,180,5,7);
 ball b2(350,180,3,9);
 ball b3(400,180,7,2);
 b1.draw();
 b2.draw();
 b3.draw();
 getch();
 closegraph();
 restorecrtmode();
}