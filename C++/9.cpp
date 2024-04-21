#include <iostream>
using namespace std;
// Always start any method with small letter.
struct Emp
{

private:
    int empId;      //data members
    char Name[100]; //data members

    // Unlike "C" we can create function inside "C++" structures.

public:
    void m1() // member function
    {
        empId = 100; //
        cout << "Value = " << empId << endl;

    }
};

int main(){

    Emp e;
    e.m1(); // member function

    cout<< "Learning C++ Structures";
    return 0; //
}