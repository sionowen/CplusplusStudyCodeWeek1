//preprocessor req
#include<iostream>
//namespaces
using namespace std;
int main()
{
	//declare and then take two inputs for length and width
	float length;
	float width;
	cout<<endl<<"enter length: ";
	cin>>length;
	cout<<"now enter width: ";
	cin>>width;

	//output area inside of print
	cout<<"this is the area: "<<length * width<<endl;

	//output perimeter inside of second print
	cout<<"this is the perimeter: "<<(length + width) * 2<<endl;

	return 0;

}