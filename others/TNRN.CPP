#include<conio.h>
#include<stdio.h>
float avg();
void main(void)
{
int a,b,c;
float x;
clrscr();
avg(a,b,c);
x=(float)(a+b+c)/3;
getch();
}
float avg()
{
float d;
printf("Enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
return(a,b,c);
printf("Avg of nos=%f",x);
}

