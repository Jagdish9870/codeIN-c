#include<iostream>
#define num 5
using namespace std;
int main()
{                          // printing 5' table
  int i,s;
  for(i=1;i<11;i++)
  {
    s=num*i;
    cout<<num<<"*"<<i<<"="<<s<<endl;
  }
}
 
 // macro is a user defined datatype used to define value which replaced by that particular value anywhere in code when it written 
 // i.e    {0,1,2,3,4,5,6....}
 // two types of macro :- object like    , fun() like.
