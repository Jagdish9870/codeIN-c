#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"execution starting....."<<endl;
	cout<<"enetr two numbers: ";
	cin>>a>>b;
	try
	{
		if(b==0)
		throw b;
		c=a/b;
    	cout<<"result :"<<c<<endl;
    }
    catch(int)
	{
	    cout<<"can'nt be devided by zero"<<endl;
	}
	cout<<"execution ended....."<<endl;
}
