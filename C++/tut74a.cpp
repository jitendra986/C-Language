#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects (i.e Functor): Function wrapped in a class so that it is available like an object.

    int arr[] = {1, 73, 4, 2, 54, 22};
    sort(arr, arr + 5);// sort element 1 ,73 ,4,2,54

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}