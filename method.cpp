#include<iostream>
using namespace std;
class student
{
	public: // Access modifiers
		int id;        // data member
		string name;
		string subject;
	
	void inpudata()    // member function(method)
	{
		cout<<"Enter the ID:";
		cin>>id;
		cout<<"\n Enter the name:";
		cin>>name;
		cout<<"\n Enter the subject:";
		cin>>subject;
	}
	void displaydate()
	{
		cout<<"\n student ID:"<<id;
		cout<<"\n student name:"<<name;
		cout<<"\n student subject:"<<subject;
	}
};
class Faculty
{
	public:
		int id;
		string name;
		string department;
		
		void inputdata()
		{
			cout<<"\n Enter the Faculty ID:";
			cin>>id;
			cout<<"\n Enter the Faculty name:";
			cin>>name;
			cout<<"\n Enter the Faculty department:";
			cin>>department;
		}
		void displaydata()
		{
			cout<<"\n Faculty ID:"<<id;
			cout<<"\n Faculty name:"<<name;
			cout<<"\n Faculty department:"<<department;
		}
};
main()
{
	// object creation
	student sobj;
	Faculty fobj;
	sobj.inpudata();
	sobj.displaydate();
	
	fobj.inputdata();
	fobj.displaydata();
}