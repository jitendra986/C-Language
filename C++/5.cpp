#include <iostream>
using namespace std;

struct Emp
{
    int empId;
    char name[100];
    // Unlike 'C' we can create function inside "C++" structure.

    void m1(){
        cout << "m1 function\n";
    }
};

int main(){
    Emp e;
    e.m1();

    cout << "Learning C++ Structure";
    return 0;
}