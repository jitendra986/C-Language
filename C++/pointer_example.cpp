#include <iostream>

int main()
{

    int i = 34;
    int& intref = i; // i changed to intref

    int z =i;

    int* intptr = &intref;

    std::cout << "i = " << i << std::endl; //34
    std::cout << "i = " << &i << std::endl; // 0x61fe14

     std::cout << "z = " << z << std::endl; //34
    std::cout << "z = " << &z << std::endl; // 0x61fe10

    std::cout << "intref = " << intref << std::endl; //34
    std::cout << "&intref = " << &intref << std::endl; // 0x61fe14

    std::cout << "intptr = " << intptr << std::endl; // 0x61fe14
    std::cout << "&intptr = " << &intptr << std::endl; // 0x61fe08

    std::cout << "*intptr = " << *intptr << std::endl; //34
}