#include<iostream>
using namespace std;

class Part
{
    public:
    Part();
    Part(std::string manufacturer, int number);

    void print();

    private:
    std::string manufacturer_;
    int number_;
};

class Tire: public Part
{
    private:
     double radius_;

};

class Engine: public Part
{
    public:
     int status();

};

int main() 
{
    Tire t1, t2, t3;
    Engine e1, e2;
    Part p1, p2;
    Part* parts[] = { &t1, &t2, &t3, &e1, &e2, &p1, &p2 };
    int n = sizeof( parts ) / sizeof( Part* );
    for( int i = 0; i < n; ++i )
    {
    parts[i]->print( );
    }
        
    return 0;
}