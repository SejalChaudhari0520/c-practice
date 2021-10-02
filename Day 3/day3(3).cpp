#include<iostream>
using namespace std;
int main()
{
	/* 3) Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.	*/
	int a,b,i;
	cout<<"enter no"<<endl;
	cin>>b;
	for(i=1;i<=10;i++)
	{
		a=b*i;
		cout<<b<<"*"<<i<<"="<<a<<endl;
	}
	return 0;
}
