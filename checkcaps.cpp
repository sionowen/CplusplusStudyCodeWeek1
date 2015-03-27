#include<iostream>

using namespace std;

int main()
{
	//input char
	char test;

	//consider taking an input
	cin>> test;

	//is char greater or equal to Z
	if (test >= 'A')
	{
		if (test <= 'Z')
			cout<<"this is a capital letter";
		else
			cout<<"this is not a capitol letter";
	}
	

	return 0;
}