#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s; // It is by default private.
    void chk_bin(void);

public:
    void read(void); // it means this not taking anything.

    void ones_compliment(void);
    void display(void);
};

void binary::read(void)// definition of public method read(void)  declared in class binary.
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)// s.length() will check the length of string.
    {
        if (s.at(i) != '0' && s.at(i) != '1')// s.at(i) it means character at the ith index of string's'.
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // exit with error code of 0
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); // This is called nesting of member function
    //If one wants to run chk_bin() run automatically. He can use this nesting function.
    //approach.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        cout << endl;
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    //OOps - Classes and Objects

    //C++  ---> Intially called ----> C with classes by stroustroup
    //classes --> extension of structures (in C)
    // Structures had limitations.
    //      ---> members are public.
    //      ---> No methods can be made inside structures..
    // classes ---> structures + more.
    // classes---> can have methods and properties.
    // classes---> can make few members as private  & few as public.
    // structures in  c++ are typedef,
    // it means we dont need to declare structure variable
    // you can declare objects along with the class declaration like this:
    /*class Employee{
                 class definition
            } harry,rohan, lovish;*/

    // Nesting of member functions
    binary b;
    b.read();
    //b.chk_bin(); // will not run because chk_bin() is a private function
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}