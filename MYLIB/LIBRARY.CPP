#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<dir.h>
#include<dos.h>


int line;
void main();

void designoutput(char s[])
{clrscr();
 for(int i=0;i<25;i++)
 cout<<(char)179<<endl;
 for(i=0;i<26;i++)
 {
 gotoxy(80,i);
 cout<<(char)179;
 }
 gotoxy(2,1);
 for(i=0;i<78;i++)
 cout<<(char)196;
 gotoxy(2,24);
 for(i=0;i<78;i++)
 cout<<(char)196;
 gotoxy(2,3);
 for(i=0;i<78;i++)
 cout<<(char)196;
 gotoxy(2,21);
 for(i=0;i<78;i++)
 cout<<(char)196;
 gotoxy(2,22);
 textcolor(10);
 cprintf("message:- ");
 textcolor(7);
 int l=strlen(s);
 l=78-l;
 l=l/2;
 gotoxy(l+1,2);
 textcolor(14);
 cprintf(s);
 textcolor(7);
 gotoxy(2,4);
}


struct book
{
 char bname[40];
 char author[20];
 char bcode[10];
 int noch;
 int bpnt;
 int rate;
 char bpath[100];
 book()
 {strcpy(bname,"no name");
  strcpy(author,"empty");
  strcpy(bcode,"no code");
  noch=0;
  rate=0;
  bpnt=0;
  strcpy(bpath,"no source available");
 }
 book(book &b)
 {strcpy(bname,b.bname);
  strcpy(author,b.author);
  strcpy(bcode,b.bcode);
  strcpy(bpath,b.bpath);
  noch=b.noch;
  bpnt=b.bpnt;
  rate=b.rate;
 }
};

void addbook()
{clrscr();
 book b;
 char pbin[50];
 getcwd(pbin,50);
 chdir("bookslib");
 cout<<"enter book name : ";
 gets(b.bname);
 cout<<"enter book code (must be without gap) : ";
 cin>>(b.bcode);
 cout<<"enter name of author : ";
 gets(b.author);
 cout<<"enter no. of chapters : ";
 cin>>b.noch;
 cout<<"enter points of book : ";
 cin>>b.bpnt;
 mkdir(b.bcode);
 chdir(b.bcode);
 getcwd(b.bpath,100);
 char ch[10];
 int t,o;
 for(int i=1;i<=b.noch;i++)
 {t=48+(i/10);
  o=48+(i%10);
  strcpy(ch,"chap");
  ch[4]=t;
  ch[5]=o;
  ch[6]=NULL;
  strcat(ch,".txt");
  ch[10]=NULL;
  ofstream(ch);
 }
 ofstream f1("chapnames.txt");
 f1.close();
 chdir(pbin);
 ofstream f("booklist.dat",ios::binary|ios::app);
 f.write((char*)&b,sizeof(b));
 f.close();
 textcolor(10+BLINK);
 gotoxy(32,7);
 cprintf("book added");
 textcolor(7);
 getch();
 return;
}


struct person
{char name[30];
 char pid[45];
 char pass[30];
 int pnt;
 int bava;
 book pb[30];
 book lread;
 int lgchap;
 person()
 {pnt=20;
  bava=0;
 }
 void save()
 {char temp[50];
  strcpy(temp,pid);
  strcat(temp,".dat");
  ofstream f(temp,ios::binary);
  person obj;
  for(int ct=0;ct<30;ct++)
   obj.pb[ct]=pb[ct];
  strcpy(obj.name,name);
  strcpy(obj.pid,pid);
  strcpy(obj.pass,pass);
  obj.bava=bava;
  obj.pnt=pnt;
  obj.lread=lread;
  obj.lgchap=lgchap;
  f.write((char*)&obj,sizeof(obj));
  f.close();
 }
 int buy(book b)
 {int flag=1;
  for(int ctr=0;ctr<bava;ctr++)
  {if(strcmpi(pb[ctr].bcode,b.bcode)==0)
    flag=0;
  }
  if(flag==1)
  {pb[bava]=b;
   bava++;
   pb[bava].rate++;
   pnt=pnt-b.bpnt;
   save();
   return 1;
  }
  else
   return 0;
 }
 void sell(char s[])
 {book be;
  if(strcmpi(s,lread.bcode)==0)
   lread=be;
  int i=0;
  while(strcmpi(s,pb[i].bcode)!=0)
  {i++;
  }
  for(int j=i;j<bava;j++)
  {pb[j]=pb[j+1];
  }
  pnt=pnt+5;
  bava--;
  save();
 }
};


