#include<iostream>
using namespace std;
int main()
{
	/*5) Write a Program to Check Whether a Number is Prime or Not*/
	int n,i,a,flag=0;
	cout<<" enter a number "<<endl;
	cin>>n;
	while(n!=0)
	{
			for(i=2;i<n;i++)
			{
				if((n%i)==0)
				{
					cout<<"entered no is NOT prime"<<endl;
					flag=1;
					break;
				}
			}
			break;
   }
   if(flag==0)
   {
   	cout<<"entered no IS PRIME"<<endl;
   }
	return 0;
}
