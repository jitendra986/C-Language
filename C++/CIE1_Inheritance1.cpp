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

int main() {
    Tire t; //create an instance of Tire.
    Engine e; //create an Instance of Engine.

    Part* tPtr = &t;//create pointer to a Part and assign address of a Tire.
    Part* ePtr = &e;//create pointer to a Part and assign address of an Engine.

    // What we can do:
    e.status(); // call status member function of Engine. Nothing new here.
    t.print(); // call print on a tire Tire
    e.print(); // call print member function of Part inherited by Engine
    tPtr->print(); // call Part::print on a Part* that is pointing to a Tire
    ePtr->print(); // call Part::print on a Part* that is pointing to an Engine

    //tPtr, ePtr are pointer of 'Part' hence they can access print function through a Part pointer.
    // what we cannot do:
    ePtr->status(); // we can not call status on a Part* as Part doesn’t know about
    // the existence of a status function
    
    return 0;
}