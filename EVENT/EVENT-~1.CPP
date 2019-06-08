#include<fstream>
#include<conio.h>
#include<string>
#include<stdio.h>
#include<process.h>
using namespace std;

struct event
 {
  int d;
  int m;
  int y;
  char info[300];
  event()
  {
   d=m=y=0;
   strcpy(info,"NO EVENT");
  }
 }q,ue;

class person
{
 char name[30];
 event E[30];
 int noe;
 public:
 person()
 {
  noe=0;
 }
 char id[50];
 char pass[30];
 char* retname()
 {return name;
 }
 event retevent(int d,int m,int y)
 {
  for(int i=0;i<noe;i++)
  {
  if(E[i].d==d && E[i].m==m && E[i].y==y)
  return E[i];
  }
  return q;
 }
 void getname(char a[30])
 { strcpy(name,a);
 }
 void getevent(event e)
 {for(int k=0;k<noe;k++)
  {
   if(e.d==E[k].d && e.m==E[k].m && e.y==E[k].y)
   {
    strcat(E[k].info," ; ");
    strcat(E[k].info,e.info);
    return;
   }
  }
  E[noe]=e;
  noe++;
 }
 void delevent(int d,int m,int y)
 {
  for(int j=0;j<noe;j++)
  {
  if(E[j].d==d && E[j].m==m && E[j].y==y)
  while(j<noe)
  {
  E[j]=E[j+1];
  j++;
  }
  }
  noe--;
 }
 event* reteventa()
 {return E;
 }
};


int monthday(int m,int n);
void main();


int datecorrect(int m, int y,int d=1)
{
if(m<=0 || y<=0 || m>12 || d>monthday(m,y))
return 0;
else
return 1;
}


int leap(int y)
{
if(y<=0)
{
return 0;
}
else
{
if(y%100==0)
{
if(y%400==0)
return 1;
else
return 0;
}
else
{
if(y%4==0)
return 1;
else
return 0;
}
}
}


int month(int m)
{
switch(m)
{
case 1: return 0;
case 2: return 3;
case 3: return 3;
case 4: return 6;
case 5: return 1;
case 6: return 4;
case 7: return 6;
case 8: return 2;
case 9: return 5;
case 10:return 0;
case 11:return 3;
case 12:return 5;
}
return 0;
}


int monthday(int m, int y)
{
switch(m)
{
case 1: return 31;
case 2: return 28 + leap(y);
case 3: return 31;
case 4: return 30;
case 5: return 31;
case 6: return 30;
case 7: return 31;
case 8: return 31;
case 9: return 30;
case 10:return 31;
case 11:return 30;
case 12:return 31;
}
return 0;
}


void display(int o, int m, int y)
{clrscr();
switch(m)
{
case 1:cout<<"Year: "<<y<<"   "<<"Month: "<<"January"<<endl;
       break;
case 2:cout<<"Year: "<<y<<"   "<<"Month: "<<"Feburary"<<endl;
       break;
case 3:cout<<"Year: "<<y<<"   "<<"Month: "<<"March"<<endl;
       break;
case 4:cout<<"Year: "<<y<<"   "<<"Month: "<<"April"<<endl;
       break;
case 5:cout<<"Year: "<<y<<"   "<<"Month: "<<"May"<<endl;
       break;
case 6:cout<<"Year: "<<y<<"   "<<"Month: "<<"June"<<endl;
       break;
case 7:cout<<"Year: "<<y<<"   "<<"Month: "<<"July"<<endl;
       break;
case 8:cout<<"Year: "<<y<<"   "<<"Month: "<<"August"<<endl;
       break;
case 9:cout<<"Year: "<<y<<"   "<<"Month: "<<"September"<<endl;
       break;
case 10:cout<<"Year: "<<y<<"   "<<"Month: "<<"October"<<endl;
       break;
case 11:cout<<"Year: "<<y<<"   "<<"Month: "<<"November"<<endl;
       break;
case 12:cout<<"Year: "<<y<<"   "<<"Month: "<<"December"<<endl;
       break;
default:cout<<"";
}
cout<<"Sun   Mon   Tue   Wed   Thu   Fri   Sat"<<endl;
int x = o+1;
int f = x + monthday(m,y);
for(int t=1; t<=f; t++)
{
if(t<=x)
cout<<"      ";
else if((t-x)/10==0)
cout<<(t-x)<<"     ";
else
cout<<(t-x)<<"    ";
if(t%7==0)
cout<<endl;
}
}


void calculate(int m,int y)
{ int y1=y-1;
  int y2=y1%400;
  int y3=y2/100;
  int y4=y2%100;
  int y5=y4/4;
  int y6=y4%4;
  int odd=y6+(y5*5)+(y3*5);
  odd= odd + month(m);
  if(m>2)
  {
  odd = odd + leap(y);
  int z= odd % 7;
  display(z,m,y);
  }
  else
  {
  int z= odd % 7;
  display(z,m,y);
  }
  cout<<endl;
}



