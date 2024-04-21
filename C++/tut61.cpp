#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // Connecting our file with hout stream.
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user.
    string name;
    cout << "Enter your name: ";

    cin >> name;

    // Writing a string to the file
    hout << name + " is My name ";

    hout.close();

    ifstream hin("sample60.txt");
    string contents;

    hin >> contents;

    //getline(hin, contents);

    cout << " The content of this file is : " << contents;

    hin.close();
    return 0;
}