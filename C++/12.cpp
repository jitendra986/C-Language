#include <iostream>
using namespace std;
struct s1
{
    // By default all data members and member function present inside structure is public.
    int empId;
    char empName[50];
};

class c1
{
    public:
    int empId; //
    char empName[50]; //
    // By default all data members and member function present inside class are private. 
    //Hence this program will not compile and to compile this program we make it public.

};

int main()
{
    s1 s;
    s.empId = 100; //

    c1 c; // we cannot call class variable because they are not public by nature. 
    c.empId =200;
    return 0;
}
