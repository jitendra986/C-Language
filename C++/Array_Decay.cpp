#include <iostream>

int main()
{
    int intArray[] = {3, 2, 5};
    int *pointer = intArray;

    // Here we are using the array intArray in an expression.

    std::cout << "address of intArray at 0th index = " << &intArray[0] << std::endl; // prints e.g.  0x61fe0c
    std::cout << "address of intArray at 0th index = " << intArray << std::endl; // prints e.g.  0x61fe0c


    std::cout << "address of intArray at 0th index = " << intArray << std::endl; // prints e.g.  0x61fe0c
    std::cout << "address of intArray at 1th index = " << intArray+1 << std::endl;// 0x61fe10
    std::cout << "address of intArray at 2th index = " << intArray+2 << std::endl; // 0x61fe14




    std::cout << "intArray = " << *intArray << std::endl;     // prints e.g 3
    std::cout << "intArray = " << *(intArray + 1) << std::endl; // prints e.g. 2
    std::cout << "intArray = " << *(intArray + 2) << std::endl; // prints e.g. 5

    //An array used in an expression will decay to (become) a pointer to the first element.
    /*In the above example, we use intArray in an expression (involving << operators and some
        strings). Printing intArray is therefore equivalent to directly printing &intArray[0].*/

    std::cout << "pointer = " << pointer << std::endl; // prints e.g.  0x61fe0c
    std::cout << "*(pointer) = " << *pointer << std::endl; // prints e.g 3
    std::cout << "*(pointer +1) = " << *(pointer + 1) << std::endl; // prints e.g 2
    std::cout << "*(pointer+2) = " << *(pointer + 2) << std::endl; // prints e.g 5
}