void password(char s[25])
{int i=0;
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


void save(char id[],person temp)
{ ofstream f(id,ios::binary);
  f.write((char*)&temp,sizeof(temp));
  f.close();
}



void create_id()
{clrscr();
 person p;
 cout<<"ENTER YOUR NAME"<<endl;
 char s[30];
 gets(s);
 p.getname(s);
 cout<<endl;
 reid:
 cout<<"ENTER YOUR ID"<<endl;
 gets(p.id);
 strcat(p.id,".dat");
 cout<<endl;
 ofstream f(p.id,ios::binary|ios::nocreate|ios::app);
	if(f.fail())
	{
	f.clear();
	f.close();
	cout<<"ENTER YOUR PASSWORD"<<endl;
	password(p.pass);
	cout<<endl;
	save(p.id,p);
	ofstream f("callist.txt",ios::app);
	f<<p.id<<endl;
	f<<s<<endl;
	f<<p.pass<<endl;
        f.close();
	cout<<"YOUR ID IS CREATED"<<endl;
	cout<<"TO ALTER OR VIEW EVENTS GO TO LOGIN MENU"<<endl;
	cout<<"PRESS ENTER TO RETURN TO MAIN MENU"<<endl;
	getch();
	main();
	}
	else
	{
	cout<<"CHANGE YOUR ID"<<endl;
	cout<<"PRESS ENTER TO TRY AGAIN"<<endl;
	getch();
	goto reid;
	}
}


int check(char id[30],person &temp)
	{char p[30];
	ifstream f(id,ios::binary);
	if(!f.fail())
	{
	f.read((char*)&temp,sizeof(temp));
	f.close();
	repass:
	cout<<"ENTER YOUR PASSWORD"<<endl;
	password(p);
	cout<<endl;
	if(strcmpi(p,temp.pass)==0)
	return 1;
	else
	{cout<<"YOUR PASSWORD IS WRONG"<<endl;
	 cout<<"PRESS 1 TO TRY AGAIN"<<endl;
	 cout<<"ELSE PRESS ANY KEY TO RETURN"<<endl;
	 int n=getch()-48;
	 if(n==1)
	 goto repass;
	 else
	 return 0;
	}
	}
	else
	{cout<<"YOUR ID DOESN'T EXIST"<<endl;
	 return 0;
	}
	}

void login()
{clrscr();
 person temp;
 char id[30];
 cout<<"ENTER YOUR ID"<<endl;
 gets(id);
 strcat(id,".dat");
 int z=check(id,temp);
 if(z==1)
{relogin:
 clrscr();
 char z;
 cout<<"TO ADD AN EVENT IN YOUR EXISTING ID PRESS 1"<<endl;
 cout<<"TO DELETE AN EVENT IN YOUR EXISTING ID PRESS 2"<<endl;
 cout<<"TO VIEW AN EVENT FROM YOUR EXISTING ID PRESS 3"<<endl;
 cout<<"TO RETURN TO MAIN MENU PRESS 4"<<endl;
 cin>>z;
 int n=z-48;
 if(n==4)
 main();
 else
 {
 cout<<endl;
 int d,m,y;
 redate:
 cout<<endl;
 cout<<"ENTER EVENT DAY MONTH AND YEAR"<<endl;
 cin>>d>>m>>y;
 cout<<endl;
 if(datecorrect(m,y,d))
 {if(n==1)
  {
   char info[100];
   cout<<"ENTER EVENT DESCRIPTION"<<endl;
   gets(info);
   event e;
   e.d=d;
   e.m=m;
   e.y=y;
   strcpy(e.info,info);
   temp.getevent(e);
   save(id,temp);
   cout<<endl;
   cout<<"EVENT ADDED"<<endl;
  }
  else if(n==2)
  {
   temp.delevent(d,m,y);
   save(id,temp);
   cout<<"EVENT DELETED"<<endl;
  }
  else if(n==3)
  {cout<<endl;
   cout<<"NAME: "<<temp.retname()<<endl;
   cout<<"ID: "<<temp.id<<endl;
   cout<<"DATE: "<<d<<"/"<<m<<"/"<<y<<endl;
   event s=temp.retevent(d,m,y);
   cout<<s.info<<endl<<endl;
   ifstream u("univevent.dat",ios::binary);
   if(!u.fail())
   {cout<<"UNIVERSAL EVENT: ";
    event ua;
    while(u.read((char*)&ua,sizeof(ua)))
    {if(ua.d==d && ua.m==m && ua.y==y)
     cout<<ua.info<<endl;
    }
   }
   u.close();
  }
  else
  {cout<<"ENTER VALID CHOICE"<<endl;
   cout<<"PRESS ENTER TO CHOOSE AGAIN"<<endl;
   goto relogin;
  }
 }
 else
 {cout<<"YOUR DATE IS WRONG ENTER AGAIN"<<endl;
  cout<<"PRESS ENTER TO TRY AGAIN"<<endl;
  getch();
  goto redate;
 }
 cout<<"TO CHOOSE AGAIN PRESS ENTER"<<endl;
 getch();
 goto relogin;
 }
 }
 else
 {cout<<"TRY AGAIN"<<endl;
  cout<<"PRESS ENTER TO RETURN MAIN MENU"<<endl;
  getch();
  main();
 }
}



void delid()
{clrscr();
 char s[30];
 person t;
 cout<<"ENTER YOUR ID"<<endl;
 gets(s);
 strcat(s,".dat");
 int z=check(s,t);
 if(z==1)
  {ifstream f1("callist.txt");
   if(!f1.fail())
   {ofstream f2("tcallist.txt");
   char z[50];
   while(!f1.eof())
   {f1.getline(z,50);
    if(strcmpi(z,t.retname()) && strcmpi(z,t.id) && strcmpi(z,t.pass))
    f2<<z<<endl;
   }
   f1.close();
   f2.close();
   remove("callist.txt");
   rename("tcallist.txt","callist.txt");
   }
   else
   {cout<<"USERS LIST DOESN'T EXIST"<<endl;
    f1.close();
   }
   remove(s);
   cout<<endl;
   cout<<"ID DELETED"<<endl;
   cout<<"PRESS ENTER TO GOTO MAIN"<<endl;
   getch();
   main();
  }
  else
  {cout<<"TRY AGAIN"<<endl;
   cout<<"PRESS ENTER TO RETURN MAIN MENU"<<endl;
   getch();
   main();
  }
}



void viewcal()
{clrscr();
 char s[30];
 person t;
 cout<<"ENTER YOUR ID"<<endl;
 gets(s);
 strcat(s,".dat");
 ifstream f(s,ios::binary);
 int z=check(s,t);
 if(z==1)
  {cout<<endl;
   cout<<endl;
   int m,y;
   reday:
   cout<<"ENTER MONTH AND YEAR YOU WANT TO SEE CALENDER OF"<<endl;
   cin>>m>>y;
   if(datecorrect(m,y))
   {
    cout<<endl;
    calculate(m,y);
    event* e=t.reteventa();
    int b=0,u=0;
    event j,h;
    for(int k=0;k<30;k++)
    {
     h=*(e+k);
     if(h.m==m && h.y==y)
      b++;
     if(!(strcmpi(h.info,"no event")))
      u++;
    }
    cout<<"YOU HAVE "<<b<<" EVENTS THIS MONTH"<<endl;
    int p=0;
    for(k=0;k<u;k++)
    {
     j=*(e+k);
     if(j.m==m && j.y==y)
     {
     cout<<(p+1)<<") "<<j.d<<"/"<<j.m<<"/"<<j.y<<endl;
     p++;
     }
    }
    ifstream uu("univevent.dat",ios::binary);
    if(!uu.fail())
    {
	cout<<"UNIVERSAL EVENTS: "<<endl;
    event ua;
    while(uu.read((char*)&ua,sizeof(ua)))
    {
	 if(ua.m==m && ua.y==y)
     cout<<ua.d<<'/'<<ua.m<<'/'<<ua.y<<":- "<<ua.info<<endl;
    }
	}
    uu.close();
    review:
    cout<<"PRESS 1 TO VIEW ANOTHER MONTH"<<endl;
    cout<<"PRESS 2 TO RETURN"<<endl;
    int n= getch()-48;
    if(n==1)
    goto reday;
    else if(n==2)
    main();
    else
    {
    cout<<"ENTER CORRECT OPTION PRESS ENTER TO TRY AGAIN"<<endl;
    getch();
    goto review;
    }
   }
   else
   {cout<<"YOUR DATE IS WRONG ENTER AGAIN"<<endl;
    cout<<"PRESS ENTER TO TRY AGAIN"<<endl;
    getch();
    goto reday;
   }
  }
  else
  {cout<<"TRY AGAIN"<<endl;
   cout<<"PRESS ENTER TO RETURN MAIN MENU"<<endl;
   getch();
   main();
  }
}


void admin()
{
readmin:
 clrscr();
 char s[30];
 cout<<"ENTER PASSWORD"<<endl;
 gets(s);
 if(strcmpi(s,"adminevent")==0)
 {
 readmc:
  clrscr();
  cout<<"TO ADD UNIVERSAL EVENT PRESS 1"<<endl;
  cout<<"TO DELETE UNIVERSAL EVENT PRESS 2"<<endl;
  cout<<"TO VIEW USERS LIST PRESS 3"<<endl;
  cout<<"TO RETURN TO MAIN MENU PRESS 4"<<endl;
  int n=getch()-48;
  switch(n)
  {
   case 1:event e;
	  readmdate:
	  cout<<"ENTER EVENT DAY MONTH AND YEAR"<<endl;
	  cin>>e.d>>e.m>>e.y;
	  cout<<endl;
	  if(datecorrect(e.m,e.y,e.d))
	  {
	  cout<<"ENTER EVENT DESCRIPTION"<<endl;
	  gets(e.info);
	  ofstream f("univevent.dat",ios::binary);
	  f.write((char*)&e,sizeof(e));
	  f.close();
	  cout<<"UNIVERSAL EVENT ADDED"<<endl;
	  }
	  else
	  {cout<<"WRONG DATE TRY AGAIN"<<endl;
	   goto readmdate;
	  }
	  break;
   case 2:event e2;
	  int d,m,y;
	  readmdate2:
	  cout<<"ENTER EVENT DAY MONTH AND YEAR"<<endl;
	  cin>>d>>m>>y;
	  cout<<endl;
	  if(datecorrect(m,y,d))
	  {ifstream f1("univevent.dat",ios::binary);
          if(!f1.fail())
          {ofstream f2("tempunivevent.dat",ios::binary);
	  while(f1.read((char*)&e2,sizeof(e2)))
	  {if(e2.d!=d && e2.m!=m && e2.y!=y)
	   f2.write((char*)&e2,sizeof(e2));
	  }
	  f1.close();
	  f2.close();
	  remove("univevent.dat");
	  rename("tempunivevent.dat","univevent.dat");
	  cout<<"UNIVERSAL EVENT ADDED"<<endl;
          }
          else
	  {cout<<"UNIVERSAL EVENT NOT CREATED"<<endl;
	  f1.close();
          }
	  }
	  else
	  {cout<<"WRONG DATE TRY AGAIN"<<endl;
	   goto readmdate2;
	  }
	  break;
  case 3:clrscr();
         cout<<"USERS LIST"<<endl;
         ifstream f("callist.txt");
         if(!f.fail())
         {
	 char s[50];
	 while(!f.eof())
	 {f.getline(s,50);
	  cout<<s<<endl;
	 }
         getch();
         }
         else
         {cout<<"NO USER LIST EXIST"<<endl;
         }
	 break;
  case 4:cout<<"PRESS ENTER TO RETURN"<<endl;
	 getch();
	 main();
	 break;
  default: cout<<"CHOOSE CORRECT OPTION PRESS ENTER"<<endl;
	   getch();
	   goto readmc;
 }
 cout<<"TO CHOOSE AGAIN PRESS ENTER"<<endl;
 getch();
 goto readmc;
 }
 else
 {cout<<"WRONG PASSWORD"<<endl;
  cout<<"PRESS 1 TO TRY AGAIN OR ANY KEY TO RETURN"<<endl;
  if(getch()==49)
  goto readmin;
  else
  main();
 }
}

void main()
{
 main:
 clrscr();
 char z;
 cout<<"WELCOME TO CALANDER"<<endl;
 cout<<"WE HAVE A USER SECTION AND A ADMINISTRATOR SECTION"<<endl;
 cout<<"YOU CAN CREATE ID LOGIN VIEW,ADD OR MANAGE YOUR EVENT"<<endl;
 cout<<"IN USER SECTION."<<endl;
 cout<<"IN ADMINISTRATOR SECTION YOU CAN ADD OR DELETE UNIVERSAL EVENT"<<endl;
 cout<<"YOU CAN ALSO SEE LIST OF USERS"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"TO CREATE NEW ID PRESS 1"<<endl;
 cout<<"TO LOGIN YOUR ID PRESS 2"<<endl;
 cout<<"TO DELETE YOUR ID PRESS 3"<<endl;
 cout<<"TO VIEW CALENDER PRESS 4"<<endl;
 cout<<"TO ENTER ADMINISTRATOR SECTION PRESS 5"<<endl;
 cout<<"TO EXIT PRESS 6"<<endl;
 cin>>z;
 int n=z-48;
 if(n==1)
 create_id();
 else if(n==2)
 login();
 else if(n==3)
 delid();
 else if(n==4)
 viewcal();
 else if(n==5)
 admin();
 else if(n==6)
 exit(0);
 else
 {
 cout<<"ENTER A VALID CHOICE"<<endl;
 cout<<"PRESS ENTER TO TRY AGAIN"<<endl;
 getch();
 goto main;
 }
}


