#include <iostream>
using namespace std;
/*
Destructor never takes an argument nor does it return any value.
*/
int count = 0; //global variable.
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number. " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << " we are inside our main function " << endl;
    cout << " Creating first object n1 " << endl;

    num n1;
    {
        cout << " Entering this block" << endl;
        cout << " creating two more objects " << endl;

        num n2, n3;
        cout << "Exiting this block " << endl;
        /*
        block ke andar jo bhi memory allocate hogi, wo jaise hi block exit hoga wo destroy ho jaayegi.
        */
    }
    cout << "Back to main " << endl;

    return 0;
}