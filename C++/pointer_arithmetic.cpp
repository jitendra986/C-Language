#include <iostream>

int main()
{
    int intArray[] = {3, 2, 5};

    int *pointer = &intArray[0];

    std::cout << "pointer = " << pointer << std::endl;   //0x61fe0c
    std::cout << "*pointer : " << *pointer << std::endl; //3

    std::cout << "pointer +1 = " << pointer + 1 << std::endl; //0x61fe10

    std::cout << "*(pointer +1) = " << *(pointer + 1) << std::endl; //2

    std::cout << "sizeof (*pointer): " << sizeof(*pointer) << std::endl; //4

    std::cout << "*pointer : " << *pointer << std::endl; //3
}