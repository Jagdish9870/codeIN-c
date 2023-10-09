#include<iostream>
#include<fstream>
using namespace std;
int main()
{             //creating file using c++ in dev c++                          
 
    ofstream newfile("C:\\Users\\varsh\\OneDrive\\Desktop\\cpp.txt");
    cout<<"file created....";
    newfile<<"file handling...";
    newfile.close();
    
    
}
 

