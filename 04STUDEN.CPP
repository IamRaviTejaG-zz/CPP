#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
	private :
	int rno;
	char sname[25];
	float e,m,c,p,i,tot,avg;
	public :
	void getinfo();
	void showinfo();
	void calc();
};

void student::getinfo()
{
	cout<<"Enter roll no. : ";
	cin>>rno;
	cout<<"\nEnter name : ";
	gets(sname);
	cout<<"\nEnter marks secured in 5 subjects : ";
	cin>>e>>m>>c>>p>>i;
}

void student::calc()
{
	tot=e+m+c+p+i;
	avg=tot/5;
}

void student::showinfo()
{
	clrscr();
	cout<<"Name : "<<sname<<endl;
	cout<<"Roll No. : "<<rno<<endl;
	cout<<"Total Marks Scored : "<<tot<<endl;
	cout<<"Average Marks Scored : "<<avg<<endl;
}

void main()
{
	clrscr();
	student s;
	s.getinfo();
	s.calc();
	s.showinfo();
	getch();
}
