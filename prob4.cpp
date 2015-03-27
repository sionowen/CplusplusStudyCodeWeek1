//preproc reqs
#include<iostream>
//namespaces
using namespace std;
int main()
{
	//declare two inputs
	float current;
	float resistance;

	//take two inputs
	cout<<endl<<"what is the current: ";
	cin>>current;
	cout<<"what is the resistance: ";
	cin>>resistance;

	//print the multiplied outcome
	cout<<"this is the Voltage: "<<current * resistance<<endl;
	return 0;



}