#include<iostream>
using namespace std;
template <class A>                    // by using template<> we can pass any type of value in parameter  without declaring it anywhere 
void print(A x,A y)                   // this is the type of template fun() paramter is passed here 
{
	cout<<x<<ends<<y<<endl;
}
int main()
{
	print(10,20);                    // we can pass any type of value without declaring 
	print('h','i');
	print("hello", "hii");
	print(32.3,56.8);
}
