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
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
//                  sa      re      ga       ma        pa    dha    ni    saa
// cont intervals    -      9/8     10/9    16/15      9/8   10/9   9/8    16/15
// from funda       1/1     9/8     5/4     4/3        3/2   5/3    15/8   2/1
void creator();
void title();
int dhun();
int user();
void help();
void vintune();
void aboutme();
char *s[12]={"V","I","N","O","D"," ","K","O","T","I","Y","A"};
void main()
{//nosound();

 int gm,gd=DETECT,vin = 6;
 initgraph(&gd,&gm,"");
 clrscr();
 creator();
 while(vin !=0)//8(9help,23 vintune) for user 6(10help,24 vintune) for dhun
 {
  if(vin == 6)
  vin = dhun();
  else if (vin == 8)
  vin = user();
  else if(vin == 9)
  {help();
   vin = 8;          //user evokes me jaise ko taisa
  }
  else if (vin == 10)
  { help();
   vin = 6;       //dhun evokes me jaise ko taisa
   }
  else if(vin == 23)
  {vintune();
   vin = 8;          //user evokes me jaise ko taisa
  }
  else if (vin == 24)
  { vintune();
   vin = 6;       //dhun evokes me jaise ko taisa
   }
 }
 aboutme();
 closegraph();
}

void creator()
{
	int i,j,k=100;
	cleardevice();
	setbkcolor(BLACK);
	//settextstyle(3,0,4);
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
		}
		setcolor(10);
		outtextxy(j,150,s[i]);
	}
	delay(2000);
	//window(100,100,55,18);
	//textbackground(20);
	//textcolor(RED+BLINK);
       //	cputs(text);
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
	setcolor(MAGENTA);
	outtext("    VINOD KOTIYA's");
	settextstyle(TRIPLEX_FONT,0,5);
     setcolor(WHITE);
     setbkcolor(BLUE);
    outtextxy(0,40,"     MUSICAL INSTRUMENTS ");
    outtextxy(0,75,"***************************************");
    settextstyle(TRIPLEX_FONT,0,3);
    setcolor(RED);
    outtextxy(10,100,"Keys                          press ? for help");
    //outtextxy(10,100,"press ? for help");
    settextstyle(TRIPLEX_FONT,0,2);
    setcolor(LIGHTGREEN);
    outtextxy(5,125,"Fundamental Tone      Sa   Re  Ga  Ma  Pa  Dha  Ni  Saa");
    settextstyle(TRIPLEX_FONT,0,1);
    setcolor(LIGHTRED);


    //cin>>alt; //82 R
}
int dhun()
{
 char key,v = *s[5];
 title();
 outtextxy(5,150,"      256 Hz.               A     S    D    F    G   H    J   K");
 outtextxy(5,175,"      1220 Hz.              Z     X    C    V    B   N    M   ,");
 outtextxy(5,200,"       654 Hz.              Q     W    E    R    T   Y    U   I");
 setcolor(MAGENTA);
 outtextxy(5,225,"Hit P :- for user defined fundamental tone(MOOL SWAR i.e. Sa)");
 outtextxy(5,250,"Hit L :- for (Automation) music generated by computer");
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
  sound(654);
  else if (key == 'w'|| key == 'W')
  sound(735);
  else if (key == 'e'|| key == 'E')
  sound(817);
  else if (key == 'r'|| key == 'R')
  sound(872);
  else if (key == 't'|| key == 'T')
  sound(981);
  else if (key == 'y'|| key == 'Y')
  sound(1090);
  else if (key == 'u'|| key == 'U')
  sound(1226);
  else if (key == 'i'|| key == 'I')
  sound(1308);
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
  else if (key == 27 || v != ' ')
  { nosound();

    cleardevice();
    return (0) ;} //goto main and made false
  else if (key == 'p' || key == 'P')
  {nosound();
   return (8);    //goto main and switch to user
  }
  else if (key == '?' || key == '/')
  {nosound();               //dhuns 10 help
   return (10);
  }
  else if(key == 'l' || key =='L')
  {nosound();
  return 24;}     //dhuns 24 vintune
  else
   {nosound();
    cout<<"\b";
   }
  cout<<"\b";
  putpixel(random(600),random(480),10);
 }

}

