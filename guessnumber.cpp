#include<iostream>

using namespace std;

int main()
{
	//declare a secret number and an input number
	int secret = 5680;
	int guess;

	//output question to user and input answer
	cout<<endl<<"try to find my secret number! "<<endl;
	cout<<"What is your guess?  "<<endl;
	cin>>guess;

	//create if then for testing ==
	if (secret==guess)
		cout<<"you guessed it!";
	else if (secret>guess)
		cout<<"you guessed too low!";
	else
		cout<<"you guessed too high!";

	cout<<endl;

	return 0;
}