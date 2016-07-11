#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class book
{
	private :
	int bno,n;
	char bname[30];
	float price,total;
	float cost(int n)
	{
		return (n*price);
	}
	public :
	void input();
	void display();
};

void book::input()
{
	clrscr();
	cout<<"Enter book no.: ";
	cin>>bno;
	cout<<"\nEnter book title : ";
	gets(bname);
	cout<<"\nEnter price per piece : ";
	cin>>price;
	cout<<"\nEnter no.of copies : ";
	cin>>n;
	total=cost(n);
}

void book::display()
{
	clrscr();
	cout<<"Book no.: "<<bno<<endl;
	cout<<"Book title : "<<bname<<endl;
	cout<<"Total bill : "<<total<<endl;
}

void main()
{
	book b;
	b.input();
	b.display();
	getch();
}