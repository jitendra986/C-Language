#include<iostream>
using namespace std;

void m1(){
    cout<<"m1 function"<<endl;
}

class Test{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
};

//All the variable like x,y,z are instance variable, in three different  area, but inside class only.
// Instance is  synonym of object and object contains Instance variable. 
//we can make instance variable in class area (public,private ,protected)

int main(){
    cout << "main function..." << endl;
    m1();
}
