#include<iostream>


using namespace std;


int main()
{
	//declare int 
	int num;
	int test;
    int N5;
    int N5test;

	//take input for int
	cout<<endl<<"enter a number: ";
	cin>>num;
	test = num % 5;
    N5 = num / 5;
    N5test = N5 % 5;
	//calculate if number is a fraction
	if (test == 0)
        {
            cout<<"5 is a factor of this number"<<endl;
            if (N5test == 0)
                cout<<"one fifth of "<<num<<" has 5 as one of its factors";
            else
                cout<<"one fifth of "<<num<<" does not have 5 as one of its factors";
        }

	else
		cout<<"5 is not a factor of this number";
	
	cout<<endl;
	return 0;
}