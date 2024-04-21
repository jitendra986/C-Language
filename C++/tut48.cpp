#include <iostream>
using namespace std;

/*
Case1:

class B:public A
{
    //order of execution of constructor --> first A() then B()
};

Case2:
classA:public B,public C{
    //Order of execution of constructor --> first B() then C() and then A()
};

Case3:
class A:public B, virtual public C
{
    //Order of execution of constructor -->first C() then B() and then A()
};


*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << " The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << " The value of data is " << data2 << endl;
    }
};

class Derived: public Base1, public Base2 {

    int derived1, derived2;
    public:
    Derived(int a,int b, int c, int d):Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Dervied class constructor called" << endl;
    }

    void printDataDerived(void)
    {
        cout<<" The Value of derived1 is "<<derived1<<endl;
        cout<<" The Value of derived2 is "<<derived2<<endl;
    }
};

int main()
{
    Derived jt(1,2,3,4);
    jt.printDataBase1();
    jt.printDataBase2();
    jt.printDataDerived();

    return 0;
}