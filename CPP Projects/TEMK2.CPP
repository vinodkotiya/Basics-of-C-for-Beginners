#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 nosound();
 clrscr();
 long int i,j ,k = 0;
 int brk = 0;
 for(i=0;i<12;i++)
   {
    for(j=600;j>=1;j--)
      {  cout<<"\n i = "<<i<<" j = "<<j;
	/*if(!kbhit())
	{cout<<"HIT";sound(556);//break;
	} */
	if(kbhit() )//&& k == 0)
	{cout<<"no HIT";sound(256);
	k=1; brk = 1;
	break;
	}
      }
      if(brk == 1)
      break;
   }
 getch();
 getch();
 nosound();
}

//if(brk == 1)
  //    {nosound();break;}