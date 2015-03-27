#include<iostream>

//namespaces
using namespace std;

int main()
{

	// declare 4 inputs for 2 locations and 2 times
	float p1;
	float p2;
	float t1;
	float t2;

	//take inputs from user
	cout<<endl<<"Please input two points: ";
	cin>>p1>>p2;
	cout<<"please enter two times in hours: ";
	cin>>t1>>t2;
	
	//calculate and output
	cout<<"the velocity is: "<<(p2 - p1) / (t2 - t1)<<endl;


	return 0;
}