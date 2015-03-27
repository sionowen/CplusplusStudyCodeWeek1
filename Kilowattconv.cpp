//preproc rec
#include<iostream>
//namespaces
using namespace std;

//do a backflip

int main()
{
	//declare double for kilowatt input and declare int for conversion rate of 3600000
	double kilowatt;
	int conversion=3600000;

	//ask for input for kilowatt
	cout<<endl<<"input energy in Kilowatts: ";
	cin>>kilowatt;

	//print and calculate joule equiv
	cout<<"your energy in joules equals: "<<kilowatt * conversion<<endl;

return 0;
}