#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    friend Complex sumComplex(Complex o1,Complex o2);//Friend function can have access
    // of private data member of a class outside of class.
    // but sumComplex() method is not part of class.
    // it does not matter whether you put friend function in public or private.


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;

}
int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}
/*----------------------------------------------------------------
Properties of friend function for
1. Not in the scope of class.
2. since it is not in the scope of the class, 
it can not be called from the object of that class. c1.sumComplex() == Invalid

3. can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
*/