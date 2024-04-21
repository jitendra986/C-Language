#include<iostream>
using namespace std;

class Test
{
    public:
    int b=100;// here b is instance variable
    void m1(int b)// here b is local variable
    {
        cout<<"value of b ="<<b<<" value of b ="<<b;

    }
};

int  main()
{
    Test t1;
    t1.m1(100);
    return 0;

    //here local variable b get preference over instance variable. Hence in console I get 
    //value of b =100 value of b =100
}