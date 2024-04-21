#include<iostream>
using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"User defined constructor"<<endl;

    }
};

int main()
{
    Test();
    // t;// once we instantiate object t, 
    //it automatically run the constructor inside class.
    return 0;
}