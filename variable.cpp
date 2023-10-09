//types of variable
#include<iostream>
int b=10;
static int d=16;                         //static globle variable
int main()                               //globle variable
{
    int a=5;                              //local variable
    static int c=16;                     //static variable
    std::cout<<a<<" "<<b<<" "<<c;
}