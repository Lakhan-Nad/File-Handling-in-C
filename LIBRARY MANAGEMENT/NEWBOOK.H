void newbook()
{
clrscr();
cout<<"                            Add A New Book To Library.                        "<<endl;
//check if booklist.dat exists
fstream bookex;
bookex.open("booklist.dat", ios :: binary | ios :: noreplace | ios :: ate);
bookex.close();
// end of checking

fstream booklist;
booklist.open("booklist.dat",ios :: in | ios :: out | ios :: binary | ios :: ate);

//entry of book details begin
book b;

cout<<"Enter Details of New Book:"<<endl;
cout<<"Enter Accession No. of Book: ";cin>>b.accession;cout<<endl;
if(b.accession<=0){cout<<"Wrong Input"<<endl;booklist.close();getch();return;}
cout<<"Enter Name of Book:";gets(b.name);cout<<endl;
if(strlen(b.name)<=5){cout<<"Wrong Input"<<endl;booklist.close();getch();return;}
cout<<"Enter Author of Book:";gets(b.author);cout<<endl;
if(strlen(b.author)<=3){cout<<"Wrong Input"<<endl;booklist.close();getch();return;}
cout<<"Enter Price of Book:";cin>>b.price;cout<<endl;
if(b.price<=0){cout<<"Wrong Input"<<endl;booklist.close();getch();return;}
b.avail=1;
strcpy(b.c.name," ");
strcpy(b.c.rdate," ");
strcpy(b.c.idate," ");
b.c.cla=0;
b.c.sec=NULL;
b.c.roll=0;
//entry of book details complete

book dt;
int pos=0;
char found='n';
booklist.seekg(0,ios :: beg);

while(!booklist.eof())
{
pos=booklist.tellg();
booklist.read((char*) &dt, sizeof(dt));
if(booklist.eof())
break;
if(dt.accession==b.accession)
{
found='y';
cout<<"Book With Same Accession No. Exists. Cannot Modify"<<endl;
booklist.seekg(0,ios :: end);
break;
}
}

if(found=='n')
{
booklist.clear();
booklist.seekg(pos,ios :: beg);
booklist.write((char*) &b, sizeof(b));
cout<<"Book Added To Library Successfully."<<endl;
}
booklist.close();
getch();
return;
}
