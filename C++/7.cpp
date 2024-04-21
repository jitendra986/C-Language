#include<iostream>
using namespace std;
struct Emp{

    private:
    int empId;  //data members 
    char Name[100]; //data members 

    // Unlike "C" we can create function inside "C++" structure
    void m1() // member function
    {
        cout << "m1 function" << endl;
    }
 
};

int main()
{
    Emp e;
    e.m1(); // member function

    cout<< "Learning C++ Structure"<< endl;
    return 0;
}