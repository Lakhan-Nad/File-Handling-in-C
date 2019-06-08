void bookname()
{
clrscr();
cout<<"                             Search A Book In Library.                            "<<endl;
char name[30];
cout<<"Enter Name of Book You Want To Check: ";gets(name);cout<<endl;
if(strlen(name)<=5){cout<<"Wrong Input"<<endl;getch();return;}
book b;
fstream booklist;
booklist.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate | ios :: nocreate);
if(booklist.fail())
{
cout<<"This Book's Data Does Not Exist";booklist.close();getch();return;
}
char found='n';
booklist.seekg(0);
while(!booklist.eof())
{
booklist.read((char*) &b, sizeof(b));
if(booklist.eof()){break;}
if(strcmpi(b.name,name)==0)
{
found='f';
cout<<"Accession No.: "<<b.accession<<endl;
cout<<"Book's Name: "<<b.name<<endl;
cout<<"Author: "<<b.author<<endl;
cout<<"Book's Price: "<<b.price<<endl;
if(b.avail==1)
{
cout<<"Book is Available"<<endl;
}
else
{
cout<<"Book is With: "<<endl;
cout<<b.c.name<<"  Roll: "<<b.c.roll<<endl;
cout<<"Class: "<<b.c.cla<<" Section: "<<(b.c.sec=toupper(b.c.sec))<<endl;
cout<<"Issue Date: "<<b.c.idate<<" Return Date: "<<b.c.rdate<<endl;
}
cout<<endl;
}
}
if(found=='n')
{
cout<<"This Book's Data Does Not Exist"<<endl;
booklist.close();
getch();
return;
}
booklist.close();
getch();
return;
}