void password(char s[25])
{int i=0;
 char c;
 while(c!=13)
 {repass:
  c=getch();
  if(c=='\b')
  {i--;
   cout<<'\b';
   cout<<" ";
   cout<<'\b';
   goto repass;
  }
  if(c!=13)
  {s[i]=c;
   i++;
  }
  cout<<'*';
 }
s[i]=NULL;
return;
}


void readoutput(book b,int choice)
{char curpath[50];
 getcwd(curpath,50);
 chdir(b.bpath);
 char head[65];
 strcpy(head,b.bname);
 strcat(head,", by ");
 strcat(head,b.author);
 ifstream f("chapnames.txt");
 char cn[50];
 for(int m=0;m<choice;m++)
 f.getline(cn,50);
 char chap[10];
 int t,o;
 t=choice/10;
 o=choice%10;
 strcpy(chap,"chap");
 chap[4]=t+48;
 chap[5]=o+48;
 chap[6]=NULL;
 strcat(chap,".txt");
 ifstream f1(chap);
 int size=0;
 char ptr;
 while(!f1.eof())
 {f1.get(ptr);
  size++;
 }
 f1.close();
 ifstream f2(chap);
 int nop=size/(78*17);
 int nor=size%(74*17);
 for(int c=0;c<=nop+1;c++)
 {designoutput(head);
  textcolor(7);
  gotoxy(2,22);
  cout<<"          ";
  textcolor(14);
  if(c!=0)
  {gotoxy(2,22);
   cout<<"press ";cprintf("p");cout<<" for previous page";
  }
  if(c!=nop+1)
  {gotoxy(58,22);
   cout<<"press ";cprintf("n");cout<<" for next page";
  }
  gotoxy(31,23);
  cout<<"press ";cprintf("b");cout<<" to return back";
  textcolor(7);
  gotoxy(35,21);
  textcolor(14);
  char pno[2];
  pno[0]=48+(c+1)/10;
  pno[1]=48+(c+1)%10;
  pno[2]=NULL;
  cprintf("page no.");cprintf(pno);
  textcolor(7);
  if(c==0)
  {int length=12+strlen(cn);
   length=78-length;
   length=length/2;
   gotoxy(length+3,12);
   cout<<"chapter "<<t<<o<<" :"<<cn;
  }
  else
  {gotoxy(2,4);
   int p1,c1;
   char alpha;
   if(c!=nop+1)
   {for(p1=1;p1<=(17*78);p1++)
    {f2.seekg(0,ios::beg);
     for(c1=0;c1<(((c-1)*17)*78)+p1;c1++)
     f2.get(alpha);
     cout<<alpha;
     if(p1%78==0)
     gotoxy(2,4+(p1/78));
    }
   }
   else
   {for(p1=1;p1<=nor;p1++)
    {f2.seekg(0,ios::beg);
     for(c1=0;c1<(((c-1)*17)*78)+p1;c1++)
     f2.get(alpha);
     cout<<alpha;
     if(p1%78==0)
     gotoxy(2,4+(p1/78));
    }
   }
  }
  char op;
  int flag=0;
  while(flag!=1)
  {op=getch();
   if(c==0)
   {if(toupper(op)=='N' || toupper(op)=='B')
    flag=1;
   }
   else if(c==nop+1)
   {if(toupper(op)=='P' || toupper(op)=='B')
    flag=1;
   }
   else
   {if(toupper(op)=='P' || toupper(op)=='B' || toupper(op)=='N')
    flag=1;
   }
  }
  if(toupper(op)=='B')
  {chdir(curpath);
   return;
  }
  else if(toupper(op)=='N')
  continue;
  else if(toupper(op)=='P')
  c=c-2;
 }
}


