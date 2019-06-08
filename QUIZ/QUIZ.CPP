#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>

class data
{
	int pnt;
	int qued;
public:char name[25];
       char pass[25];
	data()
	{
	pnt=0;
	qued=0;
	strcpy(name,NULL);
	strcpy(pass,NULL);
	}
	void spnt()
	{
	pnt=pnt+5;
	}
	void squed()
	{
	qued=qued+1;
	}
	int gpnt()
	{
	return pnt;
	}
	int gqued()
	{
	return qued;
	}
};

void main();
void signin();
void login();

void del(data d)
{
	char fname[25];
	strcpy(fname,d.name);
	strcat(fname,".dat");
	remove(fname);
}

void save(data d)
{
	char fname[25];
	strcpy(fname,d.name);
	strcat(fname,".dat");
	ofstream f(fname,ios::binary);
	f.write((char*)&d,sizeof(d));
	f.close();
    return;
}

int printque(int n)
{       ifstream f("q&a.txt");
	char q[250];
	char a[50];
	for(int i=0;i<(n-1)*5;i++)
	{
	f.getline(q,250);
	f.getline(a,50);
	}
	randomize();
	int z= random(5)+1;
	for(i=0;i<z;i++)
	{
	f.getline(q,250);
	f.getline(a,50);
	}
	char s[20];
	cout<<q<<endl;
	gets(s);
	if((strcmpi(s,a))==0)
	{
	cout<<"RIGHT ANSWER"<<endl;
	return 1;
	}
	else
	{
	cout<<"WRONG ANSWER"<<endl;
	return 0;
	}

}

void password(char s[25])
{
      int i=0;
      char c;
      while(c!=13)
      {repass:
       c=getch();
       if(c=='\b')
       {
       i--;
       cout<<'\b';
       goto repass;
       }
       if(c!=13)
       {
       s[i]=c;
       i++;
       }
       cout<<'*';
      }
s[i]=NULL;
return;
}

void alter(data d)
{       alter:
	clrscr();
	cout<<"                      ALTER MENU"<<endl;
	char s[25],p[25],c;
	cout<<"TO CHANGE BOTH NAME AND PASSWORD PRESS 1"<<endl;
	cout<<"TO CHANGE ONLY PASSWORD PRESS 2"<<endl;
	cout<<"TO RETURN TO LOGIN SCREEN PRESS 3"<<endl;
	realter:
	cin>>c;
	if(c==49)
	{
	cout<<"ENTER YOUR NEW NAME: ";
	gets(s);
	cout<<endl;
	cout<<"ENTER YOUR NEW PASSWORD: ";
	password(p);
	cout<<endl;
	char fname[25];
	strcpy(fname,s);
	strcat(fname,".dat");
	ofstream f(fname,ios::binary|ios::nocreate|ios::app);
	if(f.fail())
	{
	 f.clear();
	 f.close();
	 char q[25];
	 strcpy(q,d.name);
	 strcat(q,".dat");
	 ofstream f(fname,ios::binary);
	 strcpy(d.name,s);
	 strcpy(d.pass,p);
	 f.write((char*)&d,sizeof(d));
	 f.close();
	 remove(q
	 );
	 cout<<"DATA ALTERED PRESS ENTER TO RETURN"<<endl;
	 getch();
	}
	else
	{
	 cout<<"DATA WITH SAME NAME EXISTS"<<endl;
	 cout<<"PRESS ENTER TO TRY AGAIN"<<endl;
	 getch();
	 goto alter;
	}
	}
	else if(c==50)
	{
	  cout<<"ENTER YOUR NEW PASSWORD: ";
	  password(p);
	  cout<<endl;
	  strcpy(d.pass,p);
	  save(d);
	  cout<<"DATA ALTERED PRESS ENTER TO RETURN"<<endl;
	  getch();
	 }
	 else if(c==51)
	 login();
	 else
	 {
	 cout<<"ENTER A VALID CHOICE"<<endl;
	 goto realter;
	 }
}

void gameplay(data d)
{
	gameplay:
	clrscr();
	int n=d.gqued();
	int m=d.gpnt();
	if(n>=0&&n<20)
	{
	cout<<"QUIZ"<<endl;
	cout<<"NAME "<<d.name<<endl;
	cout<<"YOU HAVE ATTEMPTED "<<n<<" QUESTIONS TILL NOW"<<endl;
	cout<<"YOUR POINTS IS "<<m<<endl;
	cout<<"YOUR NEXT QUESTION IS "<<endl;
	if(printque(n+1)==1)
	d.spnt();
	d.squed();
	save(d);
	char s;
	cout<<"FOR NEXT QUESTION PRESS 1"<<endl;
	cout<<"TO RETURN TO MAIN MENU PRESS 2"<<endl;
	regain:
	cin>>s;
	cout<<endl;
	if(s==50)
	{
	main();
	}
	else if(s==49)
	{
	goto gameplay;
	}
	else
	{
	cout<<"ENTER A VALID CHOICE"<<endl;
	goto regain;
	}
	}
	else if(n==20)
	{
	cout<<"YOU HAVE COMPLETED QUIZ "<<endl<<"YOUR DATA IS DELETED YOU CAN SIGN IN AGAIN"<<endl;
	del(d);
	cout<<"PRESS A KEY TO RETURN TO MAIN MENU"<<endl;
	cout<<"THANK YOU"<<endl;
	getch();
	main();
	}
}

