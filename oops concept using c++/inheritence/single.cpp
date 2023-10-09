#include<iostream>
using namespace std;
class dad
{
	protected:
		int amount;
		public:
		void input()
		{
	    	amount=25500;
		}
};
class son :public  dad
{
	public:
	int money;
    void show()
    {
    	
    	money=10000;
    	cout<<amount<<endl;
    	cout<<money;
	}
};
int main()
{
	son s;
	s.input();
	s.show();
}
