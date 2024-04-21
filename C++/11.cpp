#include<iostream>
using namespace std;;

struct S1
{
    int empId; //
    char empName[50];
};
// By default all data members and member function present inside structure is public.

class C1 
{
    int empId; //
    char empName[50]; //
    // By default all data members and member function present inside class are private. 
    //Hence this program will not compile.

};
int main(){
    S1 s;
    s.empId = 100; //

    //C1 c; // we cannot call class variable because they are not public by nature. 
    //c.empId =200;
    return 0;
}