void readbook(person p,book b,int lch)
{if(lch!=0)
 {readoutput(b,lch);
 }
 choosechap:
 designoutput(b.bname);
 char integer[6];
 int choice=0;
 line=5;
 textcolor(14);
 cout<<"written by : ";cprintf(b.author);
 textcolor(7);
 gotoxy(2,line++);gotoxy(2,line++);
 int ln=line-1;
 for(int chno=0;chno<b.noch;chno++)
 {cout<<"   chapter "<<chno+1;
  if(chno<=9)
  gotoxy(2,line++);
  else if(chno>9 && chno<=19)
  gotoxy(16,line++);
  else if(chno>19 && chno<=29)
  gotoxy(30,line++);
  else if(chno>29 && chno<=39)
  gotoxy(44,line++);
  else if(chno>39 && chno<=49)
  gotoxy(58,line++);
  if(chno==9)
  {gotoxy(16,ln);
   line=ln+1;
  }
  if(chno==19)
  {gotoxy(30,ln);
   line=ln+1;
  }
  if(chno==29)
  {gotoxy(44,ln);
   line=ln+1;
  }
  if(chno==39)
  {gotoxy(58,ln);
   line=ln+1;
  }
 }
 cout<<"   to exit choose 0";
 gotoxy(24,19);
 textcolor(12);
 cprintf("enter chapter no. you want to read : ");
 textcolor(7);
 gets(integer);
 for(int r=0;integer[r]!=NULL;r++)
 {if(integer[r]>=48 && integer[r]<=57)
  {choice=choice*10+integer[r]-48;
  }
  else
  {choice=chno+1;
   break;
  }
 }
 if(choice>=1 && choice<=chno)
 {gotoxy(13,22);
  cout<<"we are opening the chapter you choosed. kindly wait!";
  delay(2000);
  gotoxy(36,23);
  cout<<"get ready";
  getch();
  p.lgchap=choice;
  p.save();
  readoutput(b,choice);
  goto choosechap;
 }
 else if(choice==0)
 {gotoxy(32,22);
  cout<<"thank you!!";
  getch();
  return;
 }
 else
 {gotoxy(25,22);
  cout<<"the chapter you choosed isn't available";
  gotoxy(29,23);
  cout<<"press enter to choose again";
  getch();
  goto choosechap;
 }
 return;
}


