// C++ Program to demonstrate
// Static member in a class
#include <iostream>
using namespace std;

// class Student {
// public:
// 	// static member
// 	static int total;

// 	// Constructor called
// 	Student() { total += 1; }
// };

// int Student::total = 0;

// int main()
// {
// 	// Student 1 declared
// 	Student s1;
//     s1.total = 10;
// 	cout << "Number of students:" << s1.total << endl;

// 	// Student 2 declared
// 	Student s2;
// 	cout << "Number of students:" << s2.total << endl;

// 	// Student 3 declared
// 	Student s3;
// 	cout << "Number of students:" << s3.total << endl;
// 	return 0;
// }

// static function 

// C++ Program to show the working of
// static member functions


class Box
{
	private:
	static int length;
	static int breadth;
	static int height;
	
	public:
	
	static void print()
	{
		cout << "The value of the length is: " << length << endl;
		cout << "The value of the breadth is: " << breadth << endl;
		cout << "The value of the height is: " << height << endl;
	}
};

// initialize the static data members

int Box :: length = 10;
int Box :: breadth = 20;
int Box :: height = 30;

// Driver Code

int main()
{
	
	Box b;
	
	cout << "Static member function is called through Object name: \n" << endl;
	b.print();

	
	Box c;
	cout << "\nStatic member function is called through Class name: \n" << endl;
	c.print();
	
	return 0;
}

