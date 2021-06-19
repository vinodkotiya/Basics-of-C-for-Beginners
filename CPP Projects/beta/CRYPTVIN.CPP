#include<fstream.h>
#include<conio.h>
#include<graphics.h>
//#include<decrypt.cpp>
int encrypt();
int decrypt();
void grafix();
void main()
{int gm,gd=DETECT,vin = 6;
 initgraph(&gd,&gm,"");
 //clrscr();
 cleardevice();
  settextstyle(TRIPLEX_FONT,0,2);
  setcolor(LIGHTGREEN);
  outtext("    VINOD KOTIYA's");
  settextstyle(TRIPLEX_FONT,0,5);
  setcolor(WHITE);
  setbkcolor(BLACK);
  outtextxy(0,40,"     VIN CRYPTOGRAPH ");
  outtextxy(0,75,"***************************************");

// grafix();
 int op=3;
 //while(op!=1 || op !=2)
  {
    cout<<"\nEnter 1 for encryption or 2 for decryption : - ";
    cin>>op;
  }
 if (op==1)
  op = encrypt();
 else
  op = decrypt();
   closegraph();
}