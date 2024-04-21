#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
       cout<<v[i]<<" "; 
        
    }
    cout<<endl;
}

int main() {
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;

    for(int i=0;i<size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;

        vec1.push_back(element);

    }
    //vec1.pop_back();// removes last element of vector.

    display(vec1);
    vector<int>:: iterator iter= vec1.begin();// 'iter' is like a pointer who is going to point some element.
    //vec1.insert(iter+1,566);
    //vec1.insert(iter+3,252);
    vec1.insert(iter+3,5,252);//To insert the 5 copy of 252

    display(vec1);

    return 0;
}