#include<iostream>
using namespace std;
class sachin;
class virat 
{
	private:
		int a;
	public:
	    void ihave()
		{
			a=10;
		}	
	friend void kl(virat p,sachin q);	
};
class sachin 
{
	private:
		int b;
	public:
	    void ihave()
		{
			b=10;
		}	
	friend void kl(virat p,sachin q);	
};
void kl(virat p,sachin q)
{
	int c;
	c=p.a+q.b;
	cout<<c;
}
int main()
{
	virat a;
	a.ihave();
	sachin a2;
	a2.ihave();
	kl(a,a2);
}
