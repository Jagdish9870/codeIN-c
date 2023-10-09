#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		void input()
		{
			a=10; b=58;
		}
		friend class B;
};
class B
{
	public :
		int c;
		void add(A r)
		{
			c=r.a+r.b;
			cout<<c;
		}
};
int main()
{
	A a;
	a.input();
	B obj;
	obj.add(a);
}
