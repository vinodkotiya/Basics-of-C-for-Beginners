#include<string.h>
#include<conio.h>
void main()
{
 char s[]="VINOD KOTIYA";
 clrscr();
 //window(25,6,55,18);
 textbackground(20);
 textcolor(80+BLINK);
 gotoxy(40,44);
 cputs(s);
 getch();
 clrscr();
}