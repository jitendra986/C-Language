#include<iostream>

/*void reset(double values[])
{
    for(int i = 0; i<10; i++)
    {
        values[i]= 0.0;
    }
}*/

void reset(double* values, int size)
{
    for(int i = 0; i<size; i++)
    {
        values[i]= 0.0;
    }
}

int main()
{
    double a[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0,0.0};

    //reset(a);

    std::cout << "a[0] = " << a[0] << std::endl; //will print a[0] = 9
    std::cout << "a = " << a << std::endl; //will print a = 0x61fdd0

    std::cout << "*(a) = " << *(a) << std::endl; //will print *(a) = 9
    std::cout << "*(a+1) = " << *(a+1) << std::endl; //will print *(a+1) =8
    std::cout << "*(a+2) = " << *(a+2) << std::endl; //will print *(a+2) =7
    std::cout << "*(a+3) = " << *(a+3) << std::endl; //will print *(a+3) =6

    reset(a);
    std::cout << "*(a) = " << *(a) << std::endl; //will print *(a) = 0
    std::cout << "*(a+1) = " << *(a+1) << std::endl; //will print *(a+1) =0
}