#include <iostream>
using namespace std;

class A
{
    int a; // class variable
public:
    void setData(int a)
    {
        this->a = a; // here 'this->a' represents class variable.
    }
    /*int setData(int a)
    {
        this->a = a; //here 'this->a' represents class variable.
        return a;
    }*/
    void getData()
    {
        cout << " The value of a is " << a << endl;
    }
};

int main()
{
    // This is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    a.setData(4);
    a.getData();

    return 0;
}