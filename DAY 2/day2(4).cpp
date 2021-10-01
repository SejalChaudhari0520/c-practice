#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	/*Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant) */
	double a,b,c,dis,root1,root2;
	cout<<"enter coefficients of quadratic equation"<<endl;
	cin>>a>>b>>c;
	dis=((b*b)-(4*a*c));
	if(dis>0)
	{
		cout<<"The Roots are real and different"<<endl;
		root1=(-b+sqrt(dis))/(2*a);
		root2=(-b-sqrt(dis))/(2*a);
		cout<<"the two roots of quadratic equation are:"<<endl<<root1<<endl<<root2<<endl;
	}
	else if(dis==0)
	{
		cout<<"The Roots are real and same"<<endl;
		root1=root2=-b/(2*a);
		cout<<"the two roots of quadratic equation are:"<<endl<<root1<<endl<<root2<<endl;
	}
	else
	{
		cout<<"The Roots are complex and different"<<endl;
		root1=-b/(2*a);
		root2=sqrt(-dis)/(2*a);
		cout<<"the two roots of quadratic equation are:"<<endl<<root1<<endl<<root2<<endl;
	}
	return 0;
}
