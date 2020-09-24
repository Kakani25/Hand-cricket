

 #include<iomanip>
 #include<graphics.h>
 #include<conio.h>
 #include<iostream.h>
 #include<dos.h>
 #include<stdio.h>
 #include<stdlib.h>
 #include<ctype.h>

 int l,counta=3,countb=2,countc=1;

 int us,cs,flag=0;
   void bat();
   void bowl();

   void play()
	    {
		start :


		setbkcolor(WHITE);
		setcolor(RED);
		textcolor(3);

		clrscr();

		char toss,name[30];
		int rand;
		randomize();
		cout<<"\n\n\t\tHand Cricket.....\n\n\n\tTOSS\n\t~~~~"
		    <<"\n\nHead Or Tail \n\nEnter H / T : ";
		 toss=toupper(getch());

		 if((toss!='H')&&(toss!='T'))
		   {
		    cout<<"\a\n\nEnter H Or T : ";
		    delay(1000);
		    goto start;
		     }
		 cout<<toss<<"\n\nPress Any key To Stop ! \n\n";
		int  i=1;

		while(!kbhit())
		{
		 rand=random(2);

		switch(rand)
		{
		 case 0 :
		      cout<<" Head ";
		      break;

		 case 1 :
		      cout<<" Tail ";
		      break;
		      }

		 if((i%11)==0)
		  cout<<'\n';
		  delay(50);
		  i++;
			 }
		  getch();

		  redo :
		switch(rand)
		{
		case 0 :
		   if(toss=='H')
		   {
		     cout<<"\nYou Won The Toss !!\n\n\n"
			 <<"Batting Or Bowling ? \n\nEnter B / L : ";
			 toss=toupper(getch());
			  cout<<toss;

			if(toss=='B')
			bat();

			else
			if(toss=='L')
			    bowl();

			else
			{
			 cout<<"\n\nPlease Enter Correct Option : ";
			 sound(700);
			 delay(750);
			 nosound();
			 toss='H';
			 goto redo;
				  }
			}

	     else
	      if(toss=='T')
	      {
	       cout<<"\n\nComputer Wins The Toss !! \n\n";
		switch(rand)
		{
		   case 0 : cout<<"\n\nComputer Chose To Bat ! ";
		    getch();
		    bowl();
		     break;

		   case 1 :
			cout<<"\n\nComputer Chose To Bowl ! ";
			    getch();
			    bat();
			    break;

		 }
		   } break;

		 case 1 :
		      if(toss=='T')
			  {
		     cout<<"\nYou Won The Toss !!\n\n\n"
			 <<"Batting Or Bowling ? \n\nEnter B / L : ";
			    toss=toupper(getch());
			    cout<<toss;

			if(toss=='B')
			  bat();

		    else
			if(toss=='L')
			bowl();

		    else
			{
			 cout<<"\n\nPlease Enter Correct Option : ";
			 sound(700);
			delay(750);
			nosound();
			toss='H';
			goto redo;
			 }
			 }

		    else
			 if(toss=='H')
			{
			cout<<"\n\nComputer Wins The Toss !! \n\n";

	  switch(rand)
	  {
		 case 0 :
			 cout<<"\n\nComputer Choose To Bat ! ";
				getch();
				bowl();
				break;

		case 1 :
			 cout<<"\n\nComputer Choose To Bowl ! ";
			      getch();
			      bat();
			      break;
			}
				}  break;
		}

		if(us>cs)
		{
		cout<<"\n\n\t\t\t*** You Win !! ***";
			}

		else
		if(cs>us)
		  {
		  cout<<"\n\n\t\t\t***Computer Win !! ***";
			 }

		else
		 {
		 cout<<"\n\n\t\t\t***Match TIED";
		}

		cout<<"\n\nDo You Want To Play Again ?"
		    <<" \n\nEnter Y / N : ";
		toss=toupper(getch());
		cout<<toss;

		if(toss=='N')
		{
		  cout<<"\n\nThankYou For Playing This Game !!";
		delay(2000);
		 }

		else
		 goto start;

		 getch();
		   }

    void bat()
{
 if(l==1)
  {us=10;
   }
  else if(l==2)
  {us=5;
   }
  else
  { us=0;
  }
textcolor(5);
clrscr();
randomize();
cout<<"\n\n\n\nUser Batting !\n\n";
int u,c;
do
{
if(flag!=0)
{
if((cs-us)<0)
{
cout<<"\n\n\nYou Win !!";
goto end;
}
cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
}
cout<<"\n\nEnter Shot 1 to 4 and 6 : ";
u=getche();
u-=48;
if((u>6)||(u==0)||(u==5))
{
cout<<"\aInvalid Shot ! ";
continue;
}
c=random(5);
switch(c)
{
case 0 : c=1 ;break;
case 1 : c=2 ;break;
case 2 : c=3 ;break;
case 3 : c=4 ;break;
case 4 : c=6 ;break;
}
if(u!=c)
{
us+=u;
cout<<"\nYou score "<<u<<" Runs ";
}
else
{
cout<<"\n\nYou Are OUT \n\nYou Have "<<us<<" Runs ! ";
}

}while(u!=c);
getch();
if(flag==0)
{
flag=1;
bowl();
}
end :
}

