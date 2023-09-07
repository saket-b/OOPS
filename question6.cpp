#include <iostream>
using namespace std;
 
class Point
{
    int x, y;
public:
   Point(const Point &p) { x = p.x; y = p.y; }
   int getX() { return x; }
   int getY() { return y; }
};
 
int main()
{
    Point p1;
    Point p2 = p1;
    cout << "x = " << p2.getX() << " y = " << p2.getY();
    return 0;
}

// output 
//compiler error 

//There is compiler error in line "Point p1;". The class Point doesn't have a constructor without any parameter. If we write any constructor, then compiler doesn't create the default constructor. It is not true other way, i.e., if we write a default or parameterized
 //constructor, then compiler creates a copy constructor. See the next question.