#include<iostream>
using namespace std;

struct Emp{
    
    private:
    int empId;char Name[100];

    //Unlike "C" we can create function inside "C++" structure

    public:
    void m1(){
        cout<<"m1 function"<<endl;
    }
};

int main()
{
    Emp e;
    e.m1();

    cout<<"Learning C++ structure..."<<endl;
    return 0;
}