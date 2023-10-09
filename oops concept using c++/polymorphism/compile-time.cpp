#include<iostream>
using namespace std;           //compile time polymorphism (early binding or static polymorphism)  through function overloading
class A
{
    int num1,num2,s;
    public:
    	void person()
    	{                                // function overloading means a class have two method or fun() with same name but different parameters like person() and person(int a, int b)
    		cout<<"enter two number :";
    		cin>>num1>>num2;
    		s=num1+num2;
    		cout<<"sum"<<s<<endl;
		}
			void person(int a, int b)
    	{
    	    int c;
    		c=a*b;
    		cout<<"multi"<<c<<endl;
		}
		
};
int main()
{
	A obj;
	obj.person(10,20);
	obj.person();
	
}
