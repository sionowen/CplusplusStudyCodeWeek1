#include<iostream>

using namespace std;

int main()
{
	//declare a secret letter and an input letter
	char secret = 'j';
	char guess;

	//output question to user and input answer
	cout<<endl<<"try to find my secret letter! "<<endl;
	cout<<"What is your guess?  "<<endl;
	cin>>guess;

	//create if then for testing ==
	if (secret==guess)
		cout<<"you guessed it!";
	else if (secret<guess)
		cout<<"you guessed too low!";
	else
		cout<<"you guessed too high!";

	cout<<endl;

	return 0;





}