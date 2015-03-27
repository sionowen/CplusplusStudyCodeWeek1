// preproc reqs
#include<iostream>

//namespaces
using namespace std;

int main()
{
	//declare int time
	int time;

	//take input for time
	cout<<endl<<"Enter your time: ";
	cin>>time;

	//write three seperate cout with relational operators involving time and 12
	cout<<"is time>12? "<<(time > 12? "true" : "false")<<endl;
	cout<<"is time<12? "<<(time < 12? "true" : "false")<<endl;
	cout<<"is time==12? "<<(time == 12? "true" : "false")<<endl;


	return 0;
}