#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<T> vec1;
    // int element, size;
    int size;
    T element;
    cout << "Enter the size of your vector" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector";
        cin >> element;

        vec1.push_back(element);
        /
    }
    display(int vec1);

    return 0;
}