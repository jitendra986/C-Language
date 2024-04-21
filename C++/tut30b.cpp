#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x,y;
    friend void distance(Point, Point);
    public:
        Point(int a,int b)
        {
            x = a;
            y = b;

        }

        void displayPoint()
        {
            cout<<"The point is ("<< x <<", "<<y<<")"<<endl;
        }


};
/*----------------------------------------------------------------
Create a function which takes 2 point objects and computes 
the distance between those points
*/
void distance(Point o1, Point o2)
{
    int a = o1.x - o2.x;
    int b = o1.y - o2.y;
    cout << "distance between two points " << sqrt(a*a +b*b) << endl;
}

int main() {
    Point p1(1,1);
    p1.displayPoint();

    Point p2(0,1);
    p2.displayPoint();
    Point p3(0,6);
    p3.displayPoint();
    Point p4(1,0);
    p4.displayPoint();
    Point p5(70,0);
    p5.displayPoint();

    distance(p1,p1);
    distance(p2,p3);
    distance(p4,p5);
    
    
    return 0;
}