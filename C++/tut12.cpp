#include <iostream>
using namespace std;

int main()
{

    // what is pointer? ---> data type which hold the address of other data types

    int a = 3;
    int *b = &a;
    /*
    //  & ----> Address of operator
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The  address of b is: " << &b << endl;
    

    //  * ----> (Value at) Dereference of operator
    cout << "The the value stored at address of a is: " << *b << endl;
    cout << "The value stored at address of b is: " << *(&b) << endl;
    */
    //Pointer to pointer 
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b represented by c is "<<c<<endl;
    cout<<"The Value of address c is "<< *c<<endl;
    cout<<"The Value at address value_at (value_at c) is "<< **c<<endl;
    return 0;
}