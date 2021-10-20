#include<iostream>
using namespace std;
int main()
{
	/*3) Write a Program to Calculate Power of a Number without using inbuilt pow() function by taking two inputs from users as Base and exponent respectively*/
	int a,b,ex;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    ex=1;
    cout<<a<<" raised to "<<b<<" is :";
    while(b!=0)
    {
        ex=ex*a;
        --b;
	}
    cout<<ex<<endl;
	return 0;
}
