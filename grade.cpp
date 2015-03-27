#include<iostream>

using namespace std;

int main()
{
	//declare variable score
	int score;

	//take input for score
	cout<<endl<<"please input your score ";
	cin>>score;

	//create a long if statement for each possible grade
	if (score>=90)
		cout<<'a';
	else if(score>=80)
		cout<<'b';
	else if(score>=70)
		cout<<'c';
	else if(score>=60)
		cout<<'d';
	else
		cout<<'f';

	cout<<endl;


	return 0;
}