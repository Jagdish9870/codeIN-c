#include<iostream>
using namespace std;
class A
{
	public:
	A(int a,int b)     //perameterized constructor
	{
		cout<<a<<ends<<b;
	}
};
int main()
{
   A obj(125,250);
}
