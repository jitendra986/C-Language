#include<iostream>
using namespace std;

void m1()
{
    cout<<"m1 Functions"<<endl;
}
int main(){
    // In c programming we can make function inside main but in "c++" we should not make function inside main
    // function because some compiler cause problem in compiling.
    
    cout<<"Main function"<<endl;
    m1();
}