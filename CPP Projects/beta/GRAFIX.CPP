//  **************************************************************************
//  *******************  Author : Vinod Kotiya *******************************
//  ************ B.E.2nd yr(Information Technology) **************************
//  ***************** Bhopal Engg College Bhopal *****************************
//  ************ copywrite:August2002.All Rights Unreserved ******************
//  *********** compeletion date :- 06/10/2002 to 07/10/2002 *****************
//  ******** Compeletion time :- 4.30 Hrs.(9.00 pm to 1.30 am) ***************
//  *******Address:- s-2 shrimaya apartment sector-b/363 sarvdharm ***********
//  **************** Colony ,Bhopal Fone: +91-0755-794428 ********************
//  **************************************************************************
//  Note:- confirm that you must have supported files EGAVGA.BGI,TRIP.CHR & LITT.CHR
//         (distributed with exe) In the
//         same folder of exe. othervise application will not run properly
//         If you alter any thing in the code,any problem may arise
//    Inspired from :- 11th Physics "M.P.Pathya Pustak Nigam"


#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>


#include<ctype.h>

void creator();          //displays
void title();            //displays
void aboutme();          //displays
void help();             //displays
inline void sitare(int); //displays



int dot = 0;             //displays

char *s[12]={"V","I","N","O","D"," ","K","O","T","I","Y","A"};

void grafix()
{nosound();

 //int gm,gd=DETECT,vin = 6;
// initgraph(&gd,&gm,"");
 clrscr();
 creator();
 /*while(vin !=0)             //8(9help,23 vintune,17load) for user
 {                          //6(10help,24 vintune,18load) for dhun
  if(vin == 6)
    vin = dhun();
  else if (vin == 8)
    vin = user();
  else if(vin == 9)
    {
     help();
     vin = 8;              //user evokes me jaise ko taisa
    }
  else if (vin == 10)
    {
     help();
     vin = 6;              //dhun evokes me jaise ko taisa
     }
  else if(vin == 23)
     {
      vintune();
      vin = 8;             //user evokes me jaise ko taisa
     }
  else if (vin == 24)
    {
     vintune();
     vin = 6;              //dhun evokes me jaise ko taisa
    }
  else if(vin == 17)
    {
     loadfile();
     vin = 8;              //user evokes me jaise ko taisa
    }
  else if (vin == 18)
    {
     loadfile();
     vin = 6;              //dhun evokes me jaise ko taisa
    }
 } */
 aboutme();
 cleardevice();
 closegraph();
}


//========================= USED ONLY FOR DISPLAYS =============================

void creator()
{
 int i,j,k=100,brk = 0;
 cleardevice();
 setbkcolor(BLACK);
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
	 putpixel(random(j),random(480),10);
	 putpixel(random(j)+1,150+1,3);
	 if(kbhit() )
	{ brk = 1;
	  break;
	}
	}
	setcolor(10);
	outtextxy(j,150,s[i]);
       if(brk == 1)
	break;
   }
   if(brk == 1)
   {cleardevice();  setcolor(WHITE);
    outtextxy(200,150,"VINOD KOTIYA");
    for(i = 0; i <200; i++) sitare(480);
    getch();  }
   if(brk != 1)
   delay(2000);
   settextstyle(2,0,8);
   setcolor(3);
   outtext("   PRESS ANY KEY");
   getch();
   cleardevice();
    if(*s[5] != ' ')
     exit(0);
    settextstyle(2,0,6);
    setcolor(3);
    outtextxy(5,20,"B.E. 2nd Year(Information Technology)");
    outtextxy(5,45,"Bhopal Engg College,Bhopal");
    outtextxy(5,70,"Add:- s-2,Shrimaya Apart Sector-B/363 ,Sarvdharm Colony,");
    outtextxy(5,90,"      Bhopal.(India)  Fone# +91-0755-794428");
    settextstyle(2,0,10);
    setcolor(GREEN);
    outtextxy(30,150,"VINOD KOTIYA presenting");
    settextstyle(2,0,8);
    setcolor(LIGHTRED);
    outtextxy(100,200,"DHUN(The Musical Instruments)");
    settextstyle(2,0,6);
    setcolor(3);
    outtextxy(200,400,"   PRESS ANY KEY");
    delay(2000);
    getch();
}

void title()
{
  cleardevice();
  settextstyle(TRIPLEX_FONT,0,2);
  setcolor(LIGHTGREEN);
  outtext("    VINOD KOTIYA's");
  settextstyle(TRIPLEX_FONT,0,5);
  setcolor(WHITE);
  setbkcolor(BLACK);
  outtextxy(0,40,"     VIN CRYPTOGRAPH ");
  outtextxy(0,75,"***************************************");
  settextstyle(TRIPLEX_FONT,0,3);
  setcolor(RED);
  outtextxy(10,100,"Keys                          press ? for help");
  settextstyle(TRIPLEX_FONT,0,2);
  setcolor(LIGHTGREEN);
  outtextxy(5,125,"Fundamental Tone      Sa   Re  Ga  Ma  Pa  Dha  Ni  Saa");
  settextstyle(TRIPLEX_FONT,0,1);
  setcolor(LIGHTRED);
}

