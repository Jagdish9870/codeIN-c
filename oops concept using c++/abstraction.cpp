#include<iostream>
using namespace std;
class bank
{
	private: 
	    int atmpin,balance;
	public:
		string bankname,name, ifsc;
		int accNum;
		
    void input()                          // for the concept of data abstruction put the essential information into private class
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
int main()
{
	bank m;
	m.input();
	m.output();
	cout<<"someone is trying to access your details: "<<endl;
  // 	cout<<m.atmpin<<endl;              
    cout<<m.name<<endl;
    cout<<m.bankname<<endl;
   	cout<<m.accNum<<endl;
   	cout<<m.ifsc<<endl;
   //	cout<<m.balance<<endl;
	
}

