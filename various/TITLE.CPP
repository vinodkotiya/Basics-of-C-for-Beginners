#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
void main()
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
			setcolor(0);
			outtextxy(j,150,s[i]);
			delay(random(100));          //100
			nosound();
		}
		setcolor(10);
		outtextxy(j,150,s[i]);
	}
	getch();
	delay(3000);
	closegraph();
	cleardevice();
}
