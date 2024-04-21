#include<iostream>
using namespace std;
// difference between C++ structure and class
struct s1
{
    int empId;char empName[50];
};

class c1{
    int empId;char empName[50];
};

int main()
{
    s1 s;
    s.empId = 100;
    return 0;
}

