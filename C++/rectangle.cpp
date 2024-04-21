#include<iostream>
#include<string>

class ImplicitGeometry
{
public:
	virtual bool inside(double x, double y)const = 0;
};


class Rectangle:public ImplicitGeometry
{
public:
	Rectangle(double x1, double x2, double y1,double y2) :
		x1_(x1), x2_(x2),y1_(y1),y2_(y2)
	{}

	bool inside(double x, double y) const
	{
		

		return x>=x1_ && x<=x2_ && y>=y1_ && y<=y2_;

	}



private:
	double x1_, x2_, y1_,y2_;
};

int main()
{

	Rectangle f(0.1, 0.9, 0.1, 0.9);
    ImplicitGeometry* ptr = &f;
	std::cout << "Testing point(0.25,0.25): " << ptr->inside(0.25, 0.25) << std::endl;
}