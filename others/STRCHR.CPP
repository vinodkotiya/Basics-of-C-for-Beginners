#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
 char keys2[10] = {"ZXCVBNM<,"},keys1[9] = {"QWERTYUI"};
 char *ptr,c,v[2],sur;
 long int freq= 256 ,hz;
 while(sur != 'p'){cin>>sur;
       v[0] = sur;
       strcpy(v,strupr(v));
       c = v[0];
     ptr = strchr(keys1, c);
    if (ptr !=0)
       freq = freq+398;
    else
     { ptr = strchr(keys2,c);
       if (ptr !=0)
	freq = freq + 964;
      }
      cout<<freq; freq = 256; }
  getch();
}