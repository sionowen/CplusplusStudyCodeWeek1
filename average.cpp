#include<iostream>

using namespace std;

int main()
{
	//declare 5 variables 1 test and 1 threshold
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	float average;
	int threshold = 60;

	//take inputs for all 5 variables
	cout<<endl<<"enter grade 1: ";
	cin>>a1;
	cout<<endl<<"enter grade 2: ";
	cin>>a2;
	cout<<endl<<"enter grade 3: ";
	cin>>a3;
	cout<<endl<<"enter grade 4: ";
	cin>>a4;
	cout<<endl<<"enter grade 5: ";
	cin>>a5;
	cout<<endl;
	//define 6th variable average
	average = (a1 + a2 + a3 + a4 + a5) / 5;
	cout<<average;
	cout<<endl;
	//test for test >= threshhold
	if (average < threshold)
		cout<<"the average grade is below a passing grade";
	else
		cout<<"most of your students are passing";
	cout<<endl;

	return 0;
}