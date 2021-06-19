//  "Who wants to be a computer geek"
//  written by vinod kotiys, Dec 2001
//  email: jim@jimsprograms.com

#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

const int maxNameLength = 20;

class Player
{
  public:
	 char name[maxNameLength];
	 long winnings;
	 int lifelines;

	 Player(char*n,long w,int ll)
	 {
		strcpy(name,n);
		winnings=w;
		lifelines=ll;
	 };
};

class Question
{
  public:

  char qLine1[120];
  //char qLine2[60];
  char Choice1[40];
  char Choice2[40];
  char Choice3[40];
  char Choice4[40];
  char answer;

  void show(void);
  int correct(char);
  void lifeline(void);

  Question()
  {
	 strcpy(qLine1," ");
       //	 strcpy(qLine2," ");
	 strcpy(Choice1," ");
	 strcpy(Choice2," ");
	 strcpy(Choice3," ");
	 strcpy(Choice4," ");
	 answer='J';
  }
      //constructor set the question object
  /*Question(char*qsl1,char*ac1,char*ac2,char*ac3,char*ac4,char ans)
  {
	 strcpy(qLine1,qsl1);
	// strcpy(qLine2,qsl2);
	 strcpy(Choice1,ac1);
	 strcpy(Choice2,ac2);
	 strcpy(Choice3,ac3);
	 strcpy(Choice4,ac4);
	 answer=ans;
  };*/
};


void Question::show(void)
{
  cout<<qLine1<<endl;///<<qLine2<<endl<<endl;
  cout<<"A: "<<Choice1<<endl<<"B: "<<Choice2<<endl;
  cout<<"C: "<<Choice3<<endl<<"D: "<<Choice4<<endl<<endl;
};

int Question::correct(char pAnswer)
{
  if(pAnswer==answer) return(1);
  else return(0);
};

void Question::lifeline(void)
{
  int i=0,j=0;
  //Give only 2 choices of (Random 1-4 AND != answer-64 )
  randomize();
  while(i==j || i==answer-64)      //ascii value of answer
  {
	 i=int(random(4))+1;
	 while(i==j || j==0 || j==answer-64) j=int(random(4))+1;
  }
  cout<<"The two remaining answers are :"<<endl<<endl;
  if(i!=1&&j!=1) cout<<"A: "<<Choice1<<endl;
  if(i!=2&&j!=2) cout<<"B: "<<Choice2<<endl;
  if(i!=3&&j!=3) cout<<"C: "<<Choice3<<endl;
  if(i!=4&&j!=4) cout<<"D: "<<Choice4<<endl;
  cout<<endl<<"It's your choice...";
};

class Collection
{
  // List of 16 pointers to dynamically allocated Question objects.
  public:
	 Question* questptr[1];//17];
	 Question retQuest;   //return 1 que out of 17
	 int size;            //store total no of questuon
	 void add(Question* q);
	 Question getNext(int);

  Collection(int s)           //constructor initiate ptr with null
  {
	 size=s;
	 int i;
	 //for(i=0;i<17;i++)
	 {
		questptr[0] =NULL; //i]=NULL;
	 }
  };
};

void Collection::add(Question* q)
{
  int i=0;
  //while(questptr[i]!=NULL) i++;
  questptr[0] = q;//i]=q;    //if questptr is null then assign a question to it
}

Question Collection::getNext(int item)
{
  retQuest=*questptr[item];
  return(retQuest);
}

class CGame {

public:
	void play(void);
};

