#include <stdlib.h>
#include <iostream.h>
#include<conio.h>
#include<string.h>

int main(void)
{
 char cmd[30] ,m[1]={"1"} ,n[1] = {"1"};
 int i,j;
 clrscr();
  int e;
   cout<<"About to spawn command interpreter and run a DOS command\n";
   for(i=0;i<3;i++)
    {
    strcpy(cmd,"md vin");
     for(j=0;j<3;j++)
      {
      n[0] = ;
      strcat(cmd,n);
      e=system(cmd);

      }
      m++;
      strcpy(cmd,"cd vin");
      strcat(cmd,m);
     system(cmd);
    }
   cout<<e<<_doserrno;
   getch();
   return 0;

}
