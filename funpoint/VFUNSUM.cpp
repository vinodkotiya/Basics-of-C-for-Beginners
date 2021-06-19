#include<stdio.h>
#include<conio.h>
/*
float avg();
void main(void)
{
  */

/*(III)
int sum();
void main(void)
{
int d;
d=sum();
printf("sum of nos=%d",d);
getch();
}
 int sum()
 {
 int a,b,c;int x;
 printf("Enter 3 nos");
 scanf("%d%d%d",&a,&b,&c);
 x=(a+b+c);
 return(x);
 }     */
/*(II)
int sum(int,int,int);
void main(void)
{
int a,b,c; clrscr();
int d;
printf("Enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
d=sum(a,b,c);
printf("sum of nos=%d",d);
getch();
}
 int sum(int p,int q,int r)
 {
  int x;
  x=(p+q+r);
  return (x);
 }    */

/*(I)
void sum(int,int,int);
void main(void)
{
int a,b,c;clrscr();
printf("Enter 3 nos.");
scanf("%d%d%d",&a,&b,&c);
sum(a,b,c);
getch();
}
void sum(int a,int b,int c)
{
int x;
x=(a+b+c);
printf("sum of no.=%d",x);
}    */
