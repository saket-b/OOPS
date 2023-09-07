#include <iostream>
using namespace std;
class Test
{
private:
    int x;
public:
    Test(int i)
    {
        x = i;
        cout << "Called" << endl;
    }
};
 
int main()
{
    Test t(20);
    t = 30; // conversion constructor is called here.
    return 0;
}

//outpput
// called
//called


// Question 17-Explanation: 
// If a class has a constructor which can be called with a single argument, then this constructor becomes conversion constructor because such a constructor allows automatic conversion to the class being constructed. A conversion constructor can be called anywhere when the type of single argument is assigned to the object. The output of the given program is
// Called
// Called