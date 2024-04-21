#include<iostream>
using namespace std;


class Base1{
    public:
    void greet(){
        cout<<" How are you? "<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<" Kaise ho? "<<endl;
    }
};

class Derived: public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();//
    }
};
class B{
    public:
    void say(){
        cout<<" Hello world!"<<endl;
    }
};

class D: public B{
    int a;
    //D's new say() method will override base class's say() method.
    public:
    void say(){
        cout<< " Hello my beautiful people"<<endl;
    }
};

int main() {
    // Ambiguity1
    /*Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet();//To resolve the ambiguity arised due to inheriting the
    //method with same name but with different classes.*/

    //Ambiguity 2
    B b;
    b.say();

    D d;
    d.say(); //D's new say() method will override base class's say() method.
    
    return 0;
}