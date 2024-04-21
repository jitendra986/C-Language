#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}


int main()
{
    //Harry<float> h(5.7);// invoking of constructor
    Harry<char> h('r');// invoking of constructor
    cout<<h.data<<endl;
    h.display();
    //func(4);  // Exact match takes the highest priority.
    //func1(4); //

    return 0;
}