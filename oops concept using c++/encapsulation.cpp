#include<iostream>
using namespace std;
class bank
{
	private:                                 // in encapsulation data member and maember fun() exists in one class
	    int atmpin,balance;          // data member
	public:
		string bankname,name, ifsc;
		int accNum;                  //member fun()
		
    void input()
   {
    	atmpin=2424;
    	balance=56000;
	    bankname="sbi";
	    name="jagdish gupta";
    	accNum=91971243;
	    ifsc="sbin0011503";
   }
   void output()
   {
    	cout<<"my bank details...."<<endl;
    	cout<<"entered pin: "<<atmpin<<endl;
	    cout<<"your name: "<<name<<endl;
	    cout<<"bankname: "<<bankname<<endl;
    	cout<<"accNum: "<<accNum<<endl;
    	cout<<"ifsc: "<<ifsc<<endl;
    	cout<<"balance: "<<balance<<endl;
   } 
};
class hacker:public bank
{ 
};
int main()
{
	hacker h;
	h.input();
	h.output();
}

