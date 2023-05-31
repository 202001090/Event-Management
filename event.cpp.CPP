#include<iostream.h>
#include<ctype.h>
#include<process.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>

void main();
void menu1();
void wedding();
void aniversary();
void birthday();
void a_menu();
void u_menu();
void password();
void sixteen();
void thank();
void thanku();
void comp();
void man();
void sugg();
void birth();
void six();
void wed();
void ann();
void comp1();
void main1();
void mainscreen();
void pass();

struct Addr
{  int houseno;
   char area[20];
    char city[20];
}address;

struct Us
{ char name[26];
   char name1[26];
   char name2[26];
   char event[20];
    int age[20];
   char date[29];
}user;

struct Feed
{  char cause[20];
    char date[20];
}complaint;

void main()
{
	int count=0;
	clrscr();
	cout<<"\t\t\t\n\n\n\n\n\n WELCOME....... ";
	char us[]={"success"},user[10];
	char pass[10],ch,p[10]={"liesinu"};
	int k=0;
	cout<<"\n\n\n\n\t\t Enter Username: ";
	cin.getline(user,10);
	cout<<"\n\n\t\t Enter Passcode: ";
	while((ch=getch())!=13)
{
	pass[k]=ch;
	k++;
	cout<<"*";
}
	pass[k]='\0';
	if(strcmp(user,us)==0)
{
	if(strcmp(p,pass)==0)
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t Loading";
	cout<<".";
	delay(500);
	cout<<"......";
	delay(500);
	cout<<".";
	count=3;
	main1();}
}
	else
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n INCORRECT PASSCODE OR USERNAME";
	delay(100);
	delay(100);
	count++;
}
}

void main1()
{
	int a,i,n,y;
	char c,d;
	char date1[15],date2[15],string1[20];
	int phoneno[20];
	unsigned int tsz;

	clrscr();
	mainscreen();
	label3:
	textcolor(3);
	cout<<endl<<endl;
	cprintf("Enter today's Date(yyyy/mm/dd)");
	fflush(stdin);cout<<endl;
	scanf("%[^\n]",date2);
	if((date2[4]!='/')||(date2[7]!='/')||(date2[5]>'3')||(date2[8]>'3'))
	cout<<endl;
	cout<<"\n\n\n\n\n             Enter your name: ";
	cin>>user.name;
	cout<<"\n\n                  Enter your phone number ";
	cin>>phoneno[20];
	cout<<"                       \n\nEnter address"<<"\n";
	cout<<"                      \nHouse number: ";
	cin>>address.houseno;
	cout<<"                       \nArea: ";
	cin>>address.area;
	cout<<"                       \nCity: ";
	cin>>address.city;
	getch();
	menu1();
}




