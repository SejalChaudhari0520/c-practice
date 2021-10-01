#include<iostream>
using namespace std;
int main()
{
	/*"5) Write a Program to Check whether a year entered by user is Leap Year or not" */
	cout<<"enter a year in format yyyy"<<endl;
	int a;
	cin>>a;
	if(a%4==0)
	{
		cout<<"year is leap year"<<endl;
	}
	else
	{
		cout<<"year is not a leap year"<<endl;
	}
	return 0;
}
