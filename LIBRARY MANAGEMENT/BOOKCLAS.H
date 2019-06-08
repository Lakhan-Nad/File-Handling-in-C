void bookclas()
{
clrscr();
cout<<"           Get Details Of All The Students Of A Particular Class.             "<<endl;
int cl; char sec;
cout<<"Enter Class(1 to 12): ";cin>>cl;cout<<endl;
cout<<endl;
if(cl <= 0 || cl > 12)
{
cout<<"Wrong Input"<<endl;
getch();
return;
}
else
{
cout<<"Enter Section(A to F): ";sec=getche();cout<<endl;
switch(toupper(sec))
{
case 'A': break;
case 'B': break;
case 'C': break;
case 'D': break;
case 'E': break;
case 'F': break;
default: cout<<"Wrong Input"<<endl;getch();return;
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
cout<<"This Class's Directory Does Not Exist";file.close();getch();return;
}
student stud;
char found='n';
char ch='n';
student st;
file.seekg(0);
while(!file.eof())
{
file.read((char*) &st, sizeof(st));
if(file.eof()){break;}
ch='y';break;
}
if(ch=='n')
{
cout<<"Students Details Do Not Exist."<<endl;
file.close();
getch();
return;
}
file.clear();
file.seekg(0);
while(!file.eof())
{
file.read((char*) &stud, sizeof(stud));
if(file.eof()){break;}
if(stud.b1.yes==1 || stud.b2.yes==1)
{
found='y';
cout<<"Roll No.: "<<stud.roll<<"  Name : "<<stud.name<<endl;

// display books details
if(stud.b1.yes==0 && stud.b2.yes==0)
{
cout<<"No Books Borrowed"<<endl;
}
else if(stud.b1.yes==1 && stud.b2.yes==0)
{
cout<<"One Book Borrowed"<<endl;
cout<<"Book Name: "<<stud.b1.name<<"    Accession No.: "<<stud.b1.accession<<endl;
cout<<"Issue Date: "<<stud.b1.idate<<"   "<<"Return Date: "<<stud.b1.rdate<<endl;
}
else if(stud.b2.yes==1 && stud.b1.yes==0)
{
cout<<"One Book Borrowed"<<endl;
cout<<"Book Name: "<<stud.b2.name<<"    Accession No.: "<<stud.b2.accession<<endl;
cout<<"Issue Date: "<<stud.b2.idate<<"   "<<"Return Date: "<<stud.b2.rdate<<endl;
}
else
{
cout<<"Two Book Borrowed"<<endl;
cout<<"Book Name: "<<stud.b1.name<<"    Accession No.: "<<stud.b1.accession<<endl;
cout<<"Issue Date: "<<stud.b1.idate<<"   "<<"Return Date: "<<stud.b1.rdate<<endl;
cout<<"Book Name: "<<stud.b2.name<<"    Accession No.: "<<stud.b2.accession<<endl;
cout<<"Issue Date: "<<stud.b2.idate<<"   "<<"Return Date: "<<stud.b2.rdate<<endl;
}
// books details displayed
cout<<endl;
}
}
if(found=='n')
{
cout<<"No Books Borrowed."<<endl;
file.close();
getch();
return;
}
file.close();
getch();
return;
}