void signin()
{
	clrscr();
	cout<<"                      SIGN IN MENU"<<endl;
	data d;
	cout<<"ENTER YOUR NAME: ";
	gets(d.name);
	cout<<endl;
	cout<<"ENTER YOUR PASSWORD: ";
	password(d.pass);
	cout<<endl;
	char fname[25];
	strcpy(fname,d.name);
	strcat(fname,".dat");
	ofstream f(fname,ios::binary|ios::nocreate|ios::app);
	if(f.fail())
	{
	f.clear();
	f.close();
	ofstream f(fname,ios::binary);
	f.write((char*)&d,sizeof(d));
	f.close();
	cout<<"YOU HAVE BEEN SIGNED"<<endl;
	char s;
	cout<<"TO START QUIZ PRESS 1"<<endl;
	cout<<"TO RETURN TO MAIN MENU PRESS 2"<<endl;
	reknow:
	cin>>s;
	cout<<endl;
	if(s==49)
	gameplay(d);
	else if(s==50)
	main();
	else
	{
	cout<<"ENTER A VALID CHOICE"<<endl;
	goto reknow;
	}
	}
	else
	{
	f.clear();
	f.close();
	cout<<"DATA WITH SAME NAME ALREADY EXISTS"<<endl;
	cout<<"PRESS ENTER TO RETURN TO MAIN MENU"<<endl;
	getch();
	main();
	}
}

void login()
{
	login:
	clrscr();
	cout<<"                          LOG IN MENU"<<endl;
	data d;
	char s[25];
	char p[25];
	cout<<"PLEASE ENTER YOUR NAME: ";
	gets(s);
	cout<<endl;
	cout<<"ENTER YOUR PASSWORD: ";
	password(p);
	cout<<endl;
	strcat(s,".dat");
	ifstream f(s,ios::binary);
	if(!f.fail())
	{
	   f.read((char*)&d,sizeof(d));
	   f.close();
	   if((strcmpi(p,d.pass))==0)
	   {
	    cout<<"YOU HAVE BEEN LOGGED IN"<<endl;
	    char a;
	    cout<<"TO START QUIZ PRESS 1"<<endl;
	    cout<<"TO DELETE YOUR EXISTING ID PRESS 2"<<endl;
	    cout<<"TO ALTER YOUR EXISTING ID PRESS 3"<<endl;
	    cout<<"TO RETURN TO MAIN MENU PRESS 4"<<endl;
	    retime:
	    cin>>a;
	    cout<<endl;
	    if(a==49)
	    gameplay(d);
	    else if(a==50)
	    {
	    del(d);
	    goto login;
	    }
	    else if(a==51)
	    {
	    alter(d);
	    goto login;
	    }
	    else if(a==52)
	    main();
	    else
	    {
	    cout<<"ENTER A VALID CHOICE"<<endl;
	    goto retime;
	    }
	   }
	   else
	   {
	    cout<<"YOUR ENTERED PASSWORD IS WRONG"<<endl;
	    char b;
	    cout<<"TO GO TO MAIN MENU PRESS 1"<<endl;
	    cout<<"YOU CAN TRY RE LOGIN PRESS 2"<<endl;
	    rechance:
	    cin>>b;
	    cout<<endl;
	    if(b==50)
	    goto login;
	    else if(b==49)
	    main();
	    else
	    {
	     cout<<"ENTER A VALID CHOICE"<<endl;
	     goto rechance;
	    }
	   }
	}
	else
	{
	f.clear();
	f.close();
	cout<<"YOUR ID DOES NOT EXIST"<<endl;
	cout<<"PRESS ENTER TO RETURN TO MAIN MENU"<<endl;
	getch();
	main();
	}
}

void main()
{
main:
clrscr();
cout<<"                             QUIZ"<<endl;
cout<<"THIS IS A GAME OF QUIZ"<<endl;
cout<<"YOU FIRST NEED TO SIGN IN TO PLAY"<<endl;
cout<<"OR LOGIN AND CONTINUE YOUR EXISTIG GAME"<<endl;
cout<<"FOR LOG IN PRESS 1"<<endl<<"SIGN IN PRESS 2"<<endl;
cout<<"TO EXIT PRESS 3"<<endl;
int n;
cin>>n;
if(n==2)
  signin();
else if(n==1)
  login();
else if(n==3)
  exit(0);
else
{
cout<<"ENTER VALID CHOICE"<<endl;
goto main;
}
}