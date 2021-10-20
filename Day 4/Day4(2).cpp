#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
 /*2) Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively*/
 double a,b,ex;
 cout<<"enter two numbers"<<endl;
 cin>>a>>b;
 ex=pow(a,b);
 cout<<a<<" raised to "<<b<<" is: "<<ex<<endl;	
 return 0;
}

