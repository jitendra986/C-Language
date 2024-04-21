#include<iostream>
using namespace std;

class Test{
    public:
    static int a;
};
int Test::a;
int main()
{
    Test::a = 100;
    cout << "a = "<<Test::a << endl;
}