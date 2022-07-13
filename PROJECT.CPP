 #include<iomanip>
 #include<graphics.h>
 #include<conio.h>
 #include<iostream>
 //#include<dos.h>
 #include<stdio.h>
 #include<stdlib.h>
 #include<ctype.h>
 #include<time.h>
 using namespace std;

 int l=1,counta=3,countb=2,countc=1;

 int z,us=0,cs=0,flag=0;
   void bat();
   void bowl();

   void play()
	    {

		start :


		setbkcolor(WHITE);
		setcolor(RED);
		//textcolor(3);

		system("cls");

		char yn,bl,toss,name[30];
		int random;
		 srand (time(NULL));
		cout<<"\n\n\t\tSingle Player.....\n\n\n\tTOSS\n\t~~~~"
		    <<"\n\nHead Or Tail \n\nEnter H / T : ";
		    //cin.ignore();

		     cin>>toss;
		    toss=toupper(toss);



		 if(toss!='H'&&toss!='T')
		   {
		    cout<<"\a\n\nEnter H Or T : ";
		    delay(1000);
		    goto start;
		     }

		 cout<<toss<<"\n\n It is TOSS time..... \n\n";
		int  i=1;
		//char ch;
		//cin>>ch;
		//int q=0;
       /*while(!kbhit())
        {
            cout<<"Hello";
            break;

        }*/
		while(i<=34)
        {
           //if(kbhit())

               //cin.get(ch);
          random=rand()%2;
		 //break;
         //random = getch();
		switch(random)
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


		 /*else
         {
            q=1;
		 }

        }*/

           int us=0,cs=0,flag=0;
		  redo :
		switch(random)
		{
		case 0 :
		   if(toss=='H')
		   {
		     cout<<"\nYou Won The Toss !!\n\n\n"
			 <<"Batting Or Bowling ? \n\nEnter B / L : ";
			cin>>bl;
		    bl=toupper(bl);

			  cout<<bl;

			if(bl=='B')
			{bat();
			}

			else
			if(bl=='L')
			   {

			    bowl();}

			else
			{
			 cout<<"\n\nPlease Enter Correct Option : ";
			 cout<<"/a";
			 delay(750);
			 //nosound();
			 toss='H';
			 goto redo;
				  }
			}

	     else
	      if(toss=='T')
	      {
	       cout<<"\n\nComputer Wins The Toss !! \n\n";
		switch(random)
		{
		   case 0 : {cout<<"\n\nComputer Chose To Bat ! ";
		    //getch();
		    bowl();
		     break;}

		   case 1 :
			{cout<<"\n\nComputer Chose To Bowl ! ";
			    //getch();
			    bat();
			    break;}

		 }
		   } break;

		 case 1 :


		      if(toss=='T')
			  {
		     cout<<"\nYou Won The Toss !!\n\n\n"
			 <<"Batting Or Bowling ? \n\nEnter B / L : ";
			    cin>>toss;
		    toss=toupper(toss);

			    cout<<toss;

			if(bl=='B')
			  bat();

		    else
			if(bl=='L')
			bowl();

		    else
			{
			 cout<<"\n\nPlease Enter Correct Option : ";
			 cout<<"\a";
			delay(750);
			//nosound();
			toss='H';
			goto redo;
			 }
			 }

		    else
			 if(toss=='H')
			{
			cout<<"\n\nComputer Wins The Toss !! \n\n";

	  switch(random)
	  {
		 case 0 :
			{

			 cout<<"\n\nComputer Choose To Bat ! ";
				//getch();
				bowl();
				break;}

		case 1 :
			 {cout<<"\n\nComputer Choose To Bowl ! ";
			      //getch();
			      bat();
			      break;}
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
		cin>>yn;
		    yn=toupper(yn);

		if(yn=='N')
		{
		  cout<<"\n\nThankYou For Playing This Game !!";
		delay(2000);
		 }

		else
		 goto start;

		 getch();
		   }

    void bat()
{   flag=0,us=0;
    cout<<"\n\n\n\nUser Batting !\n\n";
    delay(2000);
   if(l==1)
  {us=10;
   }
  else if(l==2)
  {us=5;
   }
  else
  { us=0;
  }
//textcolor(5);
system("cls");
 srand (time(NULL));

int u=0,c=0;
do
{

cout<<"\n\nEnter Shot 1 to 4 and 6 : ";
u=getche();
u-=48;

if((u>6)||(u==0)||(u==5))
{
cout<<"\aInvalid Shot ! ";
continue;
}
c=rand()%5;
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


//getch();
if(flag!=0)
{
if(us>cs)
{
cout<<"\n\n\nYou Win !!";
break;
}
cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
}
}while(u!=c);
if(flag==0)
{
flag=1;
bowl();
}

}

void bowl()
{
    cout<<"\n\n\n\nUser Bowling !\n\n";
  flag=0,cs=0;
//textcolor(2);

delay(4000);
system("cls");

 srand (time(NULL));
int u=0,c=0;


do
{

cout<<"\n\nEnter Style 1 to 4 and 6 : ";
u=getche();
u-=48;

if((u>6)||(u==0)||(u==5))
{
cout<<"\aInvalid Style ! ";
continue;
}
c=rand()%5;
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
if(flag!=0)
{
if((cs>us))
{
cout<<"\n\n\nComputer Wins !! ";
break;
}
cout<<"\n\nComputer Needs "<<(us-cs)+1<<" Runs To Win ! \n\n";
}
}while(u!=c);
//getch();

if(flag==0)
{
flag=1;
bat();
}

}




   int main()
  {
    int GD=DETECT,GM;
     us=cs=flag=0;



initgraph(&GD, &GM,(char*)"");

 cleardevice();

 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(9 ,0 ,1);

 outtextxy(150,175,(char*)"    ------------------------------");
 outtextxy(150,200,(char*)"    KA SPORTS PRESENTS");
 outtextxy(150,225,(char*)"    ------------------------------");
 delay(4000);
 cleardevice();
 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(10 ,0 ,1 );

 outtextxy(100,100,(char*)" HAND CRICKET ");
 outtextxy(100,115,(char*)" ____________" );
 outtextxy(100,300,(char*)"press ENTER to continue");
  getch();

 setbkcolor(WHITE);
 setcolor(BLACK);
 settextstyle(3,0,6);

do{
 int lev;

  st:
    cleardevice();
    setbkcolor(WHITE);
    setcolor(RED);


      settextstyle(3,0,6);

    outtextxy(40,100,(char*)" 1. PLAY");
    outtextxy(40,150,(char*)" 2. LEVEL");
    outtextxy(40,200,(char*)" 3. INSTRUCTIONS");
    outtextxy(40,250,(char*)" 4. EXIT");
    outtextxy(40,400,(char*)"Select Your Option :");
     cin>>z;
    cleardevice();

  switch(z)
   {
     case 1:
	int sm;

	 cleardevice() ;

	  outtextxy(40,100,(char*)"1 ] MULTIPLAYER");
	  outtextxy(40,150,(char*)"2 ] SINGLE PLAYER ");
	 // outtextxy(40,200,"3 ] EXIT");
	  outtextxy(40,250,(char*)"Select Your Option :");
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


		system("cls");
		 srand (time(NULL));
		int y;

		setbkcolor(BLACK);
		setcolor(RED);

		cout<<"\t\t\tMULTIPLAYER\n";
		cout<<"\t\t\t===========";
		delay(2000);
		system("cls");
		cout<<"Ok..Let us begin \n";
		int i;

		      s[0].score=0;
		      s[1].score=0;
		for(i=0;i<2;i++)

		   {
		             flag=0;
		             cin.ignore();
		      cout<<"\nEnter player name\n";

		      gets(s[i].name);

		   do
		    {
		     int bowl=rand()%6+1;
		     cout<<"\nEnter your number\n";
		    cout<<"\t\t\t\tCPU's number\n";
		  cin>>y;
		   cout<<"\t\t\t\t"<<bowl<<endl;

		 if((y!=bowl)&&(y<7))
		   { if(l==1)
		     {
		       s[i].score=s[i].score+y+10;
		     }
             else
             {
                 if(l==2)
             {
               s[i].score=s[i].score+y+5;
             }
             else
             {
                 s[i].score=s[i].score+y;
             }
             }
		     if(s[1].score>s[0].score)
             {

                break;
             }
		   }
		else
		 if(y==bowl)
		   {
		      flag=1;
		      cout<<"\nYou got out!!\n";
		      cout<<"Your score "<<s[i].score<<endl;
		   }

		 else
		  {if(y>6)
		   {


		     cout<<"\nINVALID entry you got out\n";
		     cout<<"Your score "<<s[i].score<<endl;
		     flag=1;
		   }
		   else{
            cout<<"Error";
		 }
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


            if(s[0].score==s[1].score)
       {
           cout<<"The match ends in a draw";

       }

	   else
	   {
	   cout<<s[1].name<<" wins\n";
	   cout<<s[1].name<<"'s score\n"
	       <<s[1].score<<endl;
	   cout<<s[0].name<<"'s score \n"
	       <<s[0].score<<endl;
	     }
       }
	     goto st;
		 break;

	case 2:
	     system("cls");
	      play();
	      goto st;
	      break;

	}
	 goto st;
	 break;



    case 2:
	cleardevice() ;
	setbkcolor(BLUE);
	setcolor(WHITE);
	outtextxy(50,100,(char*)" 1.EASY");
	outtextxy(50,160,(char*)" 2.MEDIUM");
	outtextxy(50,220,(char*)" 3.HARD");

	cin>>lev;

	 switch(lev)
       {
	case 1:
	   l=1;
	      cleardevice() ;
		settextstyle(3,0,3);

		setbkcolor(BLACK);
		setcolor(WHITE);

		outtextxy(50,100,(char*)"YOUR SCORE IS ALWAYS INCREASED BY 10 RUNS");
		 //getch();
		 		 delay(4000);

		 system("cls");
		 cleardevice() ;

		 goto st;
		 break;





	  case 2:
	       l=2;
		cleardevice() ;
		setbkcolor(BLACK);
		setcolor(WHITE);
		settextstyle(3,0,3);

		outtextxy(50,100,(char*)"YOUR SCORE IS ALWAYS INCREASED BY 5 RUNS");
		 //getch();
		 		 delay(4000);

		 system("cls");
		 cleardevice() ;

         goto st;
		 break;




	case 3:
	      l=3;
		 cleardevice() ;
		 setbkcolor(BLACK);
		 setcolor(WHITE);
		 settextstyle(3,0,3) ;

		 outtextxy(50,100,(char*)"YOUR SCORE REMAINS THE SAME");
		 //getch();
		 delay(4000);
		 system("cls");
		 cleardevice() ;
        goto st;
		break;
		//goto st;


	 }    goto st;
	      break;




    case 3:
	    cleardevice() ;
	    settextstyle(3,0,3);
		 outtextxy(150,50,(char*)"When you press play, you will be given");
		 outtextxy(150,80,(char*)"single or multiplayer options.");
	      outtextxy(150,110,(char*)"There will be a toss for the single player option.");
		 outtextxy(150,140,(char*)"Toss is based on HEAD and TAIL concept.");
	      outtextxy(150,170,(char*)"The winner of the toss can decide");
		 outtextxy(150,200,(char*)"whether he should bat or ball.");
		  outtextxy(150,230,(char*)"There are 3 levels , namely:");
		   outtextxy(150,260,(char*)"Easy - Score increased by 10 each time.");
		    outtextxy(150,290,(char*)"Medium - Score increased by 5 each time. ");
		     outtextxy(150,320,(char*)"Hard - Score is not incremented each time.");
	      outtextxy(150,350,(char*)"You can choose numbers ranging from 1 to 6.");
		 outtextxy(150,380,(char*)"If the number put by the batsman and bowler");
		 outtextxy(150,410,(char*)"is same,then it is considered out.");
		 //outtextxy(150,440,(char*)"");
		 delay(4000);
		//getch();
		system("cls");
		cleardevice() ;
		goto st;

		break;
		 //goto st;



    case 4:
	exit(0);
	   break;

    }
      } while(z!=4);
 getch();

  }
