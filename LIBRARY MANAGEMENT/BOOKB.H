void bookb()
{
clrscr();
cout<<"                             Issue A Book From Library.                                 "<<endl;
//check if booklist.dat exists
fstream bookex;
bookex.clear();
bookex.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: nocreate | ios :: ate);
if(bookex.fail())
{
cout<<"No Book Exist In Library"<<endl;
bookex.close();
getch();
return;
}
// end of checking

//booklist linked
fstream booklist;
booklist.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate);
//booklist opened

//get student details
int cl; char sec;
cout<<"Enter Your Class(1 to 12): ";cin>>cl;cout<<endl;
if(cl <= 0 || cl > 12)
{
cout<<"Wrong Input"<<endl;
booklist.close();
getch();
return;
}
else
{
cout<<"Enter Your Section(A to F): ";sec=getche();cout<<endl;
switch(toupper(sec))
{
case 'A': break;
case 'B': break;
case 'C': break;
case 'D': break;
case 'E': break;
case 'F': break;
default: cout<<"Wrong Input"<<endl;booklist.close();getch();return;
}
}
fstream file;
switch(cl)
{
case 1:switch(toupper(sec))
       {
case 'A': file.open("oneA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("oneB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("oneC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("oneD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("oneE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("oneF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 2:switch(toupper(sec))
       {
case 'A': file.open("twoA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("twoB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("twoC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("twoD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("twoE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("twoF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 3:switch(toupper(sec))
       {
case 'A': file.open("thrA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("thrB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("thrC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("thrD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("thrE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("thrF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 4:switch(toupper(sec))
       {
case 'A': file.open("fouA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("fouB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("fouC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("fouD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("fouE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("fouF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 5:switch(toupper(sec))
       {
case 'A': file.open("fivA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("fivB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("fivC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("fivD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("fivE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("fivF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 6:switch(toupper(sec))
       {
case 'A': file.open("sixA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("sixB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("sixC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("sixD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("sixE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("sixF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 7:switch(toupper(sec))
       {
case 'A': file.open("sevA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("sevB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("sevC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("sevD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("sevE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("sevF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 8:switch(toupper(sec))
       {
case 'A': file.open("eigA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("eigB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("eigC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("eigD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("eigE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("eigF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 9:switch(toupper(sec))
       {
case 'A': file.open("ninA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("ninB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("ninC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("ninD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("ninE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("ninF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 10:switch(toupper(sec))
       {
case 'A': file.open("tenA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("tenB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("tenC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("tenD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("tenE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("tenF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 11:switch(toupper(sec))
       {
case 'A': file.open("eleA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("eleB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("eleC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("eleD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("eleE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("eleF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
case 12:switch(toupper(sec))
       {
case 'A': file.open("tweA.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'B': file.open("tweB.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'C': file.open("tweC.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'D': file.open("tweD.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'E': file.open("tweE.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
case 'F': file.open("tweF.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);break;
       }
       break;
}
if(file.fail())
{
cout<<"This Class's Directory Does Not Exist";
booklist.close();
file.close();
getch();return;
}

//student check and getdata
int roll;
cout<<"Enter Your Roll No.";cin>>roll;cout<<endl;
int pos=0; //store position for student
int allow=0; //no. of books student can borrow
student stud;
char found='n';
file.seekg(0,ios :: beg);
while(!file.eof())
{
pos=file.tellg();
file.read((char*) &stud, sizeof(stud));
if(file.eof()){break;}
if(stud.roll==roll)
{
found='y';
//designate allow
if(stud.b1.yes==1 && stud.b2.yes==1)
{
allow=0;
cout<<"You Cannot Borrow Any Book. You Have Already Borrowed 2 Books."<<endl;
booklist.close();
file.close();
getch();
return;
}
else if((stud.b1.yes==1 && stud.b2.yes==0) || (stud.b1.yes==0 && stud.b2.yes==1))
{
allow=1;
cout<<"You Can Borrow Only 1 Book."<<endl;
}
else
{
allow=2;
cout<<"You Can Borrow 2 Books."<<endl;
}
//allow designated
break;
}
}
if(found=='n')
{
cout<<"Student's Data Does Not Exsist."<<endl;
booklist.close();
file.close();
getch();
return;
}
//student check over

//book check begins
bookborrow:
int acc;
cout<<"Enter Accession No. of Book You Want To Borrow: ";cin>>acc;cout<<endl;
if(acc<=0)
{
cout<<"Wrong Input"<<endl;
booklist.close();
file.close();
getch();
return;
}
char got='n';
book b;
int place=0;
booklist.clear();
booklist.seekg(0,ios :: beg);
while(!booklist.eof())
{
place=booklist.tellg();
booklist.read((char*) &b, sizeof(b));
if(booklist.eof()){break;}
if(b.accession==acc)
{
got='f';
//check if book is available
if(b.avail==0)
{
cout<<"This Book Is Already Borrowed.Do You Want Other Book(Y/N): ";
char op;
op=getche();
cout<<endl;
switch(toupper(op))
{
case 'Y':goto bookborrow;
case 'N':cout<<"Books Not Borrowed."<<endl;
	 booklist.close();file.close();
	 getch();return;
default:cout<<"Wrong Input"<<endl;
	booklist.close();file.close();
	getch();return;
}
}
//end of checking
b.avail=0;
b.c.roll=stud.roll;
strcpy(b.c.name,stud.name);
b.c.cla=cl;
b.c.sec=sec;
//issue date
time_t now;
time(&now);
struct tm *timei;
timei=localtime(&now);
strftime(b.c.idate,10,"%d/%m/%y",timei);
//issue date done return date
struct tm  timee;
timee.tm_year=(timei->tm_year);
timee.tm_mon=(timei->tm_mon);
timee.tm_mday=(timei->tm_mday);
timee.tm_mday += 14;
mktime(&timee);
strftime(b.c.rdate,10,"%d/%m/%y",&timee);
//return date done
booklist.seekg(place,ios :: beg);
booklist.write((char*) &b, sizeof(b));
//update stud
if(stud.b1.yes==0)
{
stud.b1.yes=1;
stud.b1.accession=b.accession;
strcpy(stud.b1.name,b.name);
strcpy(stud.b1.idate,b.c.idate);
strcpy(stud.b1.rdate,b.c.rdate);
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Borrowed Successfully."<<endl;
}
else
{
stud.b2.yes=1;
stud.b2.accession=b.accession;
strcpy(stud.b2.name,b.name);
strcpy(stud.b2.idate,b.c.idate);
strcpy(stud.b2.rdate,b.c.rdate);
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Borrowed Successfully."<<endl;
}
//stud updated
break;
}
}
if(got=='n')
{
cout<<"Book Not Found."<<endl;
booklist.close();
file.close();
getch();
return;
}
//book check and borrow ends

//allowed borrowers borrow second book
if(allow==2)
{
cout<<"You Can Borrow One More Book Do You Want To Borrow It Now(Y/N): ";
char op;
op=getche();
cout<<endl;
switch(toupper(op))
{
case 'Y':cout<<"Borrow Your Second Book."<<endl;
	 allow=0;
	 goto bookborrow;
case 'N':cout<<"One Book Borrowed Successfully."<<endl;
	 break;
default:cout<<"Wrong Input"<<endl;
	booklist.close();file.close();
	getch();return;
}
}
//all functions done
file.close();
booklist.close();
getch();
return;
}