void usersection(person p,int op)
{if(op==3)
 {readbook(p,p.lread,p.lgchap);
  return;
 }
 if(p.bava==0)
 {gotoxy(26,22);
  cout<<"you haven't bought a book yet!";
  getch();
  return;
 }
 int i=p.bava/9;
 int j=p.bava%9;
 int x,m;
 for(int k=0;k<=i;k++)
 {if(op==1)
  designoutput("READING SECTION");
  else if(op==2)
  designoutput("BOOK SELL SECTION");
  line=5;
  cout<<"name : "<<p.name<<"    "<<"id : "<<p.pid;gotoxy(2,line++);
  if(k!=i)
  x=9;
  else
  x=j;
  cout<<"s.no"<<(char)179<<"book name                               "<<(char)179<<"author              "<<(char)179<<"point";gotoxy(2,line++);
  for(int l=0;l<x;l++)
  {m=(k*9+l);
   cout<<" "<<l+1<<". "<<(char)179;
   cout<<p.pb[m].bname;
   int t=40-strlen(p.pb[m].bname);
   for(int g=0;g<t;g++)
   cout<<" ";
   cout<<(char)179;
   cout<<p.pb[m].author;
   t=20-strlen(p.pb[m].author);
   for(g=0;g<t;g++)
   cout<<" ";
   cout<<(char)179;
   cout<<p.pb[m].bpnt;
   gotoxy(2,line++);
  }
  gotoxy(31,line++);
  cout<<"enter your choice(1-"<<x<<")";
  gotoxy(2,18);
  if(k!=0)
  {textcolor(14);
   cout<<"press ";cprintf("p");cout<<" for previous page";
   textcolor(7);
  }
  gotoxy(58,18);
  if(k!=i)
  {textcolor(14);
   cout<<"press ";cprintf("n");cout<<" for next page";
   textcolor(7);
  }
  gotoxy(31,19);
  textcolor(14);
  cout<<"press ";cprintf("b");cout<<" to return back";
  textcolor(7);
  char ch;
  int flag=0;
  while(flag!=1)
  {ch=getch();
   if(toupper(ch)=='B')
   flag=1;
   if(k==0)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='N')
    flag=1;
   }
   else if(k==i)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='P')
    flag=1;
   }
   else if(k!=0 && k!=i)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='N')
    flag=1;
    if(toupper(ch)=='P')
    flag=1;
   }
  }
  if(toupper(ch)=='N')
  continue;
  else if(toupper(ch)=='P')
  k=k-2;
  else if(toupper(ch)=='B')
  return;
  else if(op==1)
  {p.lread=p.pb[k*9+ch-49];
   p.lgchap=1;
   p.save();
   readbook(p,p.pb[k*9+ch-49],0);
   return;
  }
  else if(op==2)
  {p.sell(p.pb[k*9+ch-49].bcode);
   gotoxy(32,22);
   cout<<"sold the book";
   getch();
   return;
  }
 }
}


void buysection(person p)
{book b;
 int c=0;
 ifstream f("booklist.dat",ios::binary);
 while(f.read((char*)&b,sizeof(b)))
 {c++;
 }
 f.close();
 if(c==0)
 {gotoxy(26,22);
  cout<<"no book available in our list!";
  getch();
  return;
 }
 fstream f1("booklist.dat",ios::binary|ios::in|ios::out);
 int i=c/9;
 int j=c%9;
 int x;
 for(int k=0;k<=i;k++)
 {designoutput("BOOK BUY SECTION");
  line=5;
  cout<<"name : "<<p.name<<"    "<<"id : "<<p.pid;gotoxy(2,line++);
  if(k!=i)
  x=9;
  else
  x=j;
  cout<<"s.no"<<(char)179<<"book name                               "<<(char)179<<"author              "<<(char)179<<"point";gotoxy(2,line++);
  for(int l=0;l<x;l++)
  {f1.seekg((k*9+l)*sizeof(b),ios::beg);
   f1.read((char*)&b,sizeof(b));
   cout<<" "<<l+1<<". "<<(char)179;
   cout<<b.bname;
   int t=40-strlen(b.bname);
   for(int g=0;g<t;g++)
   cout<<" ";
   cout<<(char)179;
   cout<<b.author;
   t=20-strlen(b.author);
   for(g=0;g<t;g++)
   cout<<" ";
   cout<<(char)179;
   cout<<b.bpnt;
   gotoxy(2,line++);
  }
  gotoxy(31,line++);
  cout<<"enter your choice(1-"<<x<<")";
  gotoxy(2,18);
  if(k!=0)
  {textcolor(14);
   cout<<"press ";cprintf("p");cout<<" for previous page";
   textcolor(7);
  }
  gotoxy(58,18);
  if(k!=i)
  {textcolor(14);
   cout<<"press ";cprintf("n");cout<<" for next page";
   textcolor(7);
  }
  gotoxy(31,19);
  textcolor(14);
  cout<<"press ";cprintf("b");cout<<" to return back";
  textcolor(7);
  char ch;
  int flag=0;
  while(flag!=1)
  {ch=getch();
   if(toupper(ch)=='B')
   flag=1;
   if(k==0)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='N')
    flag=1;
   }
   else if(k==i)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='P')
    flag=1;
   }
   else if(k!=0 && k!=i)
   {for(int r=0;r<x;r++)
    if(ch==49+r)
    flag=1;
    if(toupper(ch)=='N')
    flag=1;
    if(toupper(ch)=='P')
    flag=1;
   }
  }
  if(toupper(ch)=='N')
  continue;
  else if(toupper(ch)=='P')
  k=k-2;
  else if(toupper(ch)=='B')
  {f1.close();
   return;
  }
  else
  {
   book b2;
   f1.seekg((k*9+ch-49)*sizeof(b2),ios::beg);
   f1.read((char*)&b2,sizeof(b2));
   if(p.pnt>=b2.bpnt)
   {if(p.buy(b2))
    {f1.seekp(-1*sizeof(b2),ios::cur);
     b2.rate++;
     f1.write((char*)&b2,sizeof(b2));
     gotoxy(32,22);
     cout<<"bought the book";
     getch();
     f1.close();
     return;
    }
    else
    {gotoxy(27,22);
     cout<<"you have already bought this book";
     getch();
     k=k-1;
     continue;
    }
   }
   else
   {gotoxy(25,22);
    cout<<"you dont have enough pnt to buy this book";
    getch();
    k=k-1;
    continue;
   }
  }
 }
}


