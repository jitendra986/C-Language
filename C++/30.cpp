#include<iostream>
using namespace std;

class Test{
    public:
    int b= 100;

    void m1(int b)
    {
        cout << "instance b = "<<this->b<< ","<<"b = "<<b;
    }
};

int main()
{
    Test t1;
    t1.m1(10);
    return 0;
}