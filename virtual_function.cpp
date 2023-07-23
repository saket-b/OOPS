// C++ program to illustrate
// concept of Virtual Functions
 
#include <iostream>
using namespace std;
 
class base {
public:
   // virtual void print() = 0;  // we cannot creat object of base b/c of pure virtual function;
   
    virtual void print() { cout << "print base class\n"; }
 
    void show() { cout << "show base class\n"; }
};
 
class derived : public base {
public:
    void print() { cout << "print derived class\n"; }
 
    void show() { cout << "show derived class\n"; }
};
 
int main()
{
    base* bptr;
    base p;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at runtime
    bptr->print();
    p.print();
    // Non-virtual function, binded at compile time
    bptr->show();
    d.print();
 
    return 0;
}