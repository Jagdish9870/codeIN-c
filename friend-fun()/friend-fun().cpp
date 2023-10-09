#include<iostream>
using namespace std;
class virat 
{
	private :
		string cricket;
	public :
	    void show()
		{
			cricket="T10 game";
		}
	friend void KL(virat g);	
};
void KL(virat g)
{
	cout<<"thanks bro i got a place in"<<ends<<g.cricket;
}
int main()
{
	virat a;
	a.show();
	KL(a);
}

