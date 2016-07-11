#include<iostream.h>
#include<conio.h>
void main()
{
	int rang1[100],rang2[100],rang3[200];
	int M,N,i,j,k,T;
	clrscr();
	cout<<"Enter your first array length: ";
	cin>>M;
	cout<<"Enter your second array length: ";
	cin>>N;
	cout<<"Enter sorted elements of Array 1: ";
	for (i=0;i<M;i++)
	{
		cin>>rang1[i];
	}
	cout<<"\n\nEnter sorted elements of Array 2: ";
	for (j=0;j<N;j++)
	{
		cin>>rang2[j];
	}
	i=0;
	j=0;
	k=0;
	while((i<M)&&(j<N))
	{
		if (rang1[i]<rang2[j])
		{
			rang3[k]=rang1[i];
			k=k+1;
			i=i+1;
		}
		else
		{
			rang3[k]=rang2[j];
			k=k+1;
			j=j+1;
		}
	}
	while (i<=M)
	{
		rang3[k]=rang1[i];
		k=k+1;
		i=i+1;
	}
	while (j<=N)
	{
		rang3[k]=rang2[j];
		k=k+1;
		j=j+1;
	}
	cout<<"\n\nThe resulted output is as follows: \n\n";
	T=M+N;
	for (i=0;i<T;i++)
		cout<<rang3[k]<<endl;
	getch();
}