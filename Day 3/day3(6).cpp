#include<iostream>
using namespace std;
int main()
{
	/*6) Write a Program to Find GCD or HCF of two numbers entered by user*/
	int n1,n2,gcd,i;
	cout<<"enter two numbers"<<endl;
	cin>>n1>>n2;
	gcd=1;
	if(n1>n2)
	{
		for(i=1;i<=n1;i++)
		{
			if((n1%i==0)&&(n2%i==0))
			{
				gcd=i;
			}
		}
	    cout<<"gcd of two number is "<<gcd<<endl;
	}
	else
	{
			for(i=1;i<=n2;i++)
		{
			if((n1%i==0)&&(n2%i==0))
			{
				gcd=i;
			}
		}
	    cout<<"gcd of two number is "<<gcd<<endl;
	}
	return 0;
	
}