void menu1()
{
	clrscr();
	int choice;
	textcolor(255);
	cprintf("                               \n\n\n     YOURS TRULY \n\n");cout<<endl;
	textcolor(2);
	cprintf("                        ------------------------------------         ");cout<<endl;
	textcolor(19);
	cprintf("\n\n                                ------");
	textcolor(9);
	cprintf("MENU");
	textcolor(12);
	cprintf(" -----");cout<<endl<<endl;
	cout<<"\t\t1"<<setw(10)<<" Book an event\n\n";
	cout<<"\t\t2"<<setw(10)<<" Give Feedbacks\n\n";
	cout<<"\t\t3"<<setw(10)<<" Exit\n\n";
	cout<<"\tEnter your choice\t";
	cin>>choice;
	switch(choice)
{
	case 3: cout<<"\n\n\t\t\t\t-----THANK YOU-----\n";
			getch();
			exit (0);
			break;
	case 1: u_menu();
			break;
	case 2: password();
			break;
}
}
void password()
{
	clrscr();
	int k=0,i=0;
	char ch[15],ch1;
	do
{	cout<<"\n\n\t\tEnter Your Admin Password\n";
	cout<<"\t\t";
	while((ch1=getch())!=13)
{	ch[i]=ch1;
		i++;
		cout<<"*";
}
		ch[i]='\0';
		if(strcmp(ch,"black")==0)
{	 cout<<"\n\n\t\tAdmin Authenticated";
		getch();
		a_menu();
		break;
}
		else
{	cout<<"\n\t\tAccess denied.Try Again \n";
		k++;
}
}
	while(k<3);
	if(k==3)
{
	cout<<"\n\tMaximum Password Attempts Reached.Returning to MAIN MENU ";
	getch();
	menu1();
}
	return ;
}
void u_menu()
{
	clrscr();
	int choice2;
	cout<<"\n\n\n\t\t\t\tBook an Event\n\n\n";
	cout<<setw(20)<<" "<<"--------------------------------------\n";
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	cout<<setw(26)<<"1."<<"Destination Wedding\n\n";
	cout<<setw(26)<<"2."<<"Memorable Anniversary\n\n";
	cout<<setw(26)<<"3."<<"Sweet Sixteen\n\n";
	cout<<setw(26)<<"4."<<"Bombastic Birthday\n\n";
	cout<<setw(26)<<"5."<<"Go back \n\n";
	cout<<setw(24)<<" "<<"\n\nEnter your choice ";
	cin>>choice2;
	switch(choice2)
{
		case 1: wedding();
			break;
		case 2: aniversary();
			break;
		case 3: sixteen();
			break;
		case 4:birthday();
			break;
		case 5:menu1();
			break;
		deafult:cout<<setw(24)<<" "<<"Wrong choice.Returning to Main Menu \n";
			getch();
			menu1();
}
}
void a_menu()
{	clrscr();
	int choice2;
	cout<<"\n\n\n\t\t\t\tFEEDBACKS \n\n\n";
	cout<<setw(20)<<" "<<"--------------------------------------\n";
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	cout<<setw(26)<<"1."<<"Register a complaint\n\n";
	cout<<setw(26)<<"2."<<"Talk to the manager\n\n";
	cout<<setw(26)<<"3."<<"Give suggestions\n\n";
	cout<<setw(26)<<"4."<<"Go Back \n\n";
	cout<<setw(24)<<" "<<"Enter your choice \t";
	cin>>choice2;
	switch(choice2)
{
		case 1: comp();
			break;
		case 2: man();
			break;
		case 3: sugg();
			break;
		case 4: menu1();
			break;
		deafult:cout<<setw(24)<<" "<<"Wrong choice.Returning to main menu \n";
			getch();
			menu1();
}
}
void birthday()
{
	clrscr();
	int age;
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	cout<<setw(24)<<" "<<"\n\n\n\n\n enter birthday date: ";
	cin>>user.date;
	cout<<setw(24)<<" "<<"\n Enter current age. :";
	cin>>age;
	cout<<setw(24)<<" "<<"\n Enter name of birthday fella: ";
	cin>>user.name;
	getch();
	birth();
}




void sixteen()
{
	 clrscr();
	 char colo3[20];
	 cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	 cout<<setw(24)<<"SWEET SIXTEEN"<<endl<<endl;
	 cout<<setw(24)<<" "<<"Name of the birthday fella "<<endl;
	 cin>>user.name;
	 cout<<setw(24)<<" "<<"Date"<<endl;
	 cin>>user.date;
	 cout<<setw(24)<<"Favourite color: ";
	 cin>>colo3[20];
	 getch();
	 six();

}


void wedding()
{
	clrscr();
	char loc1[20],place1[20];
	int dt1;
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
cout<<setw(24)<<"DESTINATION WEDDING"<<endl<<endl;
		  cout<<"\n\n\nName of The Person Registering: "<<endl<<endl;
		 cin>>user.name;
	cout<<"\n\n\nYour dream location: "<<endl<<endl;
		cin>>loc1;
	cout<<"\n\n\nOutdoor or Indoor: "<<endl<<endl;
	cin>>place1;
	cout<<"\n\n\nThe decided date: ";
	cin>>dt1;
		getch();
		wed();
}


