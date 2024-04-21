#include<iostream>
using namespace std;

class Test{
    public:
    int b= 100; //

    void m1(int a)
    {
        cout<<"value of a = "<<a<<" value of b ="<<b<<endl;
    }
};
int main(){
    Test t1;
    t1.m1(10);
    return 0;
}