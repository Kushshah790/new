#include<iostream>
using namespace std;
main()
{
	int vehicle1, vehicle2;
	cout<<"Enter a speed of vehicle1: ";
	cin>>vehicle1;
	cout<<"Enter a speed of vehicle2: ";
	cin>>vehicle2;
	if(vehicle1>vehicle2)
	{
		cout<<"vehicle 1 will overtake vehicle2";
	
	 }
	 else if(vehicle2>vehicle1)
	 {
	 	cout<<"vehicle 2 will overtake vehicle 1";
	  }
	  else
	  cout<<"Vehicle 1 and Vehicle 2 are ruunig same";
}