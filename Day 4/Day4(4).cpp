#include<iostream>
using namespace std;
int main()
{
	/*4) Write a Program to Check Whether a Number N entered by user is Palindrome or Not*/
	int n,i,a,rev,sum=0;
	cout<<"enter a number to reverse it"<<endl;
	cin>>n;
	while(n!=0)
	{	
	 a=n%10;
	 n=n/10;
	 sum=sum*10+a;
    }
    if(n=sum)
    {
    	cout<<"entered number is a palindrome "<<endl;
	}
	else
	{
		cout<<"entered number is not palindrome "<<endl;
	}
	return 0;
}
