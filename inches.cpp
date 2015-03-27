#include<iostream>

//namespaces
using namespace std;
int main()
{
	//declare 3 variables
	int inches;
	int feet;
	int yards;

	//take input for inches
	cout<<endl<<" enter a distance in inches: ";
	cin>>inches;
	
	//computation for redistributing inches into feet and yards
	feet = inches / 12;
	inches = inches % 12;
	yards = feet / 3;
	feet = feet % 3;

	//output result and have a snack
	cout<<"distance is: "<<yards<<" : "<<feet<<" : "<<inches<<endl;




	return 0;
}