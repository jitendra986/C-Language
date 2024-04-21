#include <iostream>
using namespace std;

int main(){

    cout << "Hello world!" << endl;
    string fruit = "apple";
    string fruits[5] = {"apple", "orange","pear", "strawberry", "banana"};

    for(int i = 0; i<5; i++) {

        cout << fruits[i] << endl;

    }
    return 0;
}