void signin()
{designoutput("SIGNIN MENU");
 line=5;
 person p;
 gotoxy(22,4);
 textcolor(3);
 cprintf("enter your name : ");
 gets(p.name);gotoxy(22,line++);
 cprintf("enter your id : ");
 gets(p.pid);gotoxy(22,line++);
 char s[60];
 strcpy(s,p.pid);
 strcat(s,".dat");
 ofstream f(s,ios::binary|ios::nocreate);
 if(f.fail())
 {f.clear();
  f.close();
  ofstream f(s,ios::binary);
  cprintf("enter your password : ");
  password(p.pass);gotoxy(22,line++);
  f.write((char*)&p,sizeof(p));
  f.close();
  gotoxy(26,22);
  cout<<"id created successfully";gotoxy(26,23);
  cout<<"login in main menu to continue";
  getch();
  textcolor(7);
  return;
 }
 else
 {f.close();
  gotoxy(26,22);
  cout<<"user already exist change your id";
  getch();
  textcolor(7);
  return;
 }
}


void login()
{designoutput("LOGIN MENU");
 person p;
 char s[60],t[30];
 gotoxy(25,12);
 textcolor(3);
 cprintf("enter your id : ");
 gets(s);gotoxy(25,13);
 strcat(s,".dat");
 ifstream f(s,ios::binary);
 if(!f.fail())
 {f.read((char*)&p,sizeof(p));
  cprintf("enter your password : ");
  textcolor(7);
  password(t);gotoxy(35,14);
  if(strcmpi(t,p.pass)==0)
  {textcolor(13 + BLINK);
   gotoxy(33,22);
   cprintf("match found");
   textcolor(7);
   f.close();
   int lreadava=1;
   getch();
   valid:
   ifstream f(s,ios::binary);
   f.read((char*)&p,sizeof(p));
   f.close();
   designoutput("LOGIN MENU");
   line=5;
   textcolor(12);
   if(strcmpi(p.lread.bpath,"no source available")==0)
    lreadava=0;
   else
    lreadava=1;
   cout<<"name : "<<p.name<<"    "<<"id : "<<p.pid;gotoxy(2,line++);
   cout<<"points available : "<<p.pnt<<"    "<<"books available : "<<p.bava;
   gotoxy(2,line++);
   gotoxy(32,line++);
   if(lreadava)
   cprintf("1.continue last book");
   else
   {textcolor(8);
    cprintf("1.continue last book");
    textcolor(12);
   }
   gotoxy(32,line++);
   cprintf("2.read a book");gotoxy(32,line++);
   cprintf("3.buy a book");gotoxy(32,line++);
   cprintf("4.sell a book");gotoxy(32,line++);
   cprintf("5.main menu");gotoxy(32,line++);
   textcolor(7);
   gotoxy(32,22);
   textcolor(9+BLINK);
   cprintf("enter your choice");gotoxy(2,line++);
   textcolor(7);
   int n=getch()-48;
   switch(n)
   {case 1:if(lreadava)
	   usersection(p,3);
	   else
	   goto valid;
	   break;
    case 2:usersection(p,1);
	   break;
    case 3:buysection(p);
	   break;
    case 4:usersection(p,2);
	   break;
    case 5:f.close();
	   return;
	   break;
    default:f.close();
	    goto valid;
   }
   goto valid;
  }
  else
  {f.close();
   gotoxy(32,22);
   textcolor(13 + BLINK);
   cprintf("match not found");
   textcolor(7);
   getch();
   return;
  }
 }
 else
 {f.close();
  gotoxy(32,22);
  textcolor(13 + BLINK);
  cprintf("this id doesnt exist");
  textcolor(7);
  getch();
  return;
 }
}


