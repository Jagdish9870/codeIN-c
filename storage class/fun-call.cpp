#include<iostream>
using namespace std;
int a=10;  //extern(global) storage class
void fun()                                   
{
   int b=23;     //auto (local) class
   static int c=26;       //static storage class
   register int d=56;    //register class
   cout<<a<<ends<<b<<ends<<c<<ends<<d<<endl;
   a++; b++; c++; d++;
   
}
int main()
{ 
   int e=45;
   fun();   // function calling
   fun();
   fun();
   cout<<e<<endl;
}
