#include<iostream>
using namespace std;
int main()
{
	int num,count=0;   //while -loop to count number
	cout<<"enter number: ";
	cin>>num;
	while(num>0)
	{
		num=num/5;
		count++;
	}
	cout<<count;	
}
