#include<iostream>

using namespace std;

int main()
{
float balance;
float interest;
int time;
double workrate;
cout<<"tell me your account balance"<<endl;
cin>>balance;
cout<<"what is your interest rate"<<endl;
cin>>interest;
cout<< "for how many months will your money be compounding?" <<endl;
cin>>time;
workrate= (time / 12) * (interest /100) +1;
cout<< "your total is " <<balance * workrate<<endl;

return 0;
}
