#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class item
{
	private :
	int icode,quantity;
	char iname[25];
	float price,offer,dis,total;
	float getoffer(int quantity)
	{
		if (quantity<=50)
			offer=0;
		else if (quantity>50&&quantity<=100)
			offer=(0.05*total);
		else
			offer=(0.1*total);
		return (offer);
	}
	public :
	void getstock();
	void showitem();
};

void item::getstock()
{
	clrscr();
	cout<<"Enter Itemcode : ";
	cin>>icode;
	cout<<"\nEnter Item Name : ";
	gets(iname);
	cout<<"\nEnter Price Per Piece : ";
	cin>>price;
	cout<<"\nEnter Quantity : ";
	cin>>quantity;
	float a=(price*quantity);
	dis=getoffer(quantity);
	total=a-dis;
}

void item::showitem()
{
	clrscr();
	cout<<"Item Code : "<<icode<<endl;
	cout<<"Item Name : "<<iname<<endl;
	cout<<"Total Bill : "<<total<<endl;
}

void main()
{
	clrscr();
	item i;
	i.getstock();
	i.showitem();
	getch();
}