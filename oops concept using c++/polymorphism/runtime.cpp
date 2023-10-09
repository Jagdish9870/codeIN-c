#include<iostream>
using namespace std;         //runtime polymorphism or late binding or dynamic polymorphism       through function overridding
class A
{
	public:
	 	void person()                   // we can use virtual(keyword )before void in case of using pointer
		{
			cout<<"good morning"<<endl;
		}
};
class B :public A
{
		public:
		void person()
		{
			cout<<"good night"<<endl;
		}
};
int main()
{
	B obj;
	obj.person(); 
    //obj.A ::person();            // if you want both output in case of overriding use this line
  
  
  /* printing first function using pointer 
  A *p;
  p=&obj;
  p->person();
                */
}
