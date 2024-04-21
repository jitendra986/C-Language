#include<iostream>

void printIntegers(int i1, int i2, int i3)
{
    std::cout << "i1 =  " << i1 << std::endl;// WE could also use a \n instead of always putting an std::endl
    std::cout << "i2 =  " << i2 << std::endl;
    std::cout << "i3 =  " << i3 << std::endl;
}

int main() //Functions can also have no parameters at all
{
    printIntegers(4,3,5); // call print Integers with argument 4,3 5

    printIntegers(9,8,1); // call print Integers with argument 4,3 5
}