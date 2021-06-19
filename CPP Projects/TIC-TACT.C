#include<stdio.h>
#include<stdlib.h>
char field[3][3];

char check(void);
void init_field(void);
void get_player_move(void);
void get_computer_move();
void disp_field();

int main(void)
{
 char done = ' ';
 printf(" ");
 init_field();
 do
  {
   disp_field();
   get_player_move();
   done = check();
  }while(done == ' ');
  if (done == 'X')
  printf("You won|\n");
  else
  printf("Computer won|");
  disp_field();
  return 0;
}

void init_field(void)
{
 int i,j;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   field[i][j] = ' ';
}

void get_player_move(void)
{
 int x,y;
 printf("\nEnter X,Y co-ordinates of your move :-   ");
 scanf("%d %*c%d",&x,&y);
 x--;y--;/* b/c field is an array */
 if(field[x][y]!= ' ')
  {
   printf("\nInvalid move,Try again.\n");
   get_player_move();
  }
  else field[x][y] = 'X';
}

void get_computer_move(void)
{
 int i,j;
 for(i = 0;i<3;i++)
  {
   for(j =0;j<3;j++)
    if(field[i][j] == ' ')
    break;
    if(field[i][j] == ' ')
    break;
  }
  if(i*j ==9)
  {
   printf("\nDraw");
   exit(0);
   }
  else
   field[i][j] = 'O';
}

void disp_field(void)
{
 int t;
 for(t=0;t<3;t++)
  {
   printf( " %c I %c I %c ",field[t][0] , field [t][1],field [t][2]);
   if(t!=2)
   printf("\n ---I --- I ---\n");
  }
  printf("\n");
}

char check(void)
{
 int i;
 for(i=0;i<3;i++)    /* check rows */
  if(field[i][0] == field[i][1] && field[i][1] == field[i][2])
  return field[i][0];

 for(i=0;i<3;i++)   /* check col */
  if(field[0][i] == field[1][i] && field[0][i] == field[2][i])
  return field[0][i];
		    /* check digonal*/
 if (field[0][0] == field[1][1] && field[1][1] == field[2][2])
 return field[0][0];
 if (field[0][2] == field[1][1] && field[1][1] == field[2][0])
 return field[0][2];

 return ' ';
}

