#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ifstream newfile("C:\\Users\\varsh\\OneDrive\\Desktop\\cpp.txt");
	while(getline(newfile,str))
	{
    	cout<<str<<endl;
	}
/*	while(getline(newfile,str))
	{
		cout<<str<<endl;
	} */
		newfile.close(); 	
}