void bowl()
{
textcolor(2);
clrscr();
randomize();
int u,c;
cout<<"\n\n\n\nUser Bowling !\n\n";
do
{
if(flag!=0)
{
if((us-cs)<0)
{
cout<<"\n\n\nComputer Wins !! ";
goto end;
}
cout<<"\n\nComputer Needs "<<(us-cs)+1<<" Runs To Win ! \n\n";
}
cout<<"\n\nEnter Style 1 to 4 and 6 : ";
u=getche();
u-=48;
if((u>6)||(u==0)||(u==5))
{
cout<<"\aInvalid Style ! ";
continue;
}
c=random(5);
switch(c)
{
case 0 : c=1 ;break;
case 1 : c=2 ;break;
case 2 : c=3 ;break;
case 3 : c=4 ;break;
case 4 : c=6 ;break;
}
if(u!=c)
{
//cout<<c<<" "<<cs;
cs+=c;
cout<<"\nComputer scores "<<c<<" Runs ";
}
else
{
cout<<"\n\nYou Have Bowled Out The Computer \n\nComputer Have "<<cs<<" Runs ! ";
}

}while(u!=c);
getch();
if(flag==0)
{
flag=1;
bat();
}
end:
}


    int z;

   void main()
  {
    int GD=DETECT,GM;
     us=cs=flag=0;



 initgraph(&GD,&GM," ");

 cleardevice();

 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(9 ,0 ,1);

 outtextxy(40,175,"-------------------------");
 outtextxy(40,215,"| - KB SPORTS PRESENTS ... - |");
 outtextxy(40,245,"-------------------------");
 delay(4000);
 cleardevice();
 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(10 ,0 ,1 );

 outtextxy(100,100," HAND CRICKET ");
 outtextxy(100,102," ____________" );
 outtextxy(100,300,"press ENTER to continue");
  getch();

 setbkcolor(WHITE);
 setcolor(BLACK);
 settextstyle(3,0,6);

do{
 int lev;
    cleardevice();
    setbkcolor(WHITE);
    setcolor(RED);

    outtextxy(40,100," 1. PLAY");
    outtextxy(40,150," 2. LEVEL");
    outtextxy(40,200," 3. INSTRUCTIONS");
    outtextxy(40,250," 4. EXIT");
     cin>>z;
    cleardevice();

  switch(z)
   {
     case 1:
	int sm;
	 cleardevice() ;
	  outtextxy(40,100,"1 ] MULTIPLAYER");
	  outtextxy(40,150,"2 ] SINGLE PLAYER ");
	 // outtextxy(40,200,"3 ] EXIT");
	  outtextxy(40,250,"Select Your Option :");
	  cin>>sm;
	  cleardevice();
	   switch(sm)
	   {
	   case 1:
	    struct cric
	    {
		int score;
		char name[25];
		}s[2];


		clrscr();
		randomize();
		int x,y;

		setbkcolor(BLACK);
		setcolor(RED);

		cout<<"\t\t\t=====MULTIPLAYER=====";
		delay(2000);
		clrscr();
		cout<<"ok let's begin \n";

		for(int i=0;i<2;i++)
		   {
		      cout<<"Enter player name\n";
		      gets(s[i].name);
		      int flag=0;
		      s[i].score=0;
		   do
		    {
		     int bowl=random(6)+1;
		     cout<<"\nEnter your number\n";
		    cout<<"\t\t\t\tCPU's number\n";
		  cin>>y;
		   cout<<"\t\t\t\t"<<bowl<<endl;

		 if((y!=bowl)&&(y<7))
		   {
		     s[i].score=s[i].score+y;
				     }
		else
		 if(y==bowl)
		   {
		      flag=1;
		      cout<<"\nYou got out!!\n";
		      cout<<"Your score "<<s[i].score<<endl;
		   }
		 else
		  if(y>6)
		   {
		     cout<<"\nINVALID entry you got out\n";
		     cout<<"Your score "<<s[i].score<<endl;
		     flag=1;
		   }
		 }while(flag==0);
		}

	   if(s[0].score>s[1].score)
	     {
	     cout<<s[0].name<<" wins\n";
	     cout<<s[0].name<<"'s score \n"
		 <<s[0].score<<endl;
	     cout<<s[1].name<<"'s score\n"
		 <<s[1].score<<endl;
	     }

	   else
	   {
	   cout<<s[1].name<<" wins\n";
	   cout<<s[1].name<<"'s score\n"
	       <<s[1].score<<endl;
	   cout<<s[0].name<<"'s score \n"
	       <<s[0].score<<endl;
	     }   getch();
		 break;

	case 2:
	     clrscr();
	      play();

	}break;



    case 2:
	cleardevice() ;
	setbkcolor(BLUE);
	setcolor(WHITE);
	outtextxy(50,100," 1.EASY");
	outtextxy(50,160," 2.MEDIUM");
	outtextxy(50,220," 3.HARD");

	cin>>lev;

	 switch(lev)
       {
	case 1:
	   l=1;
	      cleardevice() ;
		settextstyle(2,0,4);

		setbkcolor(BLUE);
		setcolor(WHITE);

		outtextxy(50,100,"YOUR SCORE IS ALWAYS INCREASED BY 10 RUNS");
		 getch();

		 break;





	  case 2:
	       l=2;
		cleardevice() ;
		setbkcolor(BLUE);
		setcolor(WHITE);
		settextstyle(2,0,4);

		outtextxy(50,100,"YOUR SCORE IS ALWAYS INCREASED BY 5 RUNS");
		 getch();

		 break;




	case 3:
	      l=3;
		 cleardevice() ;
		 setbkcolor(BLUE);
		 setcolor(WHITE);
		 settextstyle(3,0,4) ;

		 outtextxy(50,100,"YOUR SCORE REMAINS THE SAME");
		 getch();

		break;


	 }
	      break;



    case 3:
	    cleardevice() ;
	    settextstyle(3,0,2);

		 outtextxy(25,100,"When u press play, u will be given");
		 outtextxy(25,120,"single or multiplayer options.");
	      outtextxy(25,140,"There will be a toss at the starting.Toss");
		 outtextxy(25,160,"is based on odd and even");
	      outtextxy(25,180,"concept.The winner of the toss can decide");
		 outtextxy(25,200,"whether he should bat");
	      outtextxy(25,220,"or ball.U can choose no.s ranging from");
		 outtextxy(25,240,"1 to 6.If the no. put by the");
		 outtextxy(25,260,"batsman and bowler is same ,");
		 outtextxy(25,280,"then it is considered out.");
		getch();

		break;


    case 4:
	exit(0);
	   break;

    }
      } while(z!=4);
 getch();

  }
