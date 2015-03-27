//preproc reqs
#include<iostream>
//namespaces
using namespace std;
int main()
{
	//declare const for seconds per hour 3600 
	const int SECONDS_PER_HOUR = 3600;
	float seconds;

	//input seconds
	cout<<endl<<"please input seconds";
	cin>>seconds;

	//output and calculation
	cout<<"hours : "<<seconds / SECONDS_PER_HOUR<<endl;



	return 0;
}