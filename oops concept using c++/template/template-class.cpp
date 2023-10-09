#include<iostream>
using namespace std;
template <class A>                    // by sing template<> we can pass any type of value in parameter  without declaring it anywhere 
class print                           // in template class we create a class name first then pass parameter in class in code section
{
	public:
	print(A x,A y)          //like this
	{
    	cout<<x<<ends<<y<<endl;
	}

};
int main()
{
print <int> obj(10,20);      //in <> this bracket we define paramter type like int , float , char etc
}
