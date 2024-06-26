#include <iostream>

using namespace std;

int c = 45; // global variable
int main()
{
    // **************Build in Data types*******************
    /*int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a+b;
    cout<< "The sum is "<<c<<endl;
    cout<< "The global c is "<<::c; */
    // scope resolution operator will allow me to access the value of global c

    // **************float, double and long double  Literals*******************
    /*
    float d = 34.4f; // by adding 'f' in the end of a number, it act like floating nr
    long double e = 34.4l;
    //by adding 'f' in the end of a number, it act like long double nr

    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    cout << "The value of d is " << d << endl
         << " The value of e is " << e;
         */

    // ****************Reference variables******************
    // Rohan Das ----> Monty ----> Rohu -----> Dangerous Coder( all are the name of same person)

    /*
    float x = 455; 
    float & y = x;

    cout<<x<<endl;

    cout<<y<<endl;*/

    //*************** Typecasting ****************************

    int a = 45;
    float b = 45.46;

    cout<< "The value of a is "<<(float)a<<endl;
    cout<< "The value of a is "<<float(a)<<endl;

    cout<< "The value of b is "<<(int)b<<endl;
    cout<< "The value of b is "<<int(b)<<endl;

    int c = int(b);

    cout<<" The expression is "<<a + b <<endl;
    cout<<" The expression is "<<a + int(b) <<endl;
    cout<<" The expression is "<<a + (int)b <<endl;

    return 0;
}