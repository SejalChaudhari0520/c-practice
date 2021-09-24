#include <iostream>
using namespace std;
int main()
{
	cout<<"enter divisor and dividend"<<endl;
	int a,b,quo,rem;
	cin>>a>>b;
	quo=b/a;
	rem=b%a;
	cout<<"quotient of given divisor and dividend is :"<<quo<<endl;
	cout<<"remainder of given divisor and dividend is :"<<rem<<endl;
	return 0;
}
/* Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and
dividend should be integers.*/									
