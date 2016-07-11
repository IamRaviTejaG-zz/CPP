/* Linear Search */

#include<iostream.h>
#include<conio.h>

void main()
{
	int range[50];
	int ctr,search,pos;
	int N;
	clrscr();
	cout<<"Enter No. of elements in array: ";
	cin>>N;
	cout<<endl<<"Enter the elements: ";
	for (ctr=0;ctr<N;ctr++)
	{
		cout<<"\nValue "<<ctr+1<<" ";
		cin>>range[ctr];
	}
	cout<<"Enter the value to be searched for: ";
	cin>>search;
	pos=0;
	for (ctr=0;ctr<N;ctr++)
	{
		if (range[ctr]==search)
			pos=ctr+1;
	}
	if (pos>0)
		cout<<"The position of the searched element is: "<<pos;
	else
		cout<<"The element wasn't found.";
	getch();
}