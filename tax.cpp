#include<iostream>

using namespace std;

int main()
{
	//declare income
	float income;
	float rate;
	float tax;
	

	//take input for income
	cout<<endl<<"what is your taxable income? ";
	cin>>income;
	cout<<endl;
	//5 part if else
	if (income > 100000)
	{	
		tax = 20000 + (.40 * (income - 100000));
		rate = tax / income;
		cout<<"your marginal tax rate is "<<rate<<endl;
		cout<<"your approximate tax is "<<tax<<endl;
	}
	else if (income >= 75000)
	{	
		tax = 15000 + (.30 * (income - 75000));
		rate = tax / income;
		cout<<"your marginal tax rate is "<<rate;
		cout<<"your approximate tax is "<<tax<<endl;
	}

	else if (income >= 50000)
	{	
		tax = 10000 + (.25 * (income - 50000));
		rate = tax / income;
		cout<<"your marginal tax rate is "<<rate<<endl;
		cout<<"your approximate tax is "<<tax<<endl;
	}
	
	else if (income >= 25000)
	{	
		tax = 5000 + (.20 * (income - 25000));
		rate = tax / income;
		cout<<"your marginal tax rate is "<<rate<<endl;
		cout<<"your approximate tax is "<<tax<<endl;
	}
	else
	{	
		tax = (.15 * income);
		rate = tax / income;
		cout<<"your marginal tax rate is "<<rate<<endl;
		cout<<"your approximate tax is "<<tax<<endl;
	}
	cout<<endl;
	return 0;
}