#include <iostream>

int main( )
{
    const int n = 8;
    int values[n];

    std::cout << "Input values:" << std::endl;
    for( int i = 0; i < n; ++i )
    {
        std::cout << i + 1 << ":\t";
        std::cin >> values[i];
    }
        
    std::cout << "\nValues are: ";
    for( int i = 0; i < n; i++ )
    {
        std::cout << values[i] << " ";
    }

    // Sorting
    for( int k = 1; k < n; k++ )
    {
        std::cout << std::endl;
    
        for( int j = n - 1; j >= k; j-- )
        {
            if( values[j - 1] > values[j] )
            {
                // Swap elements
                int temp = values[j - 1];
                values[j - 1] = values[j];
                values[j] = temp;
            }

            // Output current step
            std::cout << "\nk = " << k << ", j = " << j << ":\t";
            for( int i = 0; i < n; i++ )
            {
                std::cout << values[i] << "  ";
            }
        }
    }

    std::cout << std::endl;
}