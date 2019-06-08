void delclass()
{
clrscr();
cout<<"                            Delete A Class Directory.                             "<<endl;
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
}  //end of validation of class

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
char borrowed='n';
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
goto del;
}
file.clear();
file.seekg(0);
while(!file.eof())
{
file.read((char*) &stud, sizeof(stud));
if(file.eof()){break;}
if(stud.b1.yes==1 || stud.b2.yes==1)
{
//if any student have borrowed book dont delete and exit
borrowed='y';
cout<<"Cannot Delete Class As Students Of Class Have Borrowed Books. Return Books First.";
cout<<endl;
file.close();
getch();
return;
}
}
if(borrowed=='n')
{
del:
file.close();
//deleting class directory
switch(cl)
{
case 1:switch(toupper(sec))
       {
case 'A': remove("oneA.dat");break;
case 'B': remove("oneB.dat");break;
case 'C': remove("oneC.dat");break;
case 'D': remove("oneD.dat");break;
case 'E': remove("oneE.dat");break;
case 'F': remove("oneF.dat");break;
       }
       break;
case 2:switch(toupper(sec))
       {
case 'A': remove("twoA.dat");break;
case 'B': remove("twoB.dat");break;
case 'C': remove("twoC.dat");break;
case 'D': remove("twoD.dat");break;
case 'E': remove("twoE.dat");break;
case 'F': remove("twoF.dat");break;
       }
       break;
case 3:switch(toupper(sec))
       {
case 'A': remove("thrA.dat");break;
case 'B': remove("thrB.dat");break;
case 'C': remove("thrC.dat");break;
case 'D': remove("thrD.dat");break;
case 'E': remove("thrE.dat");break;
case 'F': remove("thrF.dat");break;
       }
       break;
case 4:switch(toupper(sec))
       {
case 'A': remove("fouA.dat");break;
case 'B': remove("fouB.dat");break;
case 'C': remove("fouC.dat");break;
case 'D': remove("fouD.dat");break;
case 'E': remove("fouE.dat");break;
case 'F': remove("fouF.dat");break;
       }
       break;
case 5:switch(toupper(sec))
       {
case 'A': remove("fivA.dat");break;
case 'B': remove("fivB.dat");break;
case 'C': remove("fivC.dat");break;
case 'D': remove("fivD.dat");break;
case 'E': remove("fivE.dat");break;
case 'F': remove("fivF.dat");break;
       }
       break;
case 6:switch(toupper(sec))
       {
case 'A': remove("sixA.dat");break;
case 'B': remove("sixB.dat");break;
case 'C': remove("sixC.dat");break;
case 'D': remove("sixD.dat");break;
case 'E': remove("sixE.dat");break;
case 'F': remove("sixF.dat");break;
       }
       break;
case 7:switch(toupper(sec))
       {
case 'A': remove("sevA.dat");break;
case 'B': remove("sevB.dat");break;
case 'C': remove("sevC.dat");break;
case 'D': remove("sevD.dat");break;
case 'E': remove("sevE.dat");break;
case 'F': remove("sevF.dat");break;
       }
       break;
case 8:switch(toupper(sec))
       {
case 'A': remove("eigA.dat");break;
case 'B': remove("eigB.dat");break;
case 'C': remove("eigC.dat");break;
case 'D': remove("eigD.dat");break;
case 'E': remove("eigE.dat");break;
case 'F': remove("eigF.dat");break;
       }
       break;
case 9:switch(toupper(sec))
       {
case 'A': remove("ninA.dat");break;
case 'B': remove("ninB.dat");break;
case 'C': remove("ninC.dat");break;
case 'D': remove("ninD.dat");break;
case 'E': remove("ninE.dat");break;
case 'F': remove("ninF.dat");break;
       }
       break;
case 10:switch(toupper(sec))
       {
case 'A': remove("tenA.dat");break;
case 'B': remove("tenB.dat");break;
case 'C': remove("tenC.dat");break;
case 'D': remove("tenD.dat");break;
case 'E': remove("tenE.dat");break;
case 'F': remove("tenF.dat");break;
       }
       break;
case 11:switch(toupper(sec))
       {
case 'A': remove("eleA.dat");break;
case 'B': remove("eleB.dat");break;
case 'C': remove("eleC.dat");break;
case 'D': remove("eleD.dat");break;
case 'E': remove("eleE.dat");break;
case 'F': remove("eleF.dat");break;
       }
       break;
case 12:switch(toupper(sec))
       {
case 'A': remove("tweA.dat");break;
case 'B': remove("tweB.dat");break;
case 'C': remove("tweC.dat");break;
case 'D': remove("tweD.dat");break;
case 'E': remove("tweE.dat");break;
case 'F': remove("tweF.dat");break;
       }
       break;
}
cout<<"Deleted Class Directory Successfully."<<endl;
}
getch();
return;
}