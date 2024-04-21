#include <iostream>
using namespace std;

class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    friend void add(X,Y);
    // class Y is not defined yet hence we need to create a forward declaration of class Y.
    // It will allow add method to have access the private variable of class X.1
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    friend void add(X,Y);
    // It will allow add method to have access the private variable of class Y
};

void add(X o1, Y o2)
{
    cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1,b1);


    return 0;
}