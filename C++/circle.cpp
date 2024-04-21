#include<iostream>
#include<string>

class ImplicitGeometry 
{
    public:
    virtual bool inside(double x,double y) const =0;

};

class circle:public ImplicitGeometry
{
    public:
    circle(double x,double y,double r):
    x_(x),y_(y),r_(r)
    {}

    bool inside(double x,double y) const
    {
        double dx= x-x_;
        double dy= y-y_;
        return dx*dx+dy*dy<=r_*r_;

    }
    private:
    double x_,y_,r_;
};

int main() {

    circle c(0.5,0.5,0.4);

    std::cout<<"Testing point(0.25,0.25)"<<c.inside(0.25,0.25)<<std::endl;
    
    return 0;
}