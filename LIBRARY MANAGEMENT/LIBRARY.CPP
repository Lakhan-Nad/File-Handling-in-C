/*
This Library Management System 
Allows You To Manage Books And
Details Of Students Borrowing Books
It Is Made By
Nitin and Ram
*/
#include"all.h"
void main()
{
begin:
clrscr();
cout<<"Welcome To Library Management"<<endl;
cout<<"Choose Action:(Enter 0 to 12)"<<endl;
cout<<"1. Create A New Class Directory."<<endl;
cout<<"2. Register A New Student In A Class."<<endl;
cout<<"3. Add A New Book To Library."<<endl;
cout<<"4. Issue A Book From Library."<<endl;
cout<<"5. Return A Book To Library."<<endl;
cout<<"6. See Details Of A Particular Student."<<endl;
cout<<"7. See Details Of A Particular Book Of Library."<<endl;
cout<<"8. Search A Book In Library."<<endl;
cout<<"9. Get Details Of All The Students Of A Particular Class."<<endl;
cout<<"10. See Overall Details Of Library Management System."<<endl;
cout<<"11. Remove A Particular Book From Library."<<endl;
cout<<"12. Delete A Class Directory."<<endl;
cout<<"0. Exit From Library Management System."<<endl;
int act;
cin>>act;
switch(act)
{
case 1:newclass();
       goto begin;
case 2:studnew();
       goto begin;
case 3:newbook();
   	   goto begin;
case 4:bookb();
       goto begin;
case 5:bookr();
       goto begin;
case 6:studsee();
       goto begin;
case 7:booksee();
       goto begin;
case 8:bookname();
       goto begin;
case 9:bookclas();
       goto begin;
case 10:details();
        goto begin;
case 11:delbook();
        goto begin;
case 12:delclass();
        goto begin;
case 0:cout<<"                              THANK YOU                        "<<endl;
       sleep(1);
       exit(0);
default:cout<<"Choose A Valid Option"<<endl;
        sleep(2);
        goto begin;		
}
}