#include<iostream>
using namespace std;
int main()
{
	/*7) Write a Program to Find LCM of two numbers entered by user*/
	int m,n,a,b;
	cout<<"enter two numbers to find LCM"<<endl;
	cin>>a>>b;
	m=a;
	n=b;
	while(m!=n)
    {
        if(m < n)
        {
         m=m+a;
        }
        else
        {
         n=n+b;
        }
    }
    cout<<"\nL.C.M of [ "<<a<<" ] and [ "<<b<<" ] is :: "<<m<<"\n";
    return 0;
}
