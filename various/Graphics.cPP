#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
//*******************************dont run bug**********///
void main()
{
int gd=DETECT,gm,errorcode;
initgraph(&gd,&gm,"");
 errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
	printf("Graphics error: %s\n", grapherrormsg(errorcode));
	printf("Press any key to halt:");
	getch();
	exit(1); /* terminate with an error code */
   }
  else
   {
textcolor(128+1);settextstyle(DEFAULT_FONT,0,6);
    setusercharsize(1,3,1,1);
    outtext("vinod kotiya");
    getch();
    }
}