#include<iostream>
using namespace std;

class Complex 
{
    int a,b;
    public:
    //creating a constructor, Constructor is a special member 
    //function with same name as of the class.  It is used to initialize the objects of its class.
    //It is automatically invoked whenever an object is created.
    //(invoke ka matlab hota hai call karna)

    Complex(void);//constructor declaration
    void printNumber()
    {
        cout<<"Your number is "<< a <<" + "<< b <<" i "<<endl;

    }
};

Complex::Complex(void) //-----> This is a default constructor as it takes no parameters
{

    a=10;
    b=20;

    //cout<<"Hello world!"<<endl;
}


int main() {
    Complex c;
    c.printNumber();
    c.printNumber();
    c.printNumber();
    
    return 0;
}

/*----------------------------------------------------------------
Properties of constructor:
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3 They cannot return values and do not have return types.
4. It can have default arguments.
5. we can not refer to their address.



*/