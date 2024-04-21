#include<iostream>
using namespace std;

class Number 
{
    int a;
    public:
        //Number(){};
        Number(){
            // if you are making 
        //a parameterized constructor then always make a default constructor before it.
            a = 0;
        };
        Number(int num)
        {
            a = num;
        }
        // when no copy constructor is found, compiler supplies its own copy constructor.

        Number(Number &obj)
        {
            // copy contructor ek aisa constructor hai jo dusre object ki copy bana deta hai.
            cout<<"Copy constructor called!!! "<<endl;
            a = obj.a;
        }
        void display()
        {
            cout<<" The number for this project is "<< a<<endl;
        }

};

int main() 
{
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); //copy constructor invoked.
    z1.display();
    Number p1(y); //copy constructor invoked.
    p1.display();
    Number p2(z); //copy constructor invoked.
    p2.display();
    //z1 should exactly resemble z  or x or y
    z2 = z; //Copy constructor is not going to be invoked. 
    //because z2 is already built
    z2.display();

    Number z3 = z;// yes this time copy constructor will invoke.
    z3.display();
    return 0;
}