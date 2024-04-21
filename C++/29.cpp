#include<iostream>
using namespace std;

class Test
{
    public:
    int b = 100; //instance variable

    void m1(int b)
    {
        cout<<"value of b = "<<b<< ","<<"b = "<< this->b;
        //"this" pointer is used to give preference  to instance variable
    }
};

int main()
{
    Test t1;
    t1.m1(10);
    return 0;
}