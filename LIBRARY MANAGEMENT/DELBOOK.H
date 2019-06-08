void delbook()
{
clrscr();
cout<<"                         Remove A Particular Book From Library.                                "<<endl;
int acc;
cout<<"Enter Accession No. of Book You Want To Delete: ";cin>>acc;cout<<endl;
if(acc<=0){cout<<"Wrong Input"<<endl;getch();return;}
book b;
fstream booklist;
booklist.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);
if(booklist.fail())
{
cout<<"This Book's Data Does Not Exist";booklist.close();getch();return;
}

//create temp
fstream tempex;
tempex.open("temp.dat", ios :: binary | ios :: noreplace | ios :: ate);
tempex.close();
fstream temp;
temp.open("temp.dat",ios :: in | ios :: out | ios :: binary | ios :: ate);
//temp created

char found='n';
booklist.seekg(0);
while(!booklist.eof())
{
booklist.read((char*) &b, sizeof(b));
if(booklist.eof()){break;}
if(b.accession==acc)
{
found='f';
//deletion begins
cout<<"Book's Name: "<<b.name<<endl;
if(b.avail==0)
{
cout<<"Cannot Delete This Book."<<endl;
cout<<"Book is With: "<<endl;
cout<<b.c.name<<"  Roll: "<<b.c.roll<<endl;
cout<<"Class: "<<b.c.cla<<" Section: "<<(b.c.sec=toupper(b.c.sec))<<endl;
cout<<"Issue Date: "<<b.c.idate<<" Return Date: "<<b.c.rdate<<endl;
temp.write((char*) &b, sizeof(b));
}
else
{
cout<<"Confirm Deletion(Y/N): ";char op;op=getche();cout<<endl;
switch(toupper(op))
{
case 'Y':cout<<"Book's Data Deleted Successfully."<<endl;break;
case 'N':temp.write((char*) &b, sizeof(b));cout<<"Book Not Deleted."<<endl;break;
default:cout<<"Wrong Choice. Data Not Deleted"<<endl;temp.write((char*) &b, sizeof(b));break;
}
}
}
//deletion ends
else
{
temp.write((char*) &b, sizeof(b));
}
}
if(found=='n')
{
cout<<"This Book's Data Does Not Exist"<<endl;
}
temp.close();
booklist.close();
remove("booklist.dat");
rename("temp.dat","booklist.dat");
// remove booklist.dat if its empty
fstream bookdel;
bookdel.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);
book bd;
char ch='n';
bookdel.seekg(0);
while(!bookdel.eof())
{
bookdel.read((char*) &bd, sizeof(bd));
if(bookdel.eof()){break;}
ch='y';break;
}
bookdel.close();
if(ch=='n')
{
remove("booklist.dat");
}
getch();
return;
}