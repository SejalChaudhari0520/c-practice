#include<iostream>
using namespace std;
int main()
{
	/*3) Write a Program to Find Largest Number Among Three Numbers entered by users */
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	if((a>b)&&(a>c))
	{
	cout<<a<<"is largest among three numbers"<<endl;	
    }
    else if((b>a)&&(b>c))
	{
	cout<<b<<"is largest among three numbers"<<endl;
	}
	else
	{
	cout<<c<<" is largest among three numbers"<<endl;	
	}
	return 0;
}
