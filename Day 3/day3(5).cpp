#include<iostream>
using namespace std;
int main()
{
	/*	4) Write a Program to Display Fibonacci Series upto nth term (n is entered by user) */
		int i,a,b,c,n;
	cout<<"enter last term of fibbonci series to be printed"<<endl;
	cin>>n;
	a=1;
	b=1;
	cout<<"the fibonacci series upto "<<n<<" is "<<endl<<a<<endl<<a<<endl;
	for(i=1;c<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
	}
	return 0;
}
