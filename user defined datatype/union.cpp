#include<iostream>
using namespace std;
union stu
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	union stu(s);
	cout<<"enter student roll no: "<<endl;
	cin>>s.rollno;
	cout<<"enter student name: "<<endl;
	cin>>s.name;
	cout<<"enter student marks: "<<endl;
	cin>>s.marks;
	cout<<s.rollno<<ends<<s.name<<ends<<s.marks;
}
