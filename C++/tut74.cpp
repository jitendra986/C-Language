#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main() {
    // Function objects (i.e Functor): Function wrapped in a class so that it is available like an object.

    int arr[] = {1,73,4,2,54,8};
    sort(arr, arr+6, greater<int>());// greater<int>() is a functional objects,  which is going to sort the array in descending order.
    //sort(arr, arr+5);// by default the array was sorted in ascending order.

    for(int i=0;i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}