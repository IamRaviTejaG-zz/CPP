#include<iostream.h>
#include<conio.h>
#include<process.h>

struct Node
{
	int info;
	Node *next;
}*start, *newptr, *save, *ptr;

Node *Create_New_Node (int);
void Insert_Beg (Node*);
void Display (Node*);

void main()
{
	start = NULL;
	int inf;	char ch='y';
	while (ch=='y'||ch=='Y')
	{
		clrscr();
		cout<<"\nEnter INFOrmation for the new node...";
		cin>>inf;
		cout<<"\nCreating new node. Press enter to continue..."; 
		getch();
		newptr=Create_New_Node(inf);
		if (newptr!=NULL)
		{	cout<<"\n\nNew node created successfully. Press enter to continue";
		getch();
		}
		else
		{
			cout<<"\nCannot create new node!!! Aborting!!\n";
			getch();
			exit(1);
		}
		cout<<"\n\nNow inserting this node in the beginning of list...\n";
		cout<<"press enter to continue...";
		getch();
		Insert_Beg(newptr);
		cout<<"\nNow the list is:\n";
		Display(start);
		cout<<"\nPress Y to enter more nodes, N to exit...\n";
		cin>>ch;
	}
}
Node* Create_New_Node (int n)
{	ptr=new Node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Insert_Beg (Node* np)
{	if (start=NULL)		start=np;
	else
	{
		save=start;
		start=np;
		np->next=save;
	}
}
void Display (Node* np)
{	while (np!=NULL)
	{
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!\n";
}
		