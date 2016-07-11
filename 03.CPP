#include<iostream.h>
#include<conio.h>

void main()
{
	int range[100],loc,lowest,T,N,i,j,x;
	clrscr();
	cout<<"Enter no.of elements in your array: ";
	cin>>N;
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0;i<N;i++)
	{
		cout<<"\nAt location "<<i+1<<": ";
		cin>>range[i];
	}
	for (i=0;i<N-1;i++)
	{
		lowest=range[i];
		loc=i;
		for (j=i+1;j<N;j++)
		{
			if (lowest>range[j])
			{
				loc=j;
				lowest=range[j];
			}
		}
		T=range[i];
		range[i]=range[loc];
		range[loc]=T;
	}
	cout<<endl<<"The sorted list is: \n"<<endl;
	for (i=0;i<N;i++)
		cout<<range[i]<<"\n"<<endl;
	getch();
}