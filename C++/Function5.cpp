#include <iostream>
#include <cmath>

/*  so far parameters were passed by value(copied from the arguments). 
  How can we directly access the arguments that the function was called with, without copying?
  we can pass them by reference
  However this same example works with pointer. */


void readFromConsole(std:: string message, double* variable)
{
    std::cout << message << std::endl;
    std::cin>> *variable;
}

int main()
{
    double a,b;

    // note that we also could simply use a return value instead of reference
    readFromConsole("Input value for a: ",&a);
    readFromConsole("Input value for b: ",&b);
}


