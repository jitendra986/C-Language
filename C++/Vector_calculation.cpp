#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// function declaration
double dotProduct(double *ptr1, double *ptr2);
double eNorm(double *ptr1);
double maxNorm(double vec1[]);



int main()
{
    /*int n;
    cout << "Enter the size of Vector1 and Vector 2"<<endl;
    cin>>n >>endl;*/

    double vec1[3];
    double vec2[3];
    double *ptr1;
    double *ptr2;
    ptr1 = vec1;
    ptr2 = vec2;

    
    std::cout << "Enter array elements of vector1" <<endl;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << " Array vec1[" <<i+1 << "] = ";
        std::cin >> vec1[i];
    }

    std::cout << "Array vec1: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        
        std::cout<< " " << vec1[i ];
    }

    for (int j = 0; j < 3; j++)
    {
        std::cout <<  " Array vec2[" << j+1 << "] = ";
        std::cin >> vec2[j];
    }

    std::cout << "Array vec2: "<<endl;
    for (int j = 0; j < 3; j++)
    {
       
        std::cout<< " " <<vec2[j ] ;
    }

    double dtpr = dotProduct(&vec1[0], &vec2[0]);

    std::cout <<"dot product of the vec1 & vec2 is: "<<dtpr <<endl;
    //printf("dot product of the vec1 & vec2 is %d\n ", dtpr);

    /*double t1 = eNorm(&vec1[0]);
    std::cout <<"euclidian norm of the given vector is: "<< t1 <<endl;*/

    double t1 = eNorm(&vec2[0]);
    std::cout <<"euclidian norm of the given vector is: "<< t1 <<endl;


    double t2 = maxNorm(vec1);
    std::cout <<"max norm of the given vector is: "<< t2 <<endl;

}

double dotProduct(double *ptr1,double *ptr2)
{
   double sum = 0.0;

    for(int i = 0; i < 3; i++)
    {
        sum = sum + (*ptr1)*(*ptr2);
        ptr1++;
        ptr2++;
    }
    return sum;
}

double eNorm(double *ptr1)
{
    double sum = 0.0;

    for(int i = 0; i < 3; i++)
    {
        sum = sum + (*ptr1)*(*ptr1);
        ptr1++;
        
    }

    double result = sqrt(sum);
    return result;

}

double maxNorm(double vec1[])
{
    double maxValue = abs(vec1[0]); 
    for(int i = 1; i<3; i++)
    {
        if(abs(vec1[i]) > maxValue)
        {
            maxValue = abs(vec1[i]);
        }
    }
        
    
    return maxValue;
    //std::cout << "maximum norm of given vector is:  " << maxValue << std::endl;
}
