#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b)     //copy constructor
	{
		x=a; y=b;
		cout<<x<<ends<<y<<endl;
	}
	A(A &ref)
	{
		x=ref.x;
		y=ref.y;
		cout<<x<<ends<<y<<endl;
	}
};
int main()
{
   A obj(125,250);
   A obj2=obj;
   
}
