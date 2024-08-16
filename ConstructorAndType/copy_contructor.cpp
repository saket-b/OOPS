// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
public:
	int x, y;

public:
	// Point(int x1, int y1)
	// {
	// 	x = x1;
	// 	y = y1;
	// }
	Point( )
	{

	}

	// Copy constructor
	
	Point( Point &p1)
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Point p1; // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	p2.x  = 50; 
	p2.y = 60;
	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();
	return 0;
}
