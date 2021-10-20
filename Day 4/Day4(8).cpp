#include<iostream>
using namespace std;
int main()
{
	/*8) Write a Program to Display all Factors of a Number entered by User	*/
	int n,flag,i;
	cout<<"enter a no :";
	cin>>n;
	cout<<"the factors of "<<n<<" are :";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			continue;
		}
		else
		{
		continue;	
		}
	}
	return 0;
}
