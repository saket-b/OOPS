
#include <iostream>
using namespace std;
 
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

void add( int a, int b, int c)
{
    cout<<"\n"<<"sum = "<<(a+b+c)<<endl;
}
 
// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);
    add(1, 2, 3);
 
    return 0;
}