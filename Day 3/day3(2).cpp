#include<iostream>
using namespace std;
int main()
{
	/* 2) Write a Program to Find Factorial of a given number N	*/
	int a,b,c;
	a=1;
	b=1;
	cout<<"enter the no to take out its factorial"<<endl;
	cin>>c;
	while(c>=b)
	{
		a=a*b;
		b=b+1;
	}
	cout<<"factorial of "<<c<<" is: "<<a<<endl;
	return 0;
}
