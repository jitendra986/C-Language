#include <iostream>
using namespace std;

void m1()
{
    cout << "m1 function" << endl;
}
class Test
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
};

// All the variables like x,y, and z are instance variables in three different area, 
// but inside class only.  Instance is Synonym of object.

int main(){
    Test t1;
    t1.x = 100;
    cout<<t1.x<<endl;
    cout<<"main function"<<endl;
    m1();

}