// Example:

#include<iostream>
using namespace std;

class Test
{
public:
    int x;
    int y;
    // default constructor
		Test()
	{
        
			cout<<"\n Constructor executed";
	}

    // copy constructor
    Test (Test &p)
    {
        x = p.x;
        y = p.y;
    }

    // parametrise constructor 
    Test(int xf, int yf){
        x = xf;
        y = yf;
    }

	~Test()
		{
			cout<<"\n Destructor executed";
            
		}
};
int main()
{
	Test t(1, 3), *obj;
    Test a = t;
    obj = new Test(1,4);
    cout<<obj->x<<obj->y<<endl;
    cout<<t.x<<" "<<t.y<<endl;
    cout<<a.x<<" "<<a.y<<endl;

	return 0;
}
