#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter number :";
    cin>>a>>b;
    if(a<b)                                         // we can use another method named ternary operator for this method[max=(a<b)?a:b;]
    {
        cout<<"a= "<<a;
    }
    else
    {
        cout<<"b= "<<b;
    }
}