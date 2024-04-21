#include<iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    // 'virtual' function is being used to override the default behavior.
    virtual void display()
    {
        cout << " 1 Displaying Base class variable var_vase =" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << " 2 Displaying Base class variable var_base = " << var_base << endl;
        cout << " 2 Displaying Derived class variable var_derived = " << var_derived << endl;
    }
};


int main() {
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display(); // This time 'display' function of derived class would be used 
    // instead of BaseClass, since I have used 'virtual' keyword in BaseClass's display function.
    return 0;
}