void aniversary()
{
	clrscr();
	char col2[20],place2[20];
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	cout<<setw(24)<<"          MEMORABLE ANIVERSARY"<<endl<<endl;
	cout<<"\nName of Husband: "<<endl<<endl;
	cin>>user.name1;
	cout<<"\nName of Wife: "<<endl<<endl;
	cin>>user.name2;
	cout<<"\nYour favourite colour: "<<endl<<endl;
		cin>>col2;
	cout<<"\nOutdoor or Indoor: "<<endl<<endl;
	cin>>place2;
	cout<<"\nDate of Marriage :"<<endl<<endl;
	cin>>user.date;
	getch();
	ann();
}

void comp()
{
	clrscr();
	cout<<setw(20)<<" "<<"--------------------------------------\n\n";
	cout<<"\n\n\n\We regret to know that you have a complaint to register and hence we apologise for our 	misconvenience of any sort caused to you or any of your loved ones.";
	cout<<endl<<endl;
	textcolor(13);
	cprintf("Please register your complaint so we could take swift and necessary actions." );
	cout<<"\n\nName of the person registering:";
	cin>>user.name;
	cout<<"\n\nCause of inconvenience(in one word):";
	cin>>complaint.cause;
	cout<<"\n\nDate when your event was being organised:";
	cin>>complaint.date;
	comp1();
}

void man()
{
	clrscr();
	char name[20];
	int dt;
	cout<<"\n\n\n\We regret to know that you have a complaint to register and hence we apologise for our 	misconvenience of any sort caused to you or any of your loved ones.";
	cout<<endl<<endl;
	textcolor(13);
	cprintf("Our manager would be very obliged to talk with you.\n\n\n\nPlease contact 98653XXXXX" );
	cout<<"\n\n\n\nName of the person registering:";
	cin>>user.name;
	cout<<"\n\nDate when your event was being organised:";
	cin>>complaint.date;
	cout<<"\n\n\nWe will try to sort this mistake as soon as we can because...";
	delay(500);
	textcolor(19);
		cprintf("\n\n\n\nSpeak when you are angry and you will make the best speech you will ever regret.");
	getch();
	thanku();
}

void sugg()
{
	clrscr();
	char sugg[20],name[20];
	 int dt;
	 cout<<"\n\n\n\We are obliged to know that you have a suggestion to register and hence we make sure that your 	suggestions would be taken care of.";
	cout<<endl<<endl;
	textcolor(13);
	cprintf("Please enter your suggestions: " );
	cin>>complaint.cause;
	cout<<"\n\n\n\nName of the person registering:";
	cin>>user.name;
	cout<<"\n\nDate when your event was being organised:";
	cin>>user.date;
	cout<<"\n\n\nWe will try to follow your suggestions as soon as we can because...";
	delay(500);
	textcolor(19);
		cprintf("\n\n\n\nAt any given moment you have the power to say this is not how the story is giong to 	end.");
	getch();
	thank();
}

void birth()
{
	float budg[20],no3[20],spe;
	int choice;
	clrscr();
	textcolor(14);
		cout<<endl<<endl;
	cprintf("              Life should not only be lived, it shoud be celebrated...");cout<<endl<<endl;
	 cout<<"enter your budget:";cout<<endl<<endl;
	 cin>>budg[20];
	 cout<<"no. of people expected in your mega event:";cout<<endl<<endl;
	 cin>>no3[20];
	 cout<<"select one of our options:\n(1)executive(500/person)\n(2)supreme(1000/person)\n(3)super(2000/person)";cout<<endl<<endl;
	 cin>>choice;
	 switch(choice)
	 {case 1: spe=500*no3[20];
		       cout<<"your estimated amount spend will be "<<spe;
break;
		   case 2: spe=1000*no3[20];
			       cout<<"your estimated amount spend will be "<<spe;
break;
		  case 3: spe=2000*no3[20];
			    cout<<"your estimated amount spend will be "<<spe;
break;
		    }
	getch();
	thank();
}


