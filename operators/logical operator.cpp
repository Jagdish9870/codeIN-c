#include<iostream>
using namespace std;
int main()
{
	//AND(&&) gate
	cout<< ((10>5) &&(20<5))<<endl;       //return false if one conditon is false
	cout<< ((10<5) &&(20>5))<<endl;       //return false if one conditon is false
	cout<< ((10>5) &&(20>5))<<endl;      //return true if both conditon  are true 
	cout<< ((10<5) &&(20<5))<<endl;     //return false if both conditon are false
	
	//or(||)  gate
	cout<< ((10>5) || (20<5))<<endl;       //return true if one conditon is true
	cout<< ((10<5) || (20>5))<<endl;       //return true if one conditon is true
	cout<< ((10>5) || (20>5))<<endl;      //return true if both conditon are true 
	cout<< ((10<5) || (20<5))<<endl;     //return false if both conditon are false
	
	
   //not (!)
	cout<< !(20>10)<<endl;              //return false if condition is true
	cout<< !(20<10)<<endl;              //return true if condition is false
}
