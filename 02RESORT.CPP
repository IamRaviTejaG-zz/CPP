/* Resort Expense Calculator */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class resort
{
	private :
	int rno;
	char cname[30];
	float chr,dayrate,total,a;
	float compute()
	{
		a=chr*dayrate;
		if (a>11000)
			return (1.02*a);
		else
			return (a);
	}
	public :
	void getinfo();
	void display();
};

void resort::getinfo()
{
	clrscr();
	cout<<"Enter room no.: ";
	cin>>rno;
	cout<<"\nEnter customer name : ";
	gets(cname);
	cout<<"\nEnter no.of days of stay : ";
	cin>>chr;
	cout<<"\nEnter per day rate : ";
	cin>>dayrate;
	total=compute();
}

void resort::display()
{
	clrscr();
	cout<<"Room no.: "<<rno<<endl;
	cout<<"Customer name : "<<cname<<endl;
	cout<<"Total bill : "<<total<<endl;
}

void main()
{
	resort r;
	r.getinfo();
	r.display();
	getch();
}