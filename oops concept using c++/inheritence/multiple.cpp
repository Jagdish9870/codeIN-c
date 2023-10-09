#include<iostream>
using namespace std;
int a,b,c;
class A
{
	public:
		void input()
		{
		cout<<"enter two numbers: ";
       	cin>>a>>b;
		}
		void sum()
		{
		c=a+b;
	    cout<<"sum: "<<c<<endl;
		}
};

class B
{
	public:
	void sub()
	{
		c=a-b;
		cout<<"subtract: "<<c<<endl;
	}	
};
class C : public A , public B
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


