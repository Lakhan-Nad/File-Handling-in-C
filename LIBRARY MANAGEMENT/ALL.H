#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>



//students structure
struct student
{
char name[30];
int roll;
struct book
{
int yes;
char name[30];
int accession;
char idate[10];
char rdate[10];
}b1,b2;
};
//end of student structure

// structure of book
struct book
{
char name[30];
char author[30];
float price;
int avail;
int accession;
struct current
{
char name[30];
int roll;
int cla;
char sec;
char idate[10];
char rdate[10];
}c;
};
// end of book structure




#include"newclass.h"
#include"delclass.h"
#include"studnew.h"
#include"studsee.h"
#include"newbook.h"
#include"delbook.h"
#include"booksee.h"
#include"bookname.h"
#include"bookb.h"
#include"bookr.h"
#include"bookclas.h"
#include"details.h" 