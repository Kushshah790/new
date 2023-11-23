#include<iostream>
using namespace std;
class company
{
	public:
	int id;
	string name;
	string turnover;
	string location;
	
	void inputdata()
	{
		cout<<"Enter the id:";
		cin>>id;
		cout<<"\n Enter the name:";
		cin>>name;
		cout<<"\n Enter the turnover:";
		cin>>turnover;
		cout<<"\n Enter the location:";
		cin>>location;
	}
	void displaydata()
	{
		cout<<"\n company ID:"<<id;
		cout<<"\n company name:"<<name;
		cout<<"\n company turnover:"<<turnover;
		cout<<"\n company location:"<<location;
	}
};
class employee 
{
	public:
	int id;
	string name;
	string department;
	string salary;
	
	void inputdata()
	{
		cout<<"Enter the ID:";
		cin>>id;
		cout<<"\n Enter the name:";
		cin>>name;
		cout<<"\n Enter the department:";
		cin>>department;
		cout<<"\n Enter the salary:";
		cin>>salary;
	}
	void displaydata()
	{
		cout<<"\n employee id:"<<id;
		cout<<"\n employee name:"<<name;
		cout<<"\n employee department:"<<department;
		cout<<"\n employee salary:"<<salary;
	}
};
main()
{
	company cobj;
	employee eobj;
	cobj.inputdata();
	cobj.displaydata();
	
	eobj.inputdata();
	eobj.displaydata();
}