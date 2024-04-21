#include<iostream>
using namespace std;

struct Emp{
    int empId;
    char Name[100];


    void m1(){
        cout << "m1 function" << endl;
    }
};

int main()
{
    Emp e;
    e.m1();

    cout<<"Learning C++ Structure"<<endl;
    return 0;
}