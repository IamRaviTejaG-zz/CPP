#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream fout("student");
	char name[30], ch;
	float marks=0.0;
	for (int i=0; i<5;i++)
	{
		cout<<"Student"<<i+1<<":\tName: ";
		cin.get(name,30);
		cout<<"\t\tMarks: ";
		cin>>marks;
		cin.get(ch);
		fout<<name<<"\n"<<marks<<"\n";
	}
	fout.close();
	ifstream fin("student")
	fin.seekg(0);
	cout<<"\n";
	for (i=0;i<5;i++)
	{
		fin.get(name,30);
		fin.get(ch);
		fin>>marks;
		fin.get(ch);
		cout<<"Student name: "<<name;
		cout<<"\nMarks: "<<marks;
	}
	fin.close();
	return 0;
}