void six()
{
	int budg[20],no3[20],choice,spe;
	 clrscr();
	 textcolor(14);
		cout<<endl<<endl;
	 cprintf("               The old believe everything; the middle-aged suspect everything; the young know 	everything....");cout<<endl<<endl;
	 cout<<"enter your budget:";cout<<endl<<endl;
	 cin>>budg[20];
	 cout<<"no. of people expected in your mega event:";cout<<endl<<endl;
	 cin>>no3[20];
	 cout<<"select one of our options:\n(1)executive(500/person)\n(2)supreme(1000/person)\n(3)super(2000/person)";cout<<endl<<endl;
	 cin>>choice;
	 switch(choice)
	 {case 1: spe=500*no3[20];
		       cout<<"your estimated amount spend will be "<<spe;
break;
		   case 2: spe=1000*no3[20];
			       cout<<"your estimated amount spend will be "<<spe;
break;
		  case 3: spe=2000*no3[20];
			    cout<<"your estimated amount spend will be "<<spe;
break;
		    }
	getch();
	thank();
}



void wed()
{
	float budg[20],no3[20];
	int choice,spe;
	 clrscr();
	 textcolor(14);
		cout<<endl<<endl;
	 cprintf("               A perfect marriage is just two imperfect people who refuse to give up on each other.....");cout<<endl<<endl;
	 cout<<"enter your budget:";cout<<endl<<endl;
	 cin>>budg[20];
	 cout<<"no. of people expected in your mega event:";cout<<endl<<endl;
	 cin>>no3[20];
	 cout<<"select one of our options:\n(1)executive(500/person)\n(2)supreme(1000/person)\n(3)super(2000/person)";cout<<endl<<endl;
	 cin>>choice;
	 switch(choice)
	 {case 1: spe=500*no3[20];
		       cout<<"your estimated amount spend will be "<<spe;
break;
		   case 2: spe=1000*no3[20];
			       cout<<"your estimated amount spend will be "<<spe;
break;
		  case 3: spe=2000*no3[20];
			    cout<<"your estimated amount spend will be "<<spe;
break;
		    }
	getch();
	thank();
}




void ann()
{        float budg[20],no3[20],spe;
	 int choice;
	 clrscr();
	 textcolor(14);
		cout<<endl<<endl;
	 cprintf("               Celebrating what was once a fairytale night.....");cout<<endl;
	 cout<<"enter your budget:";
	 cin>>budg[20];
	 cout<<endl;
	 cout<<"no. of people expected in your mega event:";
	 cin>>no3[20];
	 cout<<endl;
	 cout<<"select one of our options:\n(1)executive(500/person)\n(2)supreme(1000/person)\n(3)super(2000/person)";
	 cout<<endl;
	 cin>>choice;
	 switch(choice)
	 {case 1: spe=500*no3[20];
		       cout<<"your estimated amount spend will be "<<spe;
break;
		   case 2: spe=1000*no3[20];
			       cout<<"your estimated amount spend will be "<<spe;
break;
		  case 3: spe=2000*no3[20];
			    cout<<"your estimated amount spend will be "<<spe;
break;
		    }

	getch();
	thank();
 }

void thank()
{
	clrscr();
	textcolor(12);
	cprintf("\n\n\n\n\n\nYou could have chosen anyone in this world but you chose us...");
	cout<<endl<<endl;
	textcolor(18);
	cprintf("THANKYOU");
	getch();
}

void thanku()
{
	clrscr();
	delay(1000);
	textcolor(13);
	cprintf("\n\n\n\n\n\n\n Sorry for the misconvenience...            We will take care next time...");
	cout<<endl<<endl;
	textcolor(255);
	cprintf("                                     THANKYOU");
	getch();
}

void comp1()
{	clrscr();
	cout<<"\n\n\nWe will try to sort this mistake as soon as we can because...";
	delay(900);
	textcolor(19);
		cprintf("\n\n\n\nIt is not a mistake to make a mistake but it is a mistake to repeat the mistake...");
	getch();
	thanku();
}

void mainscreen()
{

	cout<<endl<<endl;
	gotoxy(30,4);textcolor(3);
	cprintf("YOURS TRULY");
	gotoxy(27,6);textcolor(6);
	cprintf("Welcomes You...");


}