void CGame::play(void) {
  char name[20],c='\0';
  int i,quit=0,qCount=0,qNumber=0;
  ifstream qBank;
 // char s1[120]="Who is the writer of \0";
//  char s2[60]="this program ?\0";
  //char opt4[40],opt1[40],opt2[40],opt3[40];
  //opt0="vin\0"; opt1="vinod\0"; opt2="vinsoft\0"; opt3="vinter\0";
  //opt0=(char*)malloc(40);
  //opt1=(char*)malloc(40);
  //opt2=(char*)malloc(40);
  //opt3=(char*)malloc(40);
//  char ans;//*ans="B";
  Question aQuestion;

  // Input player's name
  cout<<"Hello, please enter your name (max 20 characters)"<<endl;
  cin>>name;

  // Create instances of Player and Collection classes
  Player aPlayer(name,0L,3);
  Collection myCollection(1);   //pass 17 to create 17 question ptr object

  // Fill Collection with questions
  qBank.open("f:\\cpp\\temp.vin");
  if(qBank.fail())
   cout<<"\nFile can't be opened";
 // for(i=0;i<16;i++)
	 {
		//fscanf(fp,"%s %s %s %s %s %s %c",s1,s2,opt0,opt1,opt2,opt3,ans);
 //		qBank.getline(s1,120);
		Question *question;
		qBank.read((char *) &question,sizeof(question));
//		qBank.getline(opt1,40);
  //		qBank.getline(opt2,40);
    //		qBank.getline(opt3,40);
      //		qBank.getline(opt4,40);
	//	qBank>>ans;
	      //	Question*question = new Question(s1,opt1,opt2,opt3,opt4,ans);
		//add question to list
		myCollection.add(question);
   //	       delete question;
	 }
  qBank.close();
  //else cout<<"Couldn't open question file!"<<endl;
  cout<<endl<<aPlayer.name<<", are you ready to play"<<endl;
  cout<<"KAUN BANEGA CROREPATI!";
  getch();

  while(aPlayer.winnings<1048576L && quit==0) {
  // get next question from list.
  aQuestion=myCollection.getNext(qNumber++);
  cout<<endl<<endl<<"Let's play KAUN BANEGA CROREPATI!";
  getch();
  clrscr();
  cout<<"You're current winnings are $"<<aPlayer.winnings<<endl;
  cout<<"If you get this next question correct "<<aPlayer.name<<endl;
  cout<<"You will have won $";
  if(++qCount!=1) cout<<aPlayer.winnings*2<<endl;
  else cout<<"64"<<endl;
  if(aPlayer.lifelines>0)
  {
	 cout<<"Remember you still have "<<aPlayer.lifelines<<" 50/50 lifeline";
	 if(aPlayer.lifelines!=1) cout<<"s";
	 cout<<" left."<<endl;
  }
  cout<<"Here is your question..."<<endl<<endl;
  aQuestion.show();

  // Use lifeline?
  if(aPlayer.lifelines>0) {
	 cout<<aPlayer.name<<", Do you want to use a lifeline? (Y/N)"<<endl;
	 c='\0';
	 while(c!='y'&&c!='Y'&&c!='n'&&c!='N') c=getch();
	 if(c=='y'||c=='Y')
	 {
		aQuestion.lifeline();
		aPlayer.lifelines--;
	 }
  }

  // Answer or quit?
  if(c!='y'&&c!='Y') cout<<"Answer A,B,C or D or quit(Q) "<<aPlayer.name<<endl;
  c='\0';
  while(c!='q'&&c!='Q'&&c!='A'&&c!='B'&&c!='C'&&c!='D') c=getche();
  cout<<endl;
  if(c=='q'||c=='Q') quit=1;

  // Correct? Y/N Continue,Double winnings/GameOver.
  if(aQuestion.correct(c)==1&&qCount==1) aPlayer.winnings=64;
  else if(aQuestion.correct(c)==1) aPlayer.winnings=aPlayer.winnings*2;
  else quit=1;
  }
  // Display Game over information.
  if(aPlayer.winnings<1048576L) cout<<"The correct answer was "<<aQuestion.answer<<", "<<endl;
  cout<<endl<<"Game Over..."<<endl;
  cout<<"Your winnings are $"<<aPlayer.winnings<<" "<<aPlayer.name<<endl;
};

class QuestionEditor
{

 char theQue[120];
  char C1[40], C2[40] ,C3[40],C4[40] ;
  char a;
 public:
 void Newq(void);
};

void QuestionEditor :: Newq(void)
{

  clrscr();

  int i;
  cout<<"\nEnter your question\n";
  cin.getline(theQue,120);

  cout<<"\nEnter choice1 :  ";
  cin.getline(C1,40);
    cout<<"\nEnter choice2 :  ";
  cin.getline(C2,40);
    cout<<"\nEnter choice3 :  ";
  cin.getline(C3,40);
    cout<<"\nEnter choice4 :  ";
  cin.getline(C4,40);
  cout<<"\nEnter write ans :  ";
  cin>>a;
}



void main()
{
  CGame Regis;
  Regis.play();
  /*QuestionEditor q;
  q.Newq();
  ofstream qFile("f:\\cpp\\temp.vin",ios::binary);
  qFile.write((char * ) & q,sizeof(q));
  qFile<<endl;
  qFile.close();*/
}


