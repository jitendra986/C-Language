#include<iostream>



double f(double x)
{
    return  x*x;
}

int main()
{
    double input;
    std::cout<< "Enter Value: ";
    std::cin>> input;

    std::cout<<"f(" <<input << ") = " <<f(input)<<std::endl;
}