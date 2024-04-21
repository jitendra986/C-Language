#include<iostream>
using namespace std;

//but to give value in console, I develop another method "showData"

class Employees
{
    int empId; //
    char firstName[50]; //
    char lastName[50]; //
    int salary; //
    char email[50]; //
    long long int conNo;

    public:
    void setData() // setter method 
    {
        cout<< "Enter Employee Id"<<endl;
        cin>>empId;

        cout<<"Enter employee first name: "<<endl;
        cin>>firstName;

        cout<<"Enter employee last name: "<<endl;
        cin>>lastName;

        cout<<"Enter employee Salary: "<<endl;
        cin>>salary;

        cout<<"Enter employee emailId: "<<endl;
        cin>>email;

        cout<<"Enter employee Contact number: "<<endl;
        cin>>conNo;

    }

    void showData() // getter method 
    {
        cout<< "Employee Id = "<<empId<<endl;
        cout<< "Employee firstName =" <<firstName<<endl;

        cout<<"Employee lastName =" <<lastName<<endl;
        cout<<"Employee salary =" <<salary<<endl;

        cout<<"Employee email Id ="<<email<<endl;
        cout<<"Employee mobile contact number =" <<conNo<<endl;
    }
};

int main()
{
    Employees c;
    c.setData();
    c.showData();

    //private data member present inside class can be accessed via member function
    // present inside that class can be accessed via member function

    return 0;
}