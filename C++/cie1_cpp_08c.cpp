#include <iostream>
#include <string>

class ImplicitGeometry
{
public:
    virtual ~ImplicitGeometry( ) { }

    virtual bool inside( double x, double y ) const = 0;
};

class Circle : public ImplicitGeometry
{
public:
    Circle( double x, double y, double r ) :
        x_( x ), y_( y ), r_( r )
    { }

    bool inside( double x, double y ) const
    {
        double dx = x - x_;
        double dy = y - y_;

        return dx * dx + dy * dy <= r_ * r_;
    }

private:
    double x_, y_, r_;
};

class Rectangle : public ImplicitGeometry
{
public:
    Rectangle( double x1, double x2, double y1, double y2 ) :
        x1_( x1 ), x2_( x2 ), y1_( y1 ), y2_( y2 )
    { }

    bool inside( double x, double y ) const
    {
        return x >= x1_ && x <= x2_ && y >= y1_ && y <= y2_;
    }

private:
    double x1_, x2_, y1_, y2_;
};

class Intersection : public ImplicitGeometry
{
public:
    Intersection( ImplicitGeometry* operand1,
                  ImplicitGeometry* operand2 ) :
        operand1_( operand1 ), operand2_( operand2 )
    { }

    bool inside( double x, double y ) const
    {
        return operand1_->inside( x, y ) && 
               operand2_->inside( x, y );
    }

private:
    ImplicitGeometry* operand1_;
    ImplicitGeometry* operand2_;
};

void visualize( const ImplicitGeometry& c )
{
    // Number of characters in terminal
    int nx = 70;
    int ny = 40;

    // Window in x-y plane
    double x1 = 0.0;
    double y1 = -0.1;

    double x2 = 1.0;
    double y2 = 1.1;

    for( int i = ny - 1; i >= 0; --i )
    {
        for( int j = 0; j < nx; ++j )
        {
            double x = j / ( nx - 1.0 ) * ( x2 - x1 ) + x1;
            double y = i / ( ny - 1.0 ) * ( y2 - y1 ) + y1;

            if( c.inside( x, y ) )
            {
                std::cout << "X";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main( )
{
    Circle c1( 0.2, 0.5, 0.4 );
    Circle c2( 0.8, 0.5, 0.4 );
    //Rectangle r( 0.1, 0.5, 0.1, 0.5 );

    Intersection s( &c1, &c2 );

    visualize( s );
}
