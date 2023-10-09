#include<iostream>
using namespace std;
class A
{
	protected:
	public:
		int a,b;
		void input()
		{
			cout<<"enter two numbers: ";
			cin>>a>>b;
		}
};
class B: public A
{
	public:
		int c;
		void sum()
		{
			c=a+b;
			cout<<"sum: "<<c<<endl;
		}
		void sub()
		{
			c=a-b;
			cout<<"substract: "<<c<<endl;
		}
};
class C :public B
{
	public:
		void mul()
		{
			c=a*b;
			cout<<"mul: "<<c<<endl;
		} 
		void div()
		{
			c=a/b;
			cout<<"div: "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.input();
	obj.sum();
	obj.sub();
	obj.mul();
	obj.div();
}
