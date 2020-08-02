#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
int a,b,c,f,g;
void life(char ch1)
{
int lf;
f++;
cout<<"\t\tPress 1 for Audience polls\n";
cout<<"\n\n\t\tPress 2 for Expert advice\n";
cout<<"\n\n\t\tPress 3 for Phone a friend\n";
do
{
cin>>lf;
switch(lf)
{
case 1:
if(a!=1)
{
cout<<"\n\nResults of Audience poll\n\n";
if(ch1=='A')
{
cout<<"A:75%\t\tB:15%";
cout<<"\nC:5%\t\tD:5%";
}
if(ch1=='B')
{
cout<<"A:15%\t\tB:75%";
cout<<"\nC:5%\t\tD:5%";
}
if(ch1=='C')
{
cout<<"A:5%\t\tB:15%";
cout<<"\nC:75%\t\tD:5%";
}
if(ch1=='D')
{
cout<<"A:5%\t\tB:15%";
cout<<"\nC:5%\t\tD:75%";
}
g++;
a=1;
}
else
{
cout<<"\nYou have already used audience polls\n";
}
break;
case 2:
if(b!=1)
{
cout<<"\nExpert:Debabrata and Sourav\n";
cout<<"\n\nAccording to experts the answer must be:"<<ch1;
g++;
b=1;
}
else
cout<<"\nYou have already asked our experts\n";
break;
case 3:
if(c!=1)
{
cout<<"Calling your Friend....\n";
sleep(4);
cout<<"According to  your friend the answer must be"<<ch1;
g++;
c=1;
}
else
cout<<"\n\nYou have already used phone a friend\n";
break;
}
if(f!=g)
{
cout<<"\n\nEnter choice for lifeline\n";
}
else
break;
}while(1);
}
void main()
{
textcolor(YELLOW);
clrscr();

int flag=0;
char name[100],add[50],age[20],ch,choice;
a=0;b=0;c=0;f=0;g=0;
randomize();
int rndm;
cout<<"\n\n\n\n\n\t    KAUN BANEGA CROREPATI'$'";
cout<<"\n             ____________________\n\n\n\n";
cout<<"\tGUIDED BY:MR.KISHAN SHARMA\n\n";
cout<<"\t\t               DEBABRATA PANDA\n";
cout<<"\t\t               SOURAV MAHAPATRA\n";
cout<<"\t\t               LALKISHORE TANTY\n";
cout<<"\t\t               RITIK PATEL\n";
cout<<"\t\t               HITESH NAIK\n";
cout<<"\t\t               BAIDHAR HEMBRAM\n";
cout<<"\t\t               ASHISH KHANDAYATRAY\n";
textcolor(GREEN);
getch();
clrscr();
cout<<"\n\n\n\n\n\t\t\tinstructions:-";
cout<<"\n\n\n\t1.There will be a total of 13 questions.";
cout<<"\n\t2.Each question will have 4 option.";
cout<<"\n\t3.To answer,enter your choice(either A,B,C orD";
cout<<"\n\t4.Enter '@' as your choice,to get access to lifeline.";
cout<<"\n\t5.As soons as you give a wrong answer the game will terminate.";
cout<<"\n\t6.Use block letters to enter data.";
cout<<"\n\t7.You can use a lifeline only once.";
cout<<"\n\t8.If you want to quit the game enter 'Q' as your choice.";
textcolor(MAGENTA);
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\tEnter your name:";
cin>>name;
cout<<"\n\tEnter your address:";
cin>>add;
cout<<"\n\tEnter your age:";
cin>>age;
cout<<"\n\n\t******WELCOME TO OUR SHOW******";
textcolor(WHITE);
getch();
clrscr();
if(name!='\0')
{
rndm=random(2);
cout<<rndm;
switch(rndm)
{
case 0:
cout<<"\n\nYOUR FIRST QUESTION FOR Rs.5,000 IS:";
cout<<"\n\n1.Golf player vijay singh belongs to which country?";
cout<<"\nA.USA             B.Fiji";
cout<<"\nC.India           D.UK";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nThank you for coming\n";
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('B');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nThank you for coming\n";
exit(0);
}
if(ch=='B')
{
cout<<"\n\nCongrats you have won Rs.5,000";
cout<<"\n\nYour next question for Rs.10,000";
cout<<"\n\n2.When did World War 2 began?";
cout<<"\nA.1939             B.1938";
cout<<"\nC.1947             D.2019";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.10,000";
cout<<"\n\nYour next question for Rs.20,000";
cout<<"\n\n3.Who won the first FIFA world cup?";
cout<<"\nA.Brazil             B.Uruguay";
cout<<"\nC.England            D.West Germany";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('B');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='B')
{
cout<<"\n\nCongrats you have won Rs.20,000";
cout<<"\n\nYour next question for Rs.40,000";
cout<<"\n\n4.Film and TV institute of India is located at?";
cout<<"\nA.Pune             B.Mirzapur";
cout<<"\nC.Rourkela         D:Jajpur";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.20000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.20000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.40,000";
cout<<"\n\nYour next question for Rs.80,000";
cout<<"\n\n5.Which of these is not a capital city?";
cout<<"\nA.New Delhi             B.Sydney";
cout<<"\nC.Wellington            D:Moscow";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.40000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('B');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.40000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='B')
{
cout<<"\n\nCongrats you have won Rs.80,000";
cout<<"\n\nYour next question for Rs.1,60,000";
cout<<"\n\n6.Fathometer is used to measure?";
cout<<"\nA.Earthquake             B.Rainfall";
cout<<"\nC.Ocean Depth            D.Sound Intensity";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.80000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.80000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.1,60,000";
cout<<"\n\nYour next question for Rs.3,20,000";
cout<<"\n\n7.Who invented ball point pen?";
cout<<"\nA.Biro Bros.             B.Warner Bros.";
cout<<"\nC.Bic Bros.              D.Write Bros";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.160000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.160000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.3,20,000";
cout<<"\n\nYour next question for Rs.6,40,000";
cout<<"\n\n8.The Indian delegation to the first World Conference on Human Rights was led by?";
cout<<"\nA.Dr.Manmohan Singh             B.Farooq Abdulllah";
cout<<"\nC.Dinesh Singh                  D.Jawaharlal Nehru";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.320000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.320000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.6,40,000";
cout<<"\n\nYour next question for Rs.12,50,000";
cout<<"\n\n9.Which movie has been choosen as indian's official entry to oscars 2019?" ;
cout<<"\nA.Raees                                 B.Tubelight";
cout<<"\nC.Village Rockstars               D.Hindi Medium";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.640000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.640000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.12,50,000";
cout<<"\n\nYour next question for Rs.25,00,000";
cout<<"\n\n10.The first Indian to swim across English channel was?";
cout<<"\nA.V.Merchant             B.P.K.Banerji";
cout<<"\nC.Mihir sen                 D.Arati saha";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.1250000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{

cout<<"\nYou have won Rs.1250000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.25,00,000";
cout<<"\n\nYour next question for Rs.50,00,000";
cout<<"\n\n11.The new defination of kilogram will be replaced by?";
cout<<"\nA.Plant constant             B.Boltzmann constant";
cout<<"\nC.Farady constant          D.Stefan-Boltzmann constant";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.2500000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.2500000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.50,00,000";
cout<<"\n\nYour next question for Rs.1,00,00,000";
cout<<"\n\n12.To conquer and annex Peshwar and Punjab,Mahmud of Ghazni defeated?";
cout<<"\nA.Ghurids                B.Arabs";
cout<<"\nC.Karkotakas          D.Hindushahis";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('D');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{

cout<<"\nYou have won Rs.5000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='D')
{
cout<<"\n\nCongrats you have won Rs.1,00,00,000";
cout<<"\n\nYour next question for Rs.5,00,00,000";
cout<<"\n\n13.Which organ of the United Nation has created to be operational?";
cout<<"\nA.Economic and social council             B.International court of Justice";
cout<<"\nC.Trusteeship council                           D.Secretariat";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.1,00,00,000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\n\nCONGRATULATIONS!!!!!!!!!!!!!!!!!!!!\n\nAAP HAI HUMARE PEHLE CROREPATI\n\nAAP JEET TE HAIN Rs.5,00,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\n*****WRONG ANSWER*****\n\nCONGRATULATIONS!!!YOU WIN Rs.1,00,00,000.WELL PLAYED!!!\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.50,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOUWIN Rs.25,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.12,50,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.6,40,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.3,20,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.1,60,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.80,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.40,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.20,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.10,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.5,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nTHANK YOU FOR COMING";
break;
case 1:
cout<<"\n\nYOUR FIRST QUESTION FOR Rs.5,000 IS:";
cout<<"\n\n1.Which of the following is a solo dance?";
cout<<"\nA.Othan Thulla             B.Kuchi Pudi";
cout<<"\nC.Odissi                   D.Yakshagana";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nThank you for coming\n";
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nThank you for coming\n";
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.5,000";
cout<<"\n\nYour next question for Rs.10,000";
cout<<"\n\n2.The Radcliffe line is a boundary between__?";
cout<<"\nA.India & Pakistan             B.India & China";
cout<<"\nC.India & Myanmar              D.India & Afghanistan";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.10,000";
cout<<"\n\nYour next question for Rs.20,000";
cout<<"\n\n3.Which state has the largest area of forest cover?";
cout<<"\nA.Arunachal Pradesh             B.Haryana";
cout<<"\nC.Madhya Pradesh                D.Assam";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.20,000";
cout<<"\n\nYour next question for Rs.40,000";
cout<<"\n\n4.Who was the first man to beat The Undertaker in Wrestle Mania?";
cout<<"\nA.Brock Lesnar             B.Triple H";
cout<<"\nC.Roman Reigns             D:Stone Cold Steve Austin";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.20000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.20000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.40,000";
cout<<"\n\nYour next question for Rs.80,000";
cout<<"\n\n5.Which of these is not a capital city?";
cout<<"\nA.New Delhi             B.Rio de Janiero";
cout<<"\nC.Wellington            D:Moscow";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.40000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('B');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.40000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='B')
{
cout<<"\n\nCongrats you have won Rs.80,000";
cout<<"\n\nYour next question for Rs.1,60,000";
cout<<"\n\n6.Which continent has no deserts?";
cout<<"\nA.Asia              B.Australia";
cout<<"\nC.Europe            D.North America";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.80000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.80000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.1,60,000";
cout<<"\n\nYour next question for Rs.3,20,000";
cout<<"\n\n7.Who invented smallpox vaccine?";
cout<<"\nA.Edward Jenner             B:Robert Hooke";
cout<<"\nC.John Newman               D.David van der Klaseen";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.160000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.160000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.3,20,000";
cout<<"\n\nYour next question for Rs.6,40,000?";
cout<<"\n\nHeadquaters of World Health Organisation is located in?";
cout<<"\nA.Geneva                         B.Istanbul";
cout<<"\nC.San Francisco                  D.St. Petersburg";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.320000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.320000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.6,40,000";
cout<<"\n\nYour next question for Rs.12,50,000";
cout<<"\n\n9.Pongal is a popular festival of which state?" ;
cout<<"\nA.Rajasthan                B.Kerala";
cout<<"\nC.Tamil Nadu               D.Himachal Pradesh";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.640000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.640000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.12,50,000";
cout<<"\n\nYour next question for Rs.25,00,000";
cout<<"\n\n10.who was the first Black South African batsman to score a century at Newlands  Cape Town?";
cout<<"\nA.Vernon Philander             B.Chris Gayle";
cout<<"\nC.Temba Bavuma                 D.Andile Phehlukwayo";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.1250000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{

cout<<"\nYou have won Rs.1250000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\nCongrats you have won Rs.25,00,000";
cout<<"\n\nYour next question for Rs.50,00,000";
cout<<"\n\n11.What is the capital city of Uzbekistan?";
cout<<"\nA.Tashkent            B.Baku";
cout<<"\nC.Bishek              D.Ashkabad";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.2500000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('A');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.2500000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='A')
{
cout<<"\n\nCongrats you have won Rs.50,00,000";
cout<<"\n\nYour next question for Rs.1,00,00,000";
cout<<"\n\n12.Who was the First President of USA ?";
cout<<"\nA.John F. Kennedy                B.Abraham Lincoln";
cout<<"\nC.Benjamin Franklin              D.George Washington";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.5000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('D');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{

cout<<"\nYou have won Rs.5000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='D')
{
cout<<"\n\nCongrats you have won Rs.1,00,00,000";
cout<<"\n\nYour next question for Rs.5,00,00,000";
cout<<"\n\n13.Which Greek hero killed Trojan Prince Hector in a single combat?";
cout<<"\nA.Odysseus                       B.Magmamemon";
cout<<"\nC.Achillies                      D.Hercules";
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch=='Q')
{
cout<<"\nYou have won Rs.1,00,00,000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='@')
{
do
{
if(flag!=3)
{
life('C');
flag++;
cout<<"\n\nDo you want to use another lifeline\n";
cout<<"Press Y/y for yes\n";
cin>>choice;
}
else
break;
}while(choice=='Y'||choice=='y');
}
if(flag==3)
{
cout<<"\nYou have already used all three lifelines\n";
}
if(ch=='@')
{
cout<<"\n\nEnter your choice";
cin>>ch;
}
getch();
if(ch=='Q')
{
cout<<"\nYou have won Rs.10000000\n";
cout<<"\nThank you for coming\n";
getch();
exit(0);
}
if(ch=='C')
{
cout<<"\n\n\nCONGRATULATIONS!!!!!!!!!!!!!!!!!!!!\n\nAAP HAI HUMARE PEHLE CROREPATI\n\nAAP JEET TE HAIN Rs.5,00,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\n*****WRONG ANSWER*****\n\nCONGRATULATIONS!!!YOU WIN Rs.1,00,00,000.WELL PLAYED!!!\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.50,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOUWIN Rs.25,00,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.12,50,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.6,40,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.3,20,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.1,60,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.80,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.40,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.20,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.10,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nCONGRATULATION!!!YOU WIN Rs.5,000\n\nTHANK YOU FOR COMING";
}
else
cout<<"\n\nWRONG ANSWER\n\nGAME OVER\n\nTHANK YOU FOR COMING";
break;
}
getch();
}
}



