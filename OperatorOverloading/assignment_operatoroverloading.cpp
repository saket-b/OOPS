 
#include <iostream>
using namespace std;

class Base {

	private :
	int x; 
	int y;
	public:
	Base()
	{
	
	}
	Base( int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	
	Base( Base &other)
	{
        cout<<"copy constructor called"<<endl;
		x = other.x;
		y = other.y;
	}
	
	void operator= ( Base &other)
	{
        cout<<"operator overloading"<<endl;
		Base obj;
		x = other.x;
		y = other.y;
		//return obj;
	}
	void display()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
	
	}
    void change(int x1, int y1)
    {
        x = x1;
        y = y1;
    }


};

int main()
{
	Base obj1(1, 2);
	Base obj2 ;
    obj2 = obj1;

	obj1.change(4, 5);
   
	obj2.display();
}