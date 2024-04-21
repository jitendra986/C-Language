#include<iostream>
#include<cmath>

double length(double x, double y)
{
    return  std::sqrt(x * x + y * y);
}

int main()
{
    double a= 3;
    std::cout << "length is "<<length(a,5.0) << std::endl;
}