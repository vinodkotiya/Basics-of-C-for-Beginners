#include<stdio.h>
#include<conio.h>
float avg();
void main(void)
{
int a,b,c;clrscr();
printf("Enter 3 nos.");
scanf("%d%d%d",&a,&b,&c);
avg();
getch();
}
float avg(int a, int b,int c)
 {
 float d;
 d=(float)(a+b+c)/3;

printf("Avg of nos=%f",d);
 }
/*(III)
float avg();
void main(void)
{
float d;
d=avg();
printf("Avg of nos=%f",d);
getch();
}
 float  avg()
 {
 int a,b,c;float x;
 printf("Enter 3 nos");
 scanf("%d%d%d",&a,&b,&c);
 x=(float)(a+b+c)/3;
 return(x);
 }     */
/*(II)
float avg(int,int,int);
void main(void)
{
int a,b,c; clrscr();
float d;
printf("Enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
d=avg(a,b,c);
printf("Avg. of nos=%f",d);
getch();
}
 float avg(int p,int q,int r)
 {
  float x;
  x=(float)(p+q+r)/3;
  return (x);
 }    */

/*(I)
void avg(int,int,int);
void main(void)
{
int a,b,c;clrscr();
printf("Enter 3 nos.");
scanf("%d%d%d",&a,&b,&c);
avg(a,b,c);
getch();
}
void avg(int a,int b,int c)
{
float x;
x=(float)(a+b+c)/3;
printf("Avg of no.=%f",x);
} */
