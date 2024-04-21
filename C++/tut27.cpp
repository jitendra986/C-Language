#include<iostream>
using namespace std;

//Forward decleration
class Complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }

        //Declaration
        int sumRealComplex(Complex , Complex );
        int sumCompComplex(Complex , Complex );     
};

class Complex
{
    int a, b;//Private variable

    //Individually declaring function as friend.
    //friend int calculator::sumRealComplex(Complex, Complex);
    //friend int calculator::sumCompComplex(Complex, Complex);

    //Alternatively:Declaring the entire calculator class as friend.//
    friend class calculator;
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

int calculator:: sumRealComplex(Complex o1, Complex o2)
        {
            //return (o1.a + o2.a);
            return add(o1.a ,o2.a);

        }

int calculator:: sumCompComplex(Complex o1, Complex o2)
        {
            //return (o1.a + o2.a);
            return add(o1.b ,o2.b);

        }

int main() {
    Complex o1,o2;

    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc;

    int res1 = calc.sumRealComplex(o1,o2);

    cout<<"The sum of real part of o1 and o2 is "<<res1<<endl;

    int res2 = calc.sumCompComplex(o1,o2);

    cout<<"The sum of imaginary part of o1 and o2 is "<<res2<<endl;
    
    return 0;
}