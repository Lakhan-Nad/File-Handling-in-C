void newclass()
{
clrscr();
cout<<"                           Create A New Class Directory.                            "<<endl;
int cl; char sec;
cout<<"Enter Class(1 to 12): ";cin>>cl;cout<<endl;
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

//making class directory
ofstream file;
switch(cl)
{
case 1:switch(toupper(sec))
       {
case 'A': file.open("oneA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("oneB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("oneC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("oneD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("oneE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("oneF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 2:switch(toupper(sec))
       {
case 'A': file.open("twoA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("twoB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("twoC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("twoD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("twoE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("twoF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 3:switch(toupper(sec))
       {
case 'A': file.open("thrA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("thrB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("thrC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("thrD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("thrE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("thrF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 4:switch(toupper(sec))
       {
case 'A': file.open("fouA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("fouB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("fouC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("fouD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("fouE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("fouF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 5:switch(toupper(sec))
       {
case 'A': file.open("fivA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("fivB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("fivC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("fivD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("fivE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("fivF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 6:switch(toupper(sec))
       {
case 'A': file.open("sixA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("sixB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("sixC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("sixD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("sixE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("sixF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 7:switch(toupper(sec))
       {
case 'A': file.open("sevA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("sevB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("sevC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("sevD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("sevE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("sevF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 8:switch(toupper(sec))
       {
case 'A': file.open("eigA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("eigB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("eigC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("eigD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("eigE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("eigF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 9:switch(toupper(sec))
       {
case 'A': file.open("ninA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("ninB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("ninC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("ninD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("ninE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("ninF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 10:switch(toupper(sec))
       {
case 'A': file.open("tenA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("tenB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("tenC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("tenD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("tenE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("tenF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 11:switch(toupper(sec))
       {
case 'A': file.open("eleA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("eleB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("eleC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("eleD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("eleE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("eleF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
case 12:switch(toupper(sec))
       {
case 'A': file.open("tweA.dat",ios :: noreplace | ios :: binary);break;
case 'B': file.open("tweB.dat",ios :: noreplace | ios :: binary);break;
case 'C': file.open("tweC.dat",ios :: noreplace | ios :: binary);break;
case 'D': file.open("tweD.dat",ios :: noreplace | ios :: binary);break;
case 'E': file.open("tweE.dat",ios :: noreplace | ios :: binary);break;
case 'F': file.open("tweF.dat",ios :: noreplace | ios :: binary);break;
       }
       break;
}
if(file.fail())
{
cout<<"Class Directory Already Exists"<<endl;
}
else
{
cout<<"Class Directory Made Successfully"<<endl;
}
file.close();
getch();
return;
}