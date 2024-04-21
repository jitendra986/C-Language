#include<iostream>
using namespace std;

class Test
{
    public:
    int a;// Instance variable

    static void increment()
    {
        Test::a++;
        cout<<"a ="<<Test::a<<endl;
    }
};
//int Test::a;

int main()
{
    Test t1,t2,t3,t4,t5,t6;
    t1.increment();
    t2.increment();
    t3.increment();
    t4.increment();
    t5.increment();
    t6.increment();

    Test::a = 100;
    return 0;

    /*----------------------------------------------------------------
    Invalid use of member 'Test::a' in static member function Test::a++; 
    This example cause error because I am calling instance variable by static member function
    which is not possible in "C++" but possible in Java.
    */
}