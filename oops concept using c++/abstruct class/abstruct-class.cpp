#include<iostream>
using namespace std;
class animal      // claas is known as abstract class when it has atleast one pure virtual fun().....
{
	public:
	virtual void sound()=0;     //pure virtual fun()    and it s necessry to override by another same function name....
	void eat()
	{
		cout<<"animal eating"<<endl;
	}
};
class dog :public animal
{   public:
	void sound()
	{
		cout<<"wooh wooh ..."<<endl;
	}
};
int main()
{
	dog d;
	d.sound();
	d.eat();
}
