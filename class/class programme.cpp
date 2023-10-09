#include<iostream>
using namespace std;
class print
{
	public:              //visiblity
	void show()     //funtion name
	{
		cout<<"programm of class"<<endl;
	}
	void get()      //function name
	{
		cout<<"code of class";
	}
};
int main()
{
	print obj;
	obj.show();   //function calling
	obj.get();
}
