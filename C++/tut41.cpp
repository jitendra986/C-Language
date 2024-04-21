#include <iostream>
using namespace std;

/*Syntax for inheriting in multiple inheritance
class DerivedC:visibility-mode base1, visibility-mode base2
{
    class body of class "DerivedC";
};
*/
/*
For a protected members:
                        public derivation   private derivation  protected derivation
1. private members     not Inherited        not Inherited       not Inherited
2. protected members    protected           private             protected
3. public members       public              private             protected
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base3 is "<<base3int<<endl;
        cout<<"The sum of these value  is "<<base1int+base2int+base3int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected
Member function:
    set_base1int() -->public
    set_base2int() -->public
    show()--> public

*/

int main()
{
    Derived jt;
    jt.set_base1int(25);
    jt.set_base2int(5);
    jt.set_base3int(15);
    jt.show();

    return 0;
}