#include<iostream>
using namespace std;
int main()
{
	cout<<"execution start  "<<endl;
	int a,b,c;
	cout<<"enter two numbers:";
	cin>>a>>b;
	try
	{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"result:"<<c<<endl;	
	}
	catch(int x)
	{
		cout<<"can not be divided by zero";
	}
	cout<<"execution ended "<<endl;
}
