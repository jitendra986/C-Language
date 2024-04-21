#include<iostream>
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
        void display()
        {
            cout<<data<<endl;
        }

};
int main() {
    Harry<float> h(6.5);// invoking of constructor
    cout<<h.data<<endl;
    h.display();
    
    return 0;
}