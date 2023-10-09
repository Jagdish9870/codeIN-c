#include<iostream>
using namespace std;
int count=0;
class A
{
    public:
   	A()
   	{
   		cout<<"object "<<++count<<endl;
    }
   ~A()                 // sign of destructor(~)tilde operator
   	{
   		cout<<"object "<<count--<<endl;
    }
};
int main()
{
    A obj1,obj2,obj3;
}
