/* Bubble Sort */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int array[8]={25,57,48,37,12,92,86,33};
void bubble(int a[], int N);

void bubble (int a[], int N)
{
	int i,j,temp;
	for (i=0;i<N;i++)
	{
		for (j=0;j<N-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	getch();
}

void main()
{
	int i;
	putchar ('\n');
	cout<<"Unsorted elements \n";
	for (i=0;i<8;i++)
	{
		cout<<array[i]<<endl;
	}
	bubble (array,8);
	cout<<endl;
	cout<<"Sorted elements \n";
	for (i=0;i<8;i++)
		cout<<array[i]<<"\n";
	getch();
}
