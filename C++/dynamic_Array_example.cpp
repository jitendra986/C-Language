#include <iostream>

//#define size(type) ((char *)(&type + 1) - (char *)(&type))

int getsize(int array[])
    {
       //int arrSize = *(&array + 1) - array;
       int arrSize = sizeof(arr)/sizeof(arr[0]);
        
        return arrSize;
    }

int main()
{
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int *array = new int[size];

    // allocates one type on the heap and returns its address. We can store it using a pointer:
    // Using dynamic memory to allocate arrays allows us to specify the size at run-time.

    std::cout << "Enter values: \n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "  array[" << i << "] = ";

        std::cin >> array[i];
    }

    //std::cout << size(array) / size(array[1]); //returns 5

    //int t = getsize(array);
    //int t = *(&array + 1) - array;
    //std::cout << "This array has " << t << " elements\n";

    std::cout << std::endl;

    std::cout << "Reverse input: ";

    for (int i = 0; i < size; i++)
    {
        std::cout << " " << array[size - i - 1];
    }

    std::cout << std::endl;

    /*
    Dynamically allocated memory should always be
    deleted, although this example would also run
    successfully without deleting the array in the end.

    */
    delete[] array;
    array = NULL;
}