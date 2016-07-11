#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int range[100],i,j,T,N,x;
	clrscr();
	cout<<"Enter total no.of elements: ";
	cin>>N;
	cout<<"\n\nEnter the array elements: ";
	for (i=0;i<N;i++)
	{
		cout<<"\n\nAt Location "<<i+1<<": ";
		cin>>range[i];
	}
	for (i=1;i<N;i++)
	{
		T=range[i];
		j=i-1;
		while ((T<range[j])&&(j>0))
		{
			range[j+1]=range[j];
			j=j-1;
		}
		range[j+1]=T;
	}
	cout<<"\n\nThe sorted list is \n\n";
	for (i=0;i<N;i++)
		cout<<range[i]<<endl;
	getch();
}