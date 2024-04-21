#include <iostream>
using namespace std;

unsigned long long int factorial(int n)
{
    if(n<=1)
    {
        return 1;  
    }
    return n*factorial(n-1);
}
unsigned long long int fibonacci(int n)
{
    if(n<2)
    {
        return 1;  
    }
    return fibonacci(n-2)+fibonacci(n-1);
}
int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The factorial of  "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position  "<<a<<" is "<<fibonacci(a)<<endl;
    return 0;
}