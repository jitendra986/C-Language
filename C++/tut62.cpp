#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream out;
    out.open("sample60.txt");
    out<<" This is me: \n";
    out<<" This is me also: \n ";
    out<<" This is also me : \n ";
    out<<" This is alsi me : \n ";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample60.txt");

    in>>st>>st2;
    cout<<st<<" " <<st2<<endl;
    in.close();

    return 0;
}