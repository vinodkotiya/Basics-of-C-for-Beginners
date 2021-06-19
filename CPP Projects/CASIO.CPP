#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
//                  sa      re      ga       ma        pa    dha    ni    saa
// cont intervals    -      9/8     10/9    16/15      9/8   10/9   9/8    16/15
// from funda       1/1     9/8     5/4     4/3        3/2   5/3    15/8   2/1
void creator();
void title();
void dhun();
void main()
{//nosound();
 clrscr();
 creator();
 title();
 cout<<"\n\n\n\n\n\n\n";
 dhun();


}

void creator()
{        int gm,gd=DETECT;
	initgraph(&gd,&gm,"");
	int i,j,k=100;
	char *s[12]={"V","I","N","O","D"," ","K","O","T","I","Y","A"};
	cleardevice();
	setbkcolor(RED);
	settextstyle(3,0,4);
	settextstyle(2,0,10);
	for(i=0;i<12;i++)
	{
		k+=35;
		for(j=600;j>=k;j-=5)
		{
			sound(random(2000));
			setcolor(10);
			outtextxy(j,150,s[i]);
			setcolor(5);
			outtextxy(j,150,s[i]);
			delay(random(100));          //100
			nosound();
		}
		setcolor(10);
		outtextxy(j,150,s[i]);
	}
       cleardevice();
	outtextxy(30,150,"presented by VINOD KOTIYA");
	delay(3000);
}

void title()
{

	cleardevice();
	settextstyle(TRIPLEX_FONT,0,5);
     setcolor(WHITE);
     setbkcolor(BLUE);
    outtextxy(0,40,"     MUSICAL INSTRUMENT ");
    outtextxy(0,75,"***************************************");
    settextstyle(TRIPLEX_FONT,0,3);
    setcolor(RED);
    outtextxy(10,100,"Keys");
    settextstyle(TRIPLEX_FONT,0,2);
    setcolor(LIGHTGREEN);
    outtextxy(5,125,"Fundamental Tone      Sa   Re  Ga  Ma  Pa  Dha  Ni  Saa");
    settextstyle(TRIPLEX_FONT,0,1);
    setcolor(LIGHTRED);
    outtextxy(5,150,"      256 Hz.               A     S    D    F    G   H    J   K");
    outtextxy(5,175,"      1220 Hz.              Z     X    C    V    B   N    M   ,");
    outtextxy(5,200,"      2200 Hz.              Q     W    E    R    T   Y    U   I");
}
void dhun()
{
 char key;
 while(1)
 {
  key = getche();
  if(key == 'a'|| key == 'A')
  sound(256);
  else if (key == 's'|| key == 'S')
  sound(288);
  else if (key == 'd'|| key == 'D')
  sound(320);
  else if (key == 'f'|| key == 'F')
  sound(341);
  else if (key == 'g'|| key == 'G')
  sound(384);
  else if (key == 'h'|| key == 'H')
  sound(426);
  else if (key == 'j'|| key == 'J')
  sound(480);
  else if (key == 'k'|| key == 'K')
  sound(512);
  else if (key == 'q'|| key == 'Q')  //dwitoni
  sound(2200);
  else if (key == 'w'|| key == 'W')
  sound(2475);
  else if (key == 'e'|| key == 'E')
  sound(2750);
  else if (key == 'r'|| key == 'R')
  sound(2933);
  else if (key == 't'|| key == 'T')
  sound(3300);
  else if (key == 'y'|| key == 'Y')
  sound(3666);
  else if (key == 'u'|| key == 'U')
  sound(4125);
  else if (key == 'i'|| key == 'I')
  sound(4400);
  else if (key == 'z'|| key == 'Z')  //dwitoni
  sound(1220);
  else if (key == 'x'|| key == 'X')
  sound(1372);
  else if (key == 'c'|| key == 'C')
  sound(1525);
  else if (key == 'v'|| key == 'V')
  sound(1627);
  else if (key == 'b'|| key == 'B')
  sound(1830);
  else if (key == 'n'|| key == 'N')
  sound(2033);
  else if (key == 'm'|| key == 'M')
  sound(2287);
  else if (key == ','|| key == '<')
  sound(2440);
  else if (key == 27)
  { nosound();
    closegraph();
    cleardevice();
    exit(0);}
  else
   {nosound();
    cout<<"\b";
   }
  cout<<"\b";
 }
}