//#include "vectorfunctions.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>

namespace cie
{
	// function declaration
	double dotProduct(double* ptr1, double* ptr2, int size);
	double eNorm(double* ptr1, int size);
	double maxNorm(double vec1[], int size);
}

namespace cie
{
    double dotProduct(double* ptr1, double* ptr2, int size)
    {
        double sum = 0.0;

        for (int i = 0; i < size; i++)
        {
            sum = sum + (*ptr1) * (*ptr2);
            ptr1++;
            ptr2++;
        }
        return sum;
    }

    double eNorm(double* ptr1, int size)
    {
        double sum = 0.0;

        for (int i = 0; i < size; i++)
        {
            sum = sum + (*ptr1) * (*ptr1);
            ptr1++;

        }

        double result = sqrt(sum);
        return result;

    }

    double maxNorm(double vec1[], int size)
    {
        double maxValue = abs(vec1[0]);
        for (int i = 1; i < size; i++)
        {
            if (abs(vec1[i]) > maxValue)
            {
                maxValue = abs(vec1[i]);
            }
        }


        return maxValue;
        //std::cout << "maximum norm of given vector is:  " << maxValue << std::endl;
    }

}

int main()
{
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    double* vec1 = new double[size];// this is the way we initialize dynamic array
    double* vec2 = new double[size];

    //double vec1[3];
    //double vec2[3];
    double* ptr1;
    double* ptr2;
    ptr1 = vec1;// it means value of address of vec1[0] is stored at ptr1
    ptr2 = vec2;


    std::cout << "Enter array elements of vector1" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << " Array vec1[" << i + 1 << "] = ";
        std::cin >> vec1[i];
    }

    std::cout << "Array vec1: " << std::endl;
    for (int i = 0; i < size; i++)
    {

        std::cout << " " << vec1[i];
    }

    std::cout  << std::endl;
    std::cout << "Enter array elements of vector2" << std::endl;

    for (int j = 0; j < size; j++)
    {
        std::cout << " Array vec2[" << j + 1 << "] = ";
        std::cin >> vec2[j];
    }

    std::cout << "Array vec2: " << std::endl;
    for (int j = 0; j < size; j++)
    {

        std::cout << " " << vec2[j];
    }

    std::cout << std::endl;
    std::cout << "Enter the integer value, to select the method" << std::endl;

    int select;
    std::cin >> select;

    switch (select) {
    case 1:double dotProduct(double* ptr1, double* ptr2, int size);
    {double dtpr = cie::dotProduct(&vec1[0], &vec2[0], size);
    std::cout << "dot product of the vec1 & vec2 is: " << dtpr << std::endl;
    break;
    }
    case 2: double eNorm(double* ptr1, int size);
    {double t1 = cie::eNorm(&vec2[0], size);
    std::cout << "euclidian norm of the given vector is: " << t1 << std::endl;
    break;
    }
    case 3: double maxNorm(double vec1[], int size);
    {double t2 = cie::maxNorm(vec1, size);
    std::cout << "max norm of the given vector is: " << t2 << std::endl;
    break;
    }
    default:"Select a valid choice";
    }
    system("pause");

    delete[] vec1;
    vec1 = NULL;

    delete[] vec2;
    vec2 = NULL;

    return 0;

}

