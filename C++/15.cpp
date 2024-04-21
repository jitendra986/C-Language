#include <iostream>
using namespace std;

// This program compile only but to get value in console, I develop another method "showData"

class c1
{
public:
    int empId;
    char empName[50];

public:
    void setData()
    {
        // setter method
        cout << "Enter Employee Id" << endl;
        cin >> empId;
        cout << "Enter Employee name" << endl;
        cin >> empName;
    }

    void showData()
    {
        // getter method
        cout << "Employee Id= " << empId << endl;
        cout << "Employee Name= " <<empName << endl;
    }
};
//by default all data members and member function present inside class are private.

int main(){
    c1 c;
    c.setData();
    c.showData();
    // private data member present inside class can be accessed via members function present inside class.
    return 0;

}