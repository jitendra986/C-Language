#include <iostream>
using namespace std;

// Base class
class Employee
{
    //int id; if we keep id as private variable it will not be inherited in the derived class

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}; // always make default constructor if you are making a parameterized constructor.
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
class programmer :public Employee// here visibility mode is private by default.
{
//since 'programmer' class is privately inherited from 'Employee' class hence public
// members of base class(Employee) would become private member of 'programmer' class after inheritance.
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;

    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);

    cout << harry.salary << endl;
    cout << rohan.salary<< endl;

    programmer skillF(10);
    //when we invoke object of programmer,it will automatically call the object of Employee class 
    //since programmer was derived from Employee class, but object of Employee class will be generated only if there would be empty constructor 
    //in Employee class apart from parameterized constructor
    

    cout << skillF.languageCode<< endl;
    cout << skillF.id<< endl;
    //you can not print id because id is a now private member of programmer class. and since programmer class was inherited from Employee class
    //  and id(public data of Employee class) would become private data of programmer class.
    skillF.getData();

    return 0;
}