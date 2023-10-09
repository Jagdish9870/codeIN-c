#include<iostream>
#define num(a,b) ((a<b)?a:b)
using namespace std;
int main()
{                          //fun() like macro
    cout<<num(100,256)<<endl;
    cout<<num(1200,2556)<<endl;
    cout<<num(10,56)<<endl;
    cout<<num(100,56)<<endl;
}
 
 // macro is a user defined datatype used to define value which replaced by that particular value anywhere in code when it written 
 // i.e    {0,1,2,3,4,5,6....}
 // two types of macro :- object like    , fun() like.
