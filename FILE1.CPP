#include<fstream.h>
void main()
{
	ofstream filout;
	filout.open("marks.dat", ios::out);
	char ans='y';
	int rollno;
	float marks;
	while (ans=='y'||ans=='Y')
	{
		cout<<"\nEnter roll no.: ";
		cin>>rollno;
		cout<<"\nEnter marks: ";
		cin>>marks;
		filout<<rollno<<"\n"<<marks<<"\n";
		cout<<"\nWant to enter more records ? (y/n): ";
		cin>>ans;
	}
	filout.close();
}