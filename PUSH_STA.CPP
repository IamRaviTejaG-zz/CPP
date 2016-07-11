#include<iostream.h>
#include<conio.h>
#include<process.h>

int push(int[], int&, int);
void display(int [], int);

const int size = 50;
void main()
{
	int stack[size], item, top=-1, res;
	char ch='y';
	clrscr();
	while (ch=='y'||ch=='Y')
	{
		cout<<"\nEnter ITEM for insertion:";
		cin>>item;
		res=push(stack,top,item);
		if (res==-1)
		{
			cout<<"OVERFLOW !!! ABORTING !!\n";
			exit(1);
		}
		cout<<"\nThe stack is now: \n";
		display(stack, top);
		cout<<"\nDo you want to insert more elements ? (y/n): ";
		cin>>ch;
	}
}
int push (int stack[], int &top, int ele)
{
	if (top==size-1)
	return -1;
	else
	{
		top++;
		stack[top]=ele;
	}
	return 0;
}
void display (int stack[], int top)
{
	cout<<stack[top]<<"<--"<<endl;
	for (int i=top-1;i>=0;i--)
		cout<<stack[i]<<endl;
}