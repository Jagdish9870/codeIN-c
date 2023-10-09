#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	A()     //default constructor
	{
		a=10;   b=20;
		cout<<a<<ends<<b;
	}
};
int main()
{
   A obj;
}
