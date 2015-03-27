#include<iostream>

using namespace std;

int main()
{
	//declare in room temp
	int rt;

	//take input for room temp
	cout<<endl<<" tell me the room temp as an integer between 1 and 100: ";
	cin>>rt;

	//write an if statement for temp>30
	if(rt > 30)
		cout<<"that is a rather hot room and you should consider going outside";

	//write an elseif test for temp>20
	else if(rt > 20)
		cout<<"your room is cold and you should put on a sweater";
	
	//write an else for remaining condidions
	else
		cout<<"your room is way too cold";
	
	cout<<endl;


	return 0;
}
