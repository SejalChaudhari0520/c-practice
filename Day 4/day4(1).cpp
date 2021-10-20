#include<iostream>
using namespace std;
int main()
{
/* 1)Write a Program to display sum of all digits of a given Number N by user*/
int n,i,a,b;
	cout<<"enter a number to add it"<<endl;
	cin>>n;
	b=0;
	while(n!=0)
	{	
	 a=n%10;
	 n=n/10;
	 b=b+a;
    } 
    cout<<"sum of all nos is "<<b<<endl;
    return 0;
}

