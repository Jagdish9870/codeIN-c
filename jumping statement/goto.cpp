#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"enter your age: ";
  cin>>age;
  {
  	if(age>=18)
  	goto vote;
  	else
	goto notvote;             //goto statement for eligibility for voter
	
	vote:
		cout<<"you are eligible.....";
		return 0;
	notvote:
		cout<<"you are not eligible.....";
  }
  
  
  
  
  
  
  
  
}
