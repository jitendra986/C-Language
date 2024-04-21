#include <iostream>
using namespace std;

//Function prototype 
//type function-name(arguments);
// If we declare function in the begining then
// even if i  define it after int main(), it would not cause any error.
//int sum(int a, int b);//---> Acceptable
//int sum(int a,  b); //---> Unacceptable
int sum(int , int );//---> Acceptable
//void g(void); //---> Acceptable
void g(); //---> Acceptable


int main()
{
    int num1,num2;

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();

    return 0;
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
}
void g(){
    cout<<"Hello, Good Morning";
}