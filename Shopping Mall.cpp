#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int n,m,u,memo,i;
char date[20],pay[5];
char ans[5];
char iname[20];
int irate[10],icode[10],quantity[10],a;
int amt[10],b;
float dis[10],total[10],c;

void box()
{
	for (int m1=4;m1<=46;m1++)
	{
		gotoxy (4,m1);
		cout<<"*";
	}
	for (int m2=4;m2<=76;m2++)
	{
		gotoxy (m2,4);
		cout<<"*";
	}
	for (int m3=4;m3<=46;m3++)
	{
		gotoxy (76,m3);
		cout<<"*";
	}
	for (int m4=76;m4>=4;m4--)
	{
		gotoxy (m4,46);
		cout<<"*";
	}
	for (int m5=5;m5<=75;m5++)
	{
		gotoxy (m5,8);
		cout<<"-";
	}
	gotoxy (31,6);
	cout<<"SUPER SHOPPING MALL";
	gotoxy (6,10);
}

void intro()
{
	gotoxy (6,10);
	cout<<"Enter Date : ";
	gets(date);
	gotoxy (6,12);
	cout<<"Enter number of items you want to bill : ";
	cin>>m;
	gotoxy (6,14);
	cout<<"Select your Payment Method :";
	gotoxy (6,16);
	cout<<"CASH / VISA / CARD";
	gotoxy (6,18);
	cout<<"Enter your choice : ";
	gets(pay);
}

void sales()
{
	for (a=1;a<=m;a++)
	{
		clrscr();
		box();
		gotoxy (6,12);
		cout<<"Enter Item Name : ";
		cin>>iname[a];
		gotoxy (6,14);
		cout<<"Enter Item Rate : ";
		cin>>irate[a];
		gotoxy (6,16);
		cout<<"Enter Quantity : ";
		cin>>quantity[a];
	}
}

void display()
{
	for (int n1=4;n1<=46;n1++)
	{
		gotoxy (4,n1);
		cout<<"*";
	}
	for (int n2=4;n2<=76;n2++)
	{
		gotoxy (n2,4);
		cout<<"*";
	}
	for (int n3=4;n3<=46;n3++)
	{
		gotoxy (76,n3);
		cout<<"*";
	}
	for (int n4=76;n4>=4;n4--)
	{
		gotoxy (n4,46);
		cout<<"*";
	}
	for (int n5=5;n5<=75;n5++)
	{
		gotoxy (n5,8);
		cout<<"-";
	}
	for (int n6=5;n6<=75;n6++)
	{
		gotoxy (n6,12);
		cout<<"-";
	}
	for (int n7=5;n7<=75;n7++)
	{
		gotoxy (n7,14);
		cout<<"-";
	}
	for (int n8=5;n8<=75;n8++)
	{
		gotoxy (n8,42);
		cout<<"-";
	}
	for (int n9=15;n9<=39;n9++)
	{
		gotoxy (13,n9);
		cout<<"|";
	}
	for (int n10=15;n10<=39;n10++)
	{
		gotoxy (27,n10);
		cout<<"|";
	}
	for (int n11=15;n11<=39;n11++)
	{
		gotoxy (42,n11);
		cout<<"|";
	}
	for (int n12=15;n12<=39;n12++)
	{
		gotoxy (52,n12);
		cout<<"|";
	}
	for (int n13=15;n13<=39;n13++)
	{
		gotoxy (65,n13);
		cout<<"|";
	}
	for (int n14=5;n14<=75;n14++)
	{
		gotoxy (n14,40);
		cout<<"-";
	}
	gotoxy (31,6);
	cout<<"SUPER SHOPPING MALL";
	gotoxy (6,10);
	cout<<"Memo No.: ";
	gotoxy (33,10);
	cout<<"RETAIL INVOICE";
	gotoxy (60,10);
	cout<<"Date : ";
	gotoxy (6,13);
	cout<<"Sl.No.";
	gotoxy (16,13);
	cout<<"Item Code";
	gotoxy (30,13);
	cout<<"Item Name";
	gotoxy (45,13);
	cout<<"Rate";
	gotoxy (55,13);
	cout<<"Quantity";
	gotoxy (68,13);
	cout<<"Amount";
	gotoxy (60,44);
	cout<<"Total = ";
	gotoxy (57,41);
	cout<<"Discount = ";
	gotoxy (6,44);
	cout<<"Payment By : ";
}

void showinfo()
{
	randomize();
	amt[b]=irate[a]*quantity[a];
	if (amt[b]<1000)
	{
		dis[c]=amt[b]*(5/100);
	}
	if (amt[b]>=1000|amt[b]<=2000)
	{
		dis[c]=amt[b]*0.1;
	}
	if (amt[b]>2000)
	{
		dis[c]=amt[b]*0.2;
	}
	total[c]=amt[b]-dis[c];
	for (int u=0;u<=m*2;u+=2)
	{
		gotoxy (19,44);
		cout<<pay;
		gotoxy (67,10);
		cout<<date;
		gotoxy (17,10);
		cout<<random(memo);
		gotoxy (8,15+u);
		cout<<i;
		gotoxy (19,15+u);
		cout<<random(icode[a]);
		gotoxy (29,15+u);
		cout<<iname[a];
		gotoxy (46,15+u);
		cout<<irate[a];
		gotoxy (58,15+u);
		cout<<quantity[a];
		gotoxy (70,15+u);
		cout<<amt[b];
		gotoxy (70,41);
		cout<<dis[c];
		gotoxy (70,44);
		cout<<total[c];
	}
}

void main()
{
	clrscr();
	box();
	intro();
	clrscr();
	box();
	sales();
	clrscr();
	display();
	showinfo();
	getch();
}