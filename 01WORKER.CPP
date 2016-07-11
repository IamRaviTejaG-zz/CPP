/* Worker Wage Calculator */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class worker
{
	private :
	int wno;
	char wname[25];
	float whr,wrate,total;
	float calc()
	{
		return (whr*wrate);
	}
	public :
	void indata();
	void outdata();
};

void worker::indata()
{
	clrscr();
	cout<<"Enter worker no.: ";
	cin>>wno;
	cout<<"\nEnter worker name : ";
	gets(wname);
	cout<<"\nEnter time of work : ";
	cin>>whr;
	cout<<"\nEnter wage rate per hour : ";
	cin>>wrate;
	total=calc();
}

void worker::outdata()
{
	clrscr();
	cout<<"Worker no.: "<<wno<<endl;
	cout<<"Worker name : "<<wname<<endl;
	cout<<"Total wage earned : "<<total<<endl;
}

void main()
{
	worker w;
	w.indata();
	w.outdata();
	getch();
}