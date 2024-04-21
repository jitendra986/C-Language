#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;// static variable by default initialize with zero.
    // static variable is a class variable.
    //int count = 0;
public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this Employee is " << id<<"and this is the employee number"<<count<<endl;
    }

    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count=100;  // Default value is zero.


int main()
{
    Employee harry, rohan, lovish;
    //harry.id =1;
    //harry.count =1 //cannot do this as id and count are private
    /*
    Two properties of static functions are:
    1> They can access only static data members.
    2> They can run without making any object for the class
    */
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}