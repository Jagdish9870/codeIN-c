#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"enter array elements: ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		    cin>>a[i][j];
		}
	}
	cout<<"\narray elements:\n ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;	
	}
}
