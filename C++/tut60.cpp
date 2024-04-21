#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it.
 There are 2 ways to open a file :

1.  Using the constructor.
2.  Using the member function open() of the class.
*/

int main()
{

    string st = "Jitendra bhai Jumbo";
    string st2;

    // Opening files using constructor and writing  it.//
    ofstream out("sample60.txt"); // write operation
     // 'out' is an object of 'ofstream' class. and 'out' object is going to open the 'sample60.txt' file.
    out << st;// one can choose any name of object.

    // Opening files using constructor and reading it.//
    // ifstream in("sample60b.txt"); // write operation
    // 'out' is an object of 'ofstream' class. and 'out' object is going to open the 'sample60.txt' file.
    // in>>st2;//it only give first word of first line of 'sample60b.txt'

    // getline(in, st2);
    //'getline' function is going to store first line of "sample60b.txt" in the object 'in' of
    //'ifstream' class and transferred to the string st2, which later print in the console.
    // cout << st2;

    return 0;
}