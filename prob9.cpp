#include<iostream>

using namespace std;

int main(int x,const char *args[])
{
	int a;
	a = 10;

	cout<<endl<<"Welcome "<<args[1]<<endl<<endl;

	cout<<"this is what happens when you use a preincrement operation three times. "<< endl;
	cout<<++a<<endl;
	cout<<++a<<endl;
	cout<<++a<<endl;

	cout<<"this is what happens when you use a postincrement operation three times. "<<endl;
	cout<<a++<<endl;
	cout<<a++<<endl;
	cout<<a++<<endl;

	return 0;
}
