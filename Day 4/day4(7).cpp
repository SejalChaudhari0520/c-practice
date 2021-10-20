#include<iostream>
using namespace std;
int main()
{
	/*7) Write a Program to check whether a number entered by the user is an Armstrong number or not.*/
	int n,sum,flag,a;
	cout<<"enter a no ";
	flag=n;
	cin>>n;
	while(n>0)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	int p=sum;
	cout<<p<<endl;
	if(p==flag)
	{
		cout<<"armstrong"<<endl;
		}	
	return 0;
}
