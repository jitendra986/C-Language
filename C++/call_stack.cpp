#include <iostream>

int g(int i)
{
    return i * i;
}

/*----------------------------------------------------------------
For each function call a stack
frame is created. It contains:
• Target memory for return
values of function calls
• Local (automatic) variables
• Function parameters
• The return address
When a function returns the
stack frame is removed.

stack frames: main, f, g

*/

int f(int a, int b)
{
    int c = a / b;

    return g(c) - b;
}

int main()
{

    int m = 6;
    int t = f(m, 2);

    std::cout << t << std::endl;
}