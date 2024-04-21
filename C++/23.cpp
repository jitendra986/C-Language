#include<iostream>
using namespace std;
class Test
{
    public:
    static int a;

    void increment()
    {
        Test::a++;
        cout<<"a = "<<Test::a<<endl;
    }

};
int Test::a;
int main()
{
    Test::a = 100;
    Test t1,t2,t3,t4,t5,t6,t7;

    t1.increment();
    t2.increment();
    t3.increment();
    t4.increment();
    t5.increment();
    t6.increment();
    t7.increment();

    
    return 0;

}