#include<iostream>
using namespace std;

// This program compile only but doesnot give any value in console.

class c1
{
    int empId; //
    char empName[50]; //

    public:
    void setData()// setter method 
    {
        cout<< "Enter Employee Id"<< endl;
        cin>> empId;

        cout<< "Enter Employee Name"<< endl;
        cin>> empName;

        
    }
};
//By default all data member and memberfunction present inside class are private.

int main(){

    c1 c; //
    c.setData();
    // private data members present inside class can be accessed via member function present inside class.
    return 0;

}