#include <iostream>
using namespace std;

void m1()
{
    cout << "m1 function" << endl;
}
class Test{
    public:
    int x;
    static int a;
    private:
    int y;
    protected:
    int z;
};
int Test::a;
// we define static variable at the end of class.
// "::" it is called as scope resolution operator.

int main()
{
    int x ;
    Test t1;
    t1.x = 100; //

    cout << t1.x<<endl;
    cout<<Test::a <<endl;
    m1();
}