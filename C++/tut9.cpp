#include <iostream>

using namespace std;

int main()
{
    //cout<<" This is tutorial 9: ";
    int age;

    cout << "Tell me your age : " << endl;
    cin >> age;

    // selection control structure: If-else ladder
    /*
    if ((age < 18) && (age>0))
    {
        cout << " You canot come to my party. " << endl;
    }
    else if (age == 18)
    {
        cout << " You are a kid and you will get a kid pass to enter in the party" << endl;
    }

    else if (age < 1)
    {
        cout << " You are not yet born " << endl;
    }

    else
    {
        cout << " You can comme to the party" << endl;
    }
    */
    switch (age)
    {
    case 18:

        cout << "You are 18 " << endl;
        break;
    case 22:

        cout << "You are 22 " << endl;
        break;

    case 2:
      cout << "You are 2 " << endl;
        break;

    default:
        cout << " No special cases " << endl;
        break;
    }

    cout<<" Done with switch cases " << endl;
    return 0;
}