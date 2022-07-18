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

 int l=3;

 int z,us=0,cs=0;
   int cbat(int cs);
   int cbowl(int us);
   void bat();
   void bowl();

   void play()
	    {


		start :


		setbkcolor(WHITE);
		setcolor(RED);
		//textcolor(3);

		system("cls");

		char yn='\0',bl='\0',toss='\0';
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
		  {
          cout<<'\n';

		  }
		  delay(50);

		  i++;


         }


		 /*else
         {
            q=1;
		 }

        }*/



		switch(random)
		{
		case 0 :
		   if(toss=='H')
		   {
		     cout<<"\n\nYou Won The Toss !!\n\n\n";
        redo:
			 cout<<"Batting Or Bowling ? \n\nEnter B / L : ";
			cin>>bl;
		    bl=toupper(bl);

			  cout<<bl;

			if(bl=='B')
			{
			    bat();
			    break;

			}

			else
			if(bl=='L')
			   {
			       bowl();
			       break;
		       }

			else
			{
			    system("cls");
			    cout<<"\a";


			 cout<<"\nPlease Enter Correct Option\n\n";

			 //nosound();
			 //toss='H';
			 goto redo;
				  }
			}

	     else
	      //if(toss=='T')
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
		     cout<<"\n\nYou Won The Toss !!\n\n\n";
        goback:
			 cout<<"Batting Or Bowling ? \n\nEnter B / L : ";
			    cin>>bl;
		    bl=toupper(bl);

			    cout<<bl;

			if(bl=='B')
			  {
			      bat();
			      break;
              }

		    else
			if(bl=='L')
			{
			    bowl();
			    break;
			 }

		    else
			{
             system("cls");
              cout<<"\a";

			 cout<<"\nPlease Enter Correct Option\n\n";


			//nosound();
			//toss='H';
			goto goback;
			 }
			 }

		    else
			 //if(toss=='H')
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

		/*(if(us>cs)
		{
		cout<<"\n\n\t\t\t*** You Win !! ***";
			}

		else
		if(cs>us)
		  {
		  cout<<"\n\n\t\t\t***Computer Wins !! ***";
			 }*/

		if(us==cs)
		 {
		 cout<<"\a\n\n\t\t\t*** Match TIED !! ***";
		 delay(4000);
		 }
     askagain:
        system("cls");
		cout<<"\nDo You Want To Play Again ?"
		    <<" \n\nEnter Y / N : ";
		cin>>yn;
        yn=toupper(yn);

		if(yn=='N')
		{ system("cls");
		  cout<<"\n\n\t\t*** \aThank You For Playing This Game !! ***\n";
		delay(4000);
		system("cls");
		 }

        else
        if(yn!='Y'&&yn!='N')
        {
            system("cls");
              cout<<"\a";

			 cout<<"\nPlease Enter Correct Option\n\n";


			//nosound();
			//toss='H';
			goto askagain;

        }



		else
        {
         goto start;
        }

		 //getch();
		   }

void bat()
{   //flag=0;
    delay(2000);
    us=0,cs=0;
    system("cls");
    cout<<"\n\n\t\t\tUser Batting !";
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
//cout<<endl;


if(u==(-21))
{
cout<<"\a\nIInvalid Shot ! ";
continue;
}
else
    if((u>6)||(u<=0)||(u==5))
{
cout<<"\a\nInvalid Shot ! ";
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
cout<<"\n\nYou score "<<u<<" Runs ";
}
else
{
cout<<"\n\nYou Are OUT \n\nYou Have "<<us<<" Runs ! ";
//flag=1;
cout<<"\n\nComputer Needs "<<(us-cs)+1<<" Runs To Win ! \n\n";
cbowl(us);
}


//getch();
/*if(flag!=0)
{
if(us>cs)
{
cout<<"\n\n\nYou Win !!";
break;
}
else{
    cout<<"\n\nComputer Wins!!!!";
}
//cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
}*/
}while(u!=c);
/*if(flag==0)
{
flag=1;
bowl();
}*/

}


void bowl()
{
  delay(2000);
  system("cls");
  cout<<"\n\n\t\t\tUser Bowling !";
  us=0,cs=0;
//textcolor(2);

delay(2000);
system("cls");

 srand (time(NULL));
int u=0,c=0;


do
{
cout<<"\n\nEnter Style 1 to 4 and 6 : ";
u=getche();
u-=48;
//cout<<endl;


if(u==(-21))
{
cout<<"\a\nIInvalid Shot ! ";
continue;
}
else
    if((u>6)||(u<=0)||(u==5))
{
cout<<"\a\nInvalid Shot ! ";
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
cout<<"\n\nComputer scores "<<c<<" Runs ";
}
else
{
  //flag=1;
  cout<<"\n\nYou Have Bowled Out The Computer \n\nComputer Have "<<cs<<" Runs ! ";
  cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
  cbat(cs);
}
/*if(flag!=0)
{
if((cs>us))
{
cout<<"\n\n\nComputer Wins !! ";
break;
}
//cout<<"\n\nComputer Needs "<<(us-cs)+1<<" Runs To Win ! \n\n";
}*/
}while(u!=c);
//getch();

/*if(flag==0)
{
flag=1;
bat();
}*/

}

