void bookr()
{
clrscr();
cout<<"                           Return A Book To Library.                        "<<endl;
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
int allow=0; //no. of books student can return
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
if(stud.b1.yes==0 && stud.b2.yes==0)
{
allow=0;
cout<<"You Cannot Return Any Book. You Have Not Borrowed Any Books."<<endl;
booklist.close();
file.close();
getch();
return;
}
else if((stud.b1.yes==1 && stud.b2.yes==0) || (stud.b1.yes==0 && stud.b2.yes==1))
{
allow=1;
cout<<"You Have Borrowed 1 Book."<<endl;
}
else
{
allow=2;
cout<<"You Have Borrowed 2 Books."<<endl;
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

//book return begins

bookreturn:
int acc;int bn;
switch(allow)
{
case 2:cout<<"Choose Which Book You Want To Return(1 Or 2): "<<endl;
       cout<<"1. Name : "<<stud.b1.name<<"   Accession No: "<<stud.b1.accession<<endl;
       cout<<"2. Name : "<<stud.b2.name<<"   Accession No: "<<stud.b2.accession<<endl;
       cout<<"3. Cancel Return"<<endl;
       char ch;
       ch=getche();cout<<endl;
       switch(ch)
       {
       case '1':acc=stud.b1.accession;bn=1;break;
       case '2':acc=stud.b2.accession;bn=2;break;
       case '3':cout<<"No Books Returned."<<endl;
		booklist.close();file.close();
		getch();return;
       default:cout<<"Wrong Choice"<<endl;
	       booklist.close();file.close();
	       getch();return;
       }
       break;
case 1:if(stud.b1.yes==1)
       {
       cout<<"Name: "<<stud.b1.name<<"  Accession No: "<<stud.b1.accession<<endl;
       cout<<"Confirm Return(Y/N): ";
       char choice=getche();cout<<endl;
       switch(toupper(choice))
       {
       case 'Y':bn=1;
		acc=stud.b1.accession;
		break;
       case 'N':cout<<"Book Not Returned."<<endl;
		booklist.close();file.close();
		return;
       default:cout<<"Wrong Choice. Book Not Returned."<<endl;
	       booklist.close();file.close();
	       getch();return;
       }
       //actions done
       }
       else
       {
       cout<<"Name: "<<stud.b2.name<<"  Accession No: "<<stud.b2.accession<<endl;
       cout<<"Confirm Return(Y/N): ";
       char choice=getche();cout<<endl;
       switch(toupper(choice))
       {
       case 'Y':bn=2;
		acc=stud.b2.accession;
		break;
       case 'N':cout<<"Book Not Returned."<<endl;
		booklist.close();file.close();
		return;
       default:cout<<"Wrong Choice. Book Not Returned."<<endl;
	       booklist.close();file.close();
	       getch();return;
       }
       //actions done
       }

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
b.avail=1;
strcpy(b.c.name," ");
strcpy(b.c.rdate," ");
strcpy(b.c.idate," ");
b.c.cla=0;
b.c.sec=NULL;
b.c.roll=0;
booklist.seekg(place,ios :: beg);
booklist.write((char*) &b, sizeof(b));
//update stud
if(bn==1)
{
stud.b1.yes=0;
strcpy(stud.b1.name," ");
strcpy(stud.b1.idate," ");
strcpy(stud.b1.rdate," ");
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Returned Successfully."<<endl;
}
else
{
stud.b2.yes=0;
strcpy(stud.b2.name," ");
strcpy(stud.b2.idate," ");
strcpy(stud.b2.rdate," ");
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Returned Successfully."<<endl;
}
//stud updated
break;
}
}
if(got=='n')
{
//delete data  from students record
if(bn==1)
{
stud.b1.yes=0;
strcpy(stud.b1.name," ");
strcpy(stud.b1.idate," ");
strcpy(stud.b1.rdate," ");
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Returned Successfully."<<endl;
}
else
{
stud.b2.yes=0;
strcpy(stud.b2.name," ");
strcpy(stud.b2.idate," ");
strcpy(stud.b2.rdate," ");
file.seekg(pos,ios :: beg);
file.write((char*) &stud, sizeof(stud));
cout<<"Book Returned Successfully."<<endl;
}
//stud edited
}
if(allow==2)
{
cout<<"You Have One More Book Do You Want To Return It Now(Y/N): ";
char op;
op=getche();
cout<<endl;
switch(toupper(op))
{
case 'Y':cout<<"Return Your Second Book."<<endl;
	 allow=1;
	 goto bookreturn;
case 'N':cout<<"One Book Returned Successfully."<<endl;
	 break;
default:cout<<"Wrong Input"<<endl;
	booklist.close();file.close();
	getch();return;
}
}
//all functions completed
booklist.close();
file.close();
getch();
return;
}