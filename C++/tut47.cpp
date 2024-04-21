#include <iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
1. Simple Calculator- Takes input of 2 numbers using a utility function 
and performs +,-,*,/ and display the result using another function.
2. Scientific Calculator- Takes input of 2 numbers using a utility function 
and performs any four scientific operation of your choice.

Create another class Hybrid Calculator and inherit it using these 2 classes.
Q1. What types of Inheritance are you using? --> Multiple Inheritance
Q2. Which mode of Inheritance are you using?
Q2. Create an object of HybridCalculator and display
 results of simple and scientific calculator?
 Q4. How is code reusability implemented?
*/
class simpleCalculator
{
    int a,b;
public:
    void getDataSimple()
    {
        cout << " Enter the values of a: " << endl;
        cin >> a;
        cout << " Enter the values of b: " << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << " The values of a+b is : " << a + b << endl;
        cout << " The values of a-b is : " << a - b << endl;
        cout << " The values of a*b is : " << a * b << endl;
        cout << " The values of a/b is : " << a / b << endl;
    }
};

class scientificCalculator
{
    float a, b;
public:
    void getDataScientific()
    {
        cout << " Enter the values of a: " << endl;
        cin >> a;
        cout << " Enter the values of b: " << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << " The values of log(a) to the base b  is : " << log(a)/ log(b) << endl;
        cout << " The values of exponential of a-b is : " << exp(a-b) << endl;
        cout << " The values of arctan of a/b in radian is : " << atan2(a, b) << endl;
        cout << " The values of arccos of a in radian is : " << acos(a) << endl;
        cout << " The values of a power of b is : " << pow(a,b) << endl;
    }
};
class hybridCalculator: public simpleCalculator, public scientificCalculator
{
   

};

int main()
{
    
    hybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific(); ///
    calc.getDataSimple();
    calc.performOperationsSimple(); ///


    return 0;
}