void delid()
{designoutput("DELETE ID MENU");
 person p;
 char s[60],t[30];
 gotoxy(25,12);
 textcolor(3);
 cprintf("enter your id : ");
 gets(s);gotoxy(25,13);
 strcat(s,".dat");
 ifstream f(s,ios::binary);
 if(!f.fail())
 {f.read((char*)&p,sizeof(p));
  f.close();
  cprintf("enter your password : ");
  textcolor(7);
  password(t);gotoxy(35,14);
  if(strcmpi(t,p.pass)==0)
  {textcolor(13 + BLINK);
   cprintf("match found");
   textcolor(7);
   getch();
   designoutput("DELETE ID MENU");
   line=5;
   cout<<"after deleting your id,";gotoxy(2,line++);
   cout<<"you will loose access to your account";gotoxy(2,line++);
   cout<<"thank you for joining our library!";gotoxy(2,line++); 
   delay(2000);
   gotoxy(32,line++);
   cout<<"please wait";gotoxy(2,line++);
   remove(s);
   delay(2000);
   gotoxy(33,22);
   cout<<"id deleted successfully";
   getch();
   return;
  }
  else
  {f.close();
   gotoxy(32,22);
   textcolor(12 + BLINK);
   cprintf("match not found");
   textcolor(7);
   getch();
   return;
  }
 }
 else
 {f.close();
  gotoxy(32,22);
  textcolor(11 + BLINK);
  cprintf("this id doesnt exist");
  textcolor(7);
  getch();
  return;
 }
}
   

void main()
{char bin[50];
 getcwd(bin,50);
 chdir("mylib");
 mainf:
 designoutput("MAIN MENU");
 line=5;
 cout<<"welcome to library!";gotoxy(2,line++);
 cout<<"add and read as many book as you can.";gotoxy(2,line++);
 cout<<"'hope you enjoy'";gotoxy(2,line++);
 gotoxy(32,22);
 textcolor(9+BLINK);
 cprintf("enter your choice");
 textcolor(12);
 gotoxy(34,line++);
 cprintf("1.add a book");gotoxy(34,line++);
 cprintf("2.sign in");gotoxy(34,line++);
 cprintf("3.login");gotoxy(34,line++);
 cprintf("4.delete id");gotoxy(34,line++);
 cprintf("5.exit ");gotoxy(34,line++);
 textcolor(7);
 gotoxy(2,line++);
 int n=getch()-48;
 switch(n)
 {
  case 1:addbook();
	 break;
  case 2:signin();
	 break;
  case 3:login();
	 break;
  case 4:delid();
         break;
  case 5:chdir(bin);
	 exit(0);
	 break;
  default:goto mainf;
 }
 goto mainf;
}



