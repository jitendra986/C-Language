#include<iostream>
#include<string>

class ImplicitGeometry
{
public:
	virtual bool inside(double x, double y, double z)const = 0;
};


class Ellipsoid:public ImplicitGeometry
{
public:
	Ellipsoid(double x, double y, double z,double a,double b, double c) :
		x_(x), y_(y),z_(z),a_(a),b_(b),c_(c)
	{}

	bool inside(double x, double y, double z) const
	{
		double dx = (x - x_)/a_;
		double dy = (y - y_)/b_;
		double dz = (z - z_)/c_;

		return dx * dx + dy * dy+ dz*dz <= 1;

	}



private:
	double x_, y_, z_,a_,b_,c_;
};

int main()
{

	Ellipsoid f(0.5, 0.5, 0.4,2,3,5);
	std::cout << "Testing point(0.25,0.25,0.25): " << f.inside(0.25, 0.25,0.25) << std::endl;
}