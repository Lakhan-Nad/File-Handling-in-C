void details()
{
clrscr();
cout<<"                  See Overall Details Of Library Management System.                   "<<endl;
cout<<"CLASS DETAILS"<<endl;
for(int cl=1; cl<=12; cl++)
{
for(char sec='a'; sec<='f'; sec++)
{
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
{}
else
{
student stud;
int st=0;
file.seekg(0);
while(!file.eof())
{
file.read((char*) &stud, sizeof(stud));
if(file.eof()){break;}
st++;
}
cout<<"There Are "<<st<<" Students In Class "<<cl<<" "<<(char) toupper(sec)<<"."<<endl;
}
}
}
cout<<endl;
cout<<"BOOKS DETAILS"<<endl;
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
fstream booklist;
booklist.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate);
book b;
int tb=0; int bb=0;
booklist.seekg(0);
while(!booklist.eof())
{
booklist.read((char*) &b, sizeof(b));
if(booklist.eof()){break;}
tb++;
if(b.avail==0)
{bb++;}
}
cout<<"There Are Total "<<tb<<" Books In Library. Of Which "<<bb<<" are Borrowd By Students."<<endl;
getch();
return;
}