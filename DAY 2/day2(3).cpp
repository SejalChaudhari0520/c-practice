#include<iostream>
using namespace std;
int main()
{
	/*3) Write a Program to Find Largest Number Among Two Numbers entered by users */
	cout<<"enter two numbers"<<endl;
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<"the number "<<a<<" is greater than "<<b<<endl;
	}
	else
	{
		cout<<"the number "<<a<<" is smaller than "<<b<<endl;
	}
	return 0;
}
