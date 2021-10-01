#include<iostream>
using namespace std;
int main()
{
	/* Write a Program to Check Whether a Character is Vowel or Consonant.		 */
	char a;
	cout<<"enter a alphabet to check whether it is vowel or consonant"<<endl;
	cin>>a;
	if(int(a=='a' || a=='e'||a=='i' || a=='o'||a=='u'||a=='A' || a=='E'||a=='I' || a=='O'||a=='U'))
	{
		cout<<"entered alphabet is vowel"<<endl;
	}
	else
	{
		cout<<"entered alphabet is consanants"<<endl;
	}
	return 0;
}
