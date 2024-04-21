#include<iostream>
using namespace std;

int main() {
    // Pointer stores the address of different datatypes
    // &a--> address of a
    int a = 4;
    int* ptr = &a;// here ptr stores the address of 'a'

    cout<<" The value of a is "<<*(ptr)<<endl;

    // new operator
    //int *p = new int(40);
    float *p = new float(40.78);
    cout<< "The value  at address p is "<<*(p)<<endl;

    //Dynamic array 
    int *arr = new int[3];
    arr[0] =10;
    //arr[1] =20;
    *(arr+1) =20;
    arr[2] =30;

    
    cout<< "The value of arr[0] is "<<arr[0]<<endl;
    cout<< "The value of arr[1] is "<<arr[1]<<endl;
    cout<< "The value of arr[2] is "<<arr[2]<<endl;

    delete [] arr;
    //delete operator
    return 0;
}   