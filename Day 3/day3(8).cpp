#include<iostream>
using namespace std;
int main()
{
	/* 8) Write a Program to Reverse a given Number N by user*/
	int n,i,a,rev;
	cout<<"enter a number to reverse it"<<endl;
	cin>>n;
	while(n!=0)
	{	
	 a=n%10;
	 n=n/10;
	 cout<<a;
    } 
    return 0;
}
