#include<iostream>
using namespace std;
int main()
{
	/* Day 3 - Loops 1) Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)	*/			
	cout<<"enter a value of n"<<endl;
	int a,b,n;
	cin>>n;
	a=0;
	b=1;
	while(n>=b)
	{
		a=a+b;
		b=b+1;
	}
	cout<<"sum of "<<n<<" natural numbers is "<<a<<endl;				
	return 0;
}
