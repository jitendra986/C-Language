#include <iostream>
using namespace std;

// Base class
class Employee
{
    int id; // if we keep id as private variable it will not be inherited in the derived class.

public:
    //int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
   // Employee(){}; // always make default constructor if you are making a parameterized constructor.
};

//Derived class
/*
class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
{
    class members/methods/etc...
}*/

//creating a programmer class derived from Employee base class.
/*
Note:
1. Default visibility mode is private.
2. Public visibility mode: Public members of the base class becomes 
public members of the derived class.
3. Private visibility mode: Public members of the base class becomes 
private members of the derived class.
4. private members of base class are never inherited.


*/

int main()
{
    Employee harry(1), rohan(2);

    cout << harry.salary << endl;
    cout << rohan.salary<< endl;



    return 0;
}