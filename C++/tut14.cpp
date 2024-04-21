#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;// 4 byte
    char favChar;// 1 byte
    float salary;//4 byte
}ep;

union money
{
    /* data */
    int rice; // 4 byte
    char car;// 1 byte
    float pounds;// 4 byte
};



int main() 
{
    enum Meal{breakfast,lunch,dinner};//datatype
    Meal m1 = lunch;

    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // struct employee harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // ep harry;
    // ep shubham;
    // ep rohanDas;
    // harry.eId =1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    // ep harry;
    // union  money m1;
    // m1.rice = 34;
    // m1.car = 'c';// this will overrite the value of rice
    // // hence we will get garbage value when we try to print m1.rice
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    
    return 0;
}