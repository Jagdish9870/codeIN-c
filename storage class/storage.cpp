#include<iostream>
using namespace std;
int a=10;  //extern storage class
int main()
{
   int b=23;     //auto (local)
   static int c=26;       //static storage class
   register int d=56;    //register class
   cout<<a<<b<<c<<d;
   
}