int user()
{
clrscr();
  cleardevice();

 long int freq,hz;
 char key;
  setcolor(LIGHTRED);
  outtextxy(5,100,"Enter your fundamental frequency(Sa) in Hz. ");
  outtextxy(5,125,"Frequencies must be between 200 to 3000 for good quality");
  outtextxy(5,150,"Recommended freq are 288,352,496,680,759,1300,1900Hz.etc ");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
  cin>>freq;
  if(freq < 200 || freq > 3000)
  {cout<< "freq you have Entered is not audible";delay(3000);
  return 8;} //call again
  title();
  outtextxy(25,150," (User) Hz.               A     S    D    F    G   H    J   K");
  setcolor(MAGENTA);
 outtextxy(5,225,"Hit P :- for switch back to default fundamental tone(MOOL SWAR i.e. Sa)");
 outtextxy(5,250,"Hit 'O' :- for setting the fundamental tone(MOOL SWAR i.e. Sa) again");
 outtextxy(5,275,"Hit L :- for (Automation) music generated by computer");
  while(1)
 {
  key = getche();
  if(key == 'a'|| key == 'A')
  sound(freq);
  else if (key == 's'|| key == 'S')
  {hz = (freq * 9)/8;
  sound(hz);}
  else if (key == 'd'|| key == 'D')
  {hz = (freq *5)/4;
   sound(hz);}
  else if (key == 'f'|| key == 'F')
  {
   hz = (freq *4)/3;
   sound(hz);
   }
  else if (key == 'g'|| key == 'G')
  {
   hz = (freq *3)/2;
   sound(hz);
   }
  else if (key == 'h'|| key == 'H')
  {
   hz = (freq *5)/3;
   sound(hz);
   }
  else if (key == 'j'|| key == 'J')
  {
   hz = (freq *15)/8;
   sound(hz);
   }
  else if (key == 'k'|| key == 'K')
  {
   hz = (freq *2);
   sound(hz);
   }
  else if (key == 27 || *s[7] != 'O')
  { nosound();

    cleardevice();
  return (0);}           // goto main and false
  else if (key == 'P' || key == 'p')
  {nosound();
  cleardevice();
   return (6);           //go to main and switch dhun
  }
  else if (key == 'o' || key == 'O'|| key == '0')
  {nosound();
  cleardevice();
   return (8);           //go to main and switch again user
  }
  else if (key == '?' || key == '/')
  {nosound();
   return (9); //users 9help
  }
  else if(key == 'l' || key =='L')
  {nosound();
  return 23;}  //users 23 vintune
  else
   {nosound();
    cout<<"\b";
   }
   putpixel(random(600),random(480),10);
 }
}
void help()
{
 cleardevice();
 setcolor(LIGHTRED);
 outtextxy(5,100,"The frequencies shown are the fundamental tones i.e.Sa or Do ");
 outtextxy(5,125,"By changing The frequencies you can get tunes of different ");
 outtextxy(5,150,"instruments ");
 outtextxy(5,200,"There are 3 modes user & default(switching by pressing P)");
 outtextxy(5,225,"In Default modes:- only 3 instruments frequency avail(use app. keys)");
 outtextxy(5,250,"In User mode:-u first enter the funda freq of instrument");
 outtextxy(5,275,":-if u want to change freq press U ");
 outtextxy(5,300,":-The 3rd mode is automation mode(com generate some tunes)");
  outtextxy(5,325,":-when you enter the freq & speed of tune ");
 outtextxy(5,350,"you must have supported files EGAVGA.BGI,TRIP.CHR & LITT.CHR");
 outtextxy(5,375,"(distributed with exe) In the same folder of exe.");
 outtextxy(50,400,"Press any key ");
 getch();
 aboutme();
}
void vintune()
{
 int sur,tim=50;
 long int freq,hz;
clrscr();
 cleardevice();

  settextstyle(TRIPLEX_FONT,0,4);
  setcolor(LIGHTGREEN);
  outtextxy(50,15,"AUTOMATION MODE");
  settextstyle(TRIPLEX_FONT,0,2);
    setcolor(LIGHTRED);
  outtextxy(5,50,"Enter any freq(Recomended between 250 to 800");//  & speed";
  cout<<"\n\n\n\n\n\t\t\t\t\t\t\t";
  cin>>freq;
  if(freq < 200 || freq > 3000)
  freq = 456;

  outtextxy(5,90,"Enter speed (between 1 to 20): 20 is slowest & 1 is fastest");
   cout<<"\n\n\t\t\t\t\t\t\t";
  cin>>tim;
  outtextxy(5,200,"If you press any key automation will aborted");
  if(tim <1 || tim > 20)
  tim = 6;
  tim = tim*70;



 //cin>>freq>>tim;
 while(!kbhit())
 {
  sur = random(9);
  if (sur == 1 )  //dwitoni
  {hz = freq ;
   sound(hz);
   delay(random(tim));}
   else if (sur ==2)
   {hz = (freq * 9)/8;
  sound(hz);
    delay(random(tim));}
  else if (sur ==3)
   {hz = (freq * 5)/4;
  sound(hz);
   delay(random(tim));}
  else if (sur ==4)
   {hz = (freq * 4)/3;
  sound(hz);
   delay(random(tim));}
  else if (sur ==5)
   {hz = (freq * 3)/2;
  sound(hz);
   delay(random(tim));}
  else if (sur ==6)
   {hz = (freq * 5)/3;
  sound(hz);
   delay(random(tim));}
  else if (sur ==7)
   {hz = (freq * 15)/8;
  sound(hz);
   delay(random(tim));}
  else if (sur ==8)
   {hz = (freq * 2);
  sound(hz);
   delay(random(tim));}
   int x,y;
   x = random(600);y = 480 - random(230);
  putpixel(x,y,10);
  putpixel(x+1,y,10);
  putpixel(x+1,y-1,10);
  putpixel(x+1,y+1,10);
  putpixel(x+2,y,10);
  putpixel(x+3,y,10);
  putpixel(x-1,y,10);
  putpixel(x-1,y-1,10);
  putpixel(x-1,y+1,10);
  putpixel(x-2,y,10);
  putpixel(x-3,y,10);
  putpixel(x,y+1,10);
  putpixel(x,y+2,10);
  putpixel(x,y-1,10);
  putpixel(x,y-2,10);
 }
 nosound();
}

void aboutme()
{
 cleardevice();
  settextstyle(TRIPLEX_FONT,0,4);
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
  outtextxy(10,275,"size : 70KB(approx)");
  outtextxy(10,300,"Programming Language : C++");
  outtextxy(10,325,"associated files : EGAVGA.BGI,TRIP.CHR & LITT.CHR");
  outtextxy(10,350,"compeletion date : 06/10/2002 to 07/10/2002");
  outtextxy(10,375,"compeletion time :- 4.30 Hrs.(9.00 pm to 1.30 am)");
  outtextxy(10,400,"Lines of code 500");
  //outtextxy(5,175,"Bhopal Fone# +91-0755-794428");
  outtextxy(50,450,"PRESS ANY KEY TO BACK");
  getch();
}