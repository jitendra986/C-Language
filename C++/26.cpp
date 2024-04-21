#include<iostream>
using namespace std;

class Test {
    public: 
    void m1(int a)
    {
        cout<<"Value of a ="<<a<<endl;
    }

};
int main(){
    Test t1;
    t1.m1(10);
    return 0;
}