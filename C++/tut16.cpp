#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This function will not swap a and b.
void swap(int a, int b)// temp  a  b
{
    int temp = a;       // 4     4  5
    a = b;              // 4     5  5
    b = temp;           // 4     5  4 
}

// Call by reference using pointers
void swapPointer(int *a, int *b)// temp  a  b
{
    int temp = *a;       // 4     4  5
    *a = *b;              // 4     5  5
    *b = temp;           // 4     5  4 
}

// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b)// temp  a  b
{
    int temp = a;       // 4     4  5
    a = b;              // 4     5  5
    b = temp;           // 4     5  4 
}

// return by by reference using C++ reference variables
int & returnReferenceVar(int &a, int &b)// temp  a  b
{
    int temp = a;       // 4     4  5
    a = b;              // 4     5  5
    b = temp;           // 4     5  4 
    return a; // value of a would be changed 
    //if returnReferenceVar will be assigned some value in int main()
}

int main()
{
    int x = 4,y = 5;
    //*********************Reference Variables****************
    //Rohan Das---->Monty------>Rohu------>Jitendra
    float a = 455;
    float &b = a;// It means b will also point to a now
    cout<<a<<endl;
    cout<<b<<endl;


    //cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    //swap(x,y); This function will not swap a and b.

    //swapPointer(&x, &y);//This function will swap a and b using pointer reference.
    
    //swapReferenceVar(x, y);//This will swap a and b using  reference.
    // returnReferenceVar(x, y) ;//This will swap a and b using  reference.
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    returnReferenceVar(x, y)=766 ;//This will swap a and b using  reference.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
}