int cbat(int cs)
{  // flag=0;
    delay(2000);
    system("cls");
    cout<<"\n\n\t\t\tUser Batting !";
    delay(2000);
   /*if(l==1)
  {us=10;
   }
  else if(l==2)
  {us=5;
   }
  else
  { us=0;
  } */
//textcolor(5);
system("cls");
 srand (time(NULL));

int u=0,c=0;
do
{

cout<<"\n\nEnter Shot 1 to 4 and 6 :";
u=getche();
u-=48;
//cout<<endl;


if(u==(-21))
{
cout<<"\a\nIInvalid Shot ! ";
continue;
}
else
    if((u>6)||(u<=0)||(u==5))
{
cout<<"\a\nInvalid Shot ! ";
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
if(us>cs)
{
cout<<"\n\nYou score "<<u<<" Runs ";
cout<<"\n\nYour Total score : "<<us<<" Runs ! ";
cout<<"\a\n\n\t\t\t*** You Win !! ***";
delay(4000);
break;
}
cout<<"\nYou score "<<u<<" Runs ";
cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
}
else
{
cout<<"\n\nYou Are OUT \n\nYour Total score : "<<us<<" Runs ! ";
//flag=1;
cout<<"\a\n\n\t\t\t*** Computer Wins !! *** ";
delay(4000);

}


//getch();
/*if(flag!=0)
{
if(us>cs)
{
cout<<"\n\n\nYou Win !!";
break;
}
else{
    cout<<"\n\nComputer Wins!!!!";
}
cout<<"\n\nYou Need "<<(cs-us)+1<<" Runs To Win ! ";
}*/
}while(u!=c);
/*if(flag==0)
{
flag=1;
bowl();
}*/

return us,cs;

}



int cbowl(int us)
{
    delay(2000);
    system("cls");
    cout<<"\n\n\t\t\tUser Bowling !";
  //flag=0;
//textcolor(2);

delay(2000);
system("cls");

 srand (time(NULL));
int u=0,c=0;


do
{

cout<<"\n\nEnter Style 1 to 4 and 6 : ";
u=getche();
u-=48;
//cout<<endl;

if(u==(-21))
{
cout<<"\a\nIInvalid Shot ! ";
continue;
}
else
    if((u>6)||(u<=0)||(u==5))
{
cout<<"\a\nInvalid Shot ! ";
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
if((cs>us))
{
cout<<"\n\nComputer scores "<<c<<" Runs ";
cout<<"\n\nComputer Total score : "<<cs<<" Runs ! ";
cout<<"\a\n\n\t\t\t*** Computer Wins !! *** ";
delay(4000);
break;
}
cout<<"\nComputer scores "<<c<<" Runs ";
cout<<"\n\nComputer Needs "<<(us-cs)+1<<" Runs To Win ! \n\n";
}
else
{
  //flag=1;
  cout<<"\n\nYou Have Bowled Out The Computer \n\nComputer Total score : "<<cs<<" Runs ! ";
  //bat(cs);
  cout<<"\a\n\n\t\t\t*** You Win !! ***";
  delay(4000);
}
/*if(flag!=0)
{


}*/
}while(u!=c);
//getch();

/*if(flag==0)
{
flag=1;
bat();
}*/
return us ,cs;

}





 int main()
  {
    int GD=DETECT,GM;
     int flag=0;




 initgraph(&GD, &GM,(char*)"");

 cleardevice();

 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(9,0,3);

 outtextxy(100,175,(char*)"   ----------------------------------");
 outtextxy(100,200,(char*)"    KA SPORTS PRESENTS");
 outtextxy(100,225,(char*)"   ----------------------------------");
 delay(4000);
 cleardevice();
 setbkcolor(BLACK);
 setcolor(RED);
 settextstyle(10,0,6);

 outtextxy(90,100,(char*)" HAND CRICKET ");
 outtextxy(90,140,(char*)" ------------" );
 settextstyle(10,0,4);
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
                cout<<"\n\nTarget Reached";
                break;
             }
		   }
		else
		 if(y==bowl)
		   {
		      flag=1;
		      cout<<"\nYou got out!!\n";
		      cout<<"Your score : "<<s[i].score<<endl;
		      delay(3000);
		      system("cls");
		   }

		 else
		  {if(y>6)
		   {


		     cout<<"\nINVALID entry you got out\n";
		     cout<<"Your score : "<<s[i].score<<endl;
		     flag=1;
		     delay(4000);
		     system("cls");

		   }
		   else{
            cout<<"Error";
		 }
		  }
		 }while(flag==0);
		}

	   if(s[0].score>s[1].score)
	     {
         system("cls");
	     cout<<endl;
	     cout<<s[0].name<<" wins\n\n";
	     cout<<s[0].name<<"'s score : "
		 <<s[0].score<<endl;
	     cout<<s[1].name<<"'s score : "
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
       cout<<endl;
	   cout<<s[1].name<<" wins\n\n";
	   cout<<s[1].name<<"'s score : "
	       <<s[1].score<<endl;
	   cout<<s[0].name<<"'s score : "
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
    cleardevice() ;
    settextstyle(3,0,6);
    cout<<"\a";
    outtextxy(95,200,(char*)"*** Thank You ***");
    delay(4000);
	exit(0);
	   break;

    }
      } while(z!=4);
 getch();

  }
