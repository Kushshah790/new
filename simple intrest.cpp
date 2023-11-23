#include<iostream>
using namespace std;
main()
{
	float p,r,n,si;
	cout<<"Enter the prinicipal amount: ";
	cin>>p;
	cout<<"Enter the rate: ";
	cin>>r;
	cout<<"Enter the time: ";
	cin>>n;
	
	si=(p*r*n)/100;
	cout<<"The simple interest is "<<si;
}