void aboutme()
{
 char hlp;
 cleardevice();
 settextstyle(TRIPLEX_FONT,0,4);
 setbkcolor(BLUE);
 setcolor(LIGHTGREEN);
 outtextxy(1,15,"**************** ABOUT ME *******************");
 settextstyle(2,0,6);
 setcolor(3);
 outtextxy(10,50,"Author : Vinod Kotiya");
 outtextxy(10,75,"          s/o Shri R.K.Kotiya");
 outtextxy(10,100,"B.E. 2nd Year(Information Technology)");
 outtextxy(10,125,"Bhopal Engg College,Bhopal");
 outtextxy(10,150,"Add :- s-2 Shrimaya apt sector - B/363,Sarvdharm colony");
 outtextxy(10,175,"Bhopal Fone# +91-0755-794428");
 settextstyle(TRIPLEX_FONT,0,4);
 setcolor(LIGHTGREEN);
 outtextxy(1,215,"************* ABOUT PROGRAM ********************");
 settextstyle(2,0,6);
 setcolor(3);
 outtextxy(10,250,"Name : DHUN.exe");
 outtextxy(10,275,"size : 90KB(approx)");
 outtextxy(10,300,"Programming Language : C++");
 outtextxy(10,325,"associated files : EGAVGA.BGI,TRIP.CHR & LITT.CHR");
 outtextxy(10,350,"compeletion date : 06/10/2002 to 07/10/2002");
 outtextxy(10,375,"compeletion time :- 4.30 Hrs.(9.00 pm to 1.30 am)");
 outtextxy(10,400,"Lines of code 700");
 outtextxy(50,425,"PRESS ? for help");
 hlp = getch();
 hlp = toupper(hlp);
 if(hlp == '/')
 help();

}
void sitare(int topy)
{
  int x,y;
  x = random(600);y = 480 - random(topy);    //draw on screen resolution x*y
  putpixel(x,y,10);
  putpixel(x+1,y,10);
  putpixel(x+1,y-1,10);
  putpixel(x+1,y+1,10);               //       0
  putpixel(x+2,y,10);                 //      000
  putpixel(x+3,y,10);                 //    0000000
  putpixel(x-1,y,10);                 //      000
  putpixel(x-1,y-1,10);               //       0
  putpixel(x-1,y+1,10);
  putpixel(x-2,y,10);
  putpixel(x-3,y,10);
  putpixel(x,y+1,10);
  putpixel(x,y+2,10);
  putpixel(x,y+3,10);
  putpixel(x,y-1,10);
  putpixel(x,y-2,10);
  putpixel(x,y-3,10);
}
void savingmove()
{
 settextstyle(TRIPLEX_FONT,0,5);setcolor(RED);
 if(dot==0)
 {outtextxy(320,350,".");dot++;}
 else if(dot==1)
 {outtextxy(330,350,".");dot++;}
 else if(dot==2)
 {outtextxy(340,350,".");dot++;}
 else if(dot==3)
 {outtextxy(350,350,".");dot++;}
 else if(dot==4)
 {outtextxy(360,350,".");dot++;}
 else if(dot==5)
 {outtextxy(370,350,".");dot++;}
 else if(dot==6)
 {outtextxy(380,350,".");dot++;}
 else if(dot==7)
 {//settextstyle(TRIPLEX_FONT,0,10);setcolor(BLACK);
 outtextxy(300,350,"");
 //rectangle(320,380,440,410);
 //floodfill(321, 381, getmaxcolor());
 dot=0;
 }
}
void help()
{
 cleardevice();
 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,0,5);
 outtextxy(220,10,"HELP");
 settextstyle(TRIPLEX_FONT,0,2);
 outtextxy(5,60,"***************************************************************************************");
 setcolor(LIGHTRED);
 settextstyle(2,0,6);
 outtextxy(5,100,"The frequencies shown are the fundamental tones i.e.Sa or Do ");
 outtextxy(5,125,"By changing The frequencies you can get tunes of different ");
 outtextxy(5,150,"instruments ");
 outtextxy(5,200,"There are 3 modes 1/user 2/ default 3/Automation");
 outtextxy(5,225,"In Default mode: only 3 instruments frequency avail(use app. keys)");
 outtextxy(5,250,"In User mode:-u first enter the funda freq of instrument");
 outtextxy(5,275,":-if u want to choose different freq press U & enter freq again");
 outtextxy(5,300,"3rd mode is automation mode(com generate some tunes)");
 outtextxy(5,325,":-when you enter the freq & speed of tune ");
 outtextxy(5,350,"If you press 4 your created music will saved automatically ");
 outtextxy(5,375,":-to stop saving you have to press 9");
 outtextxy(50,400,"Press any key ");
 getch();
 cleardevice();
 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,0,5);
 outtextxy(220,10,"HELP");
 settextstyle(TRIPLEX_FONT,0,2);
 outtextxy(5,60,"***************************************************************************************");
 setcolor(LIGHTRED);
 settextstyle(2,0,6);
 outtextxy(5,100,"After pressing 9 a file saving option will come ");
 outtextxy(5,125,":-Enter your file name in which your music will save");
 outtextxy(5,150,":-File name must be less then 6 char without extention");
 outtextxy(5,200,"If you press 5 you can play your saved music");
 outtextxy(5,225,":-Enter your music file name");

 outtextxy(5,250,":-All music files will save in c drive with *.vin");
 //outtextxy(5,275,":-if u want to change freq press U ");
 //outtextxy(5,300,":-The 3rd mode is automation mode(com generate some tunes)");
 //outtextxy(5,325,":-when you enter the freq & speed of tune ");
 outtextxy(5,350,"you must have supported files EGAVGA.BGI,TRIP.CHR & LITT.CHR");
 outtextxy(5,375,"(distributed with exe) In the same folder of exe.");
 outtextxy(50,400,"Press any key ");
 getch();
 aboutme();
}