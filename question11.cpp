#include<iostream>
using namespace std;
class Point {
    int x;
public:
    Point(int x) { this->x = x; }
    Point(const Point p) { x = p.x;}
    int getX() { return x; }
};
 
int main()
{
   Point p1(10);
   Point p2 = p1;
   cout << p2.getX();
   return 0;
}
//output
//Compiler Error: p must be passed by reference
//The reason is simple, if we don't pass by reference, then argument p1 will be copied to p. So there will be a copy constructor call to call the copy constructor, which is not possible.
