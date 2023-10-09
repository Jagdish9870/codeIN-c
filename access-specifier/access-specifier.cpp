#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	private:
	    int b;
	protected:    
		int c;	
	
};
int main()
{
	A obj;
	obj.a=30;
	cout<<obj.a<<endl;
//	obj.b=20;
//	cout<<"b"<<endl;    //not allowed outside the class
//	obj.c=10;
//	cout<<"c"<<endl;   //not allowed
}
