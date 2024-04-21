#include <iostream>
using namespace std;

void m1()
{
    cout << "M1 function" << endl;
}

class Test
{
public:
    int x; // static variable
private:
    int y;

protected:
    int z;
    //All the variable like x,y,z are instance variable, in three different  area, but inside class only.
    // Instance is  synonym of object and object contains Instance variable.
    //we can make instance variable in class area (public,private ,protected)
};

int main()
{
    int x;
    Test t1;
    cout << t1.x << endl; // static variable is always accessed by class , 
    // default value of c++ integer type static variable is always zero

    cout << "Main function" << endl;
    m1();
}
