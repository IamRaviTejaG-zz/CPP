#include<iostream.h>
#include<conio.h>
#include<process.h>
int insert(int [], int);
void display (int [], int, int);
const int size=50;
int queue[size], front=-1, rear=-1;

void main()
{
	int item, res;
	char ch=='y';
	clrscr();
	while (ch=='y'||ch=='Y')
	{
		cout<<"\nEnter item for insertion: ";
		cin>>item;
		res=insert(queue, item);
		if (res==-1)
		{
			cout<<"OVERFLOW !! ABORTING !! \n";
			exit(1);
		}
		cout<<"Now the queue front to rear is. \n";
		display (queue,front,rear);
		cout<<"Want to insert more elements? (y/n): ";
		cin>>ch;
	}
}
int insert(int queue[], int ele)
{
	if (rear==size-1) return -1;
	else if (rear==-1)
	{
		front=rear=0;
		queue[rear]=ele;
	}
	else
	{
	rear++;
	queue[rear]=ele;
	}
	return 0;
}
void display (int queue[], int front, int rear)
{
	if (front==-1) return;
	for (int i=front;i<rear;i++)
		cout<<queue[i]<<"<-\t";
	cout<<queue[rear]<<endl;
}