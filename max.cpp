#include<iostream>

using namespace std;

int main()
{
	//declare three variables
	int a, b, c;

	//take three inputs to fill variables
	cout<<endl<<"input three integers ";
	cin>>a>>b>>c;

	//if a>b with nested test for a>c
	if (a > b)
	{
		if (a > c)
		{
			cout<<"a is the max"<<endl;
		}
		else
			cout<<"c is the max"<<endl;
	}
	//if b>a with nested if b>c test
	else if(b > a)
	{
		if(b > c)
		{
			cout<<"b is the max"<<endl;
		}
		else
			cout<<"c is the max"<<endl;
	}
	cout<<endl;

	


	

	return 0;
}