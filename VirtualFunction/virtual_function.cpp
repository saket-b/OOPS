// // C++ program to illustrate
// // concept of Virtual Functions
 
#include <iostream>
using namespace std;
 
// class base {
// public:
//    // virtual void print() = 0;  // we cannot creat object of base b/c of pure virtual function;
   
//     virtual void print() { cout << "print base class\n"; }
 
//     void show() { cout << "show base class\n"; }
// };
 
// class derived : public base {
// public:
//     void print() { cout << "print derived class\n"; }
 
//     void show() { cout << "show derived class\n"; }
// };
 
// int main()
// {
//     base* bptr;
//     base p;
//     derived d;
//     bptr = &d;
 
//     // Virtual function, binded at runtime
//     bptr->print();
//     p.print();
//     // Non-virtual function, binded at compile time
//     bptr->show();
//     d.print();
 
//     return 0;
// }



//Without "virtual" you get "early binding". Which implementation of the method is used gets decided at compile time based on the type of the pointer that you call through.

//With "virtual" you get "late binding". Which implementation of the method is used gets decided at run time based on the type of the pointed-to object - what it was originally constructed as. This is not necessarily what you'd think based on the type of the pointer that points to that object.

class Base
{
  public:
            void Method1 ()  {  std::cout << "Base::Method1" << std::endl;  }
    virtual void Method2 ()  {  std::cout << "Base::Method2" << std::endl;  }
};

class Derived : public Base
{
  public:
    void Method1 ()  {  std::cout << "Derived::Method1" << std::endl;  }
    void Method2 ()  {  std::cout << "Derived::Method2" << std::endl;  }
     void Method3 ()  {  std::cout << "Derived::Method2" << std::endl;  }
};

int main()
{

Base* basePtr = new Derived ();
  //  Note - constructed as Derived, but pointer stored as Base*

basePtr->Method1 ();  //  Prints "Base::Method1"
basePtr->Method3 ();  //  Prints "Derived::Method2"
}