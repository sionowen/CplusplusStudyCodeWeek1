#include<iostream>

using namespace std;

int main()
{
	//declare two variables
	int mysalary;
	int yoursalary;

	//take inputs for variables
	cout<<endl<<"enter my salary: ";
	cin>>mysalary;
	cout<<"enter your salary: ";
	cin>>yoursalary;

	//write if statement that prints either my salary is larger or your salary is larger
	if (mysalary > yoursalary)
	{
		cout<<endl<<"I am richer and my salary is "<<mysalary<<endl;
	}
	else
	{
		cout<<endl<<"you are richer than I am and your salary is "<<yoursalary<<endl;
	}

	return 0;
}