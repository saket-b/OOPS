
// C++ program to demonstrate function overriding
 
#include <iostream>
using namespace std;
 
class Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
    void status(){

        cout<<"status"<<endl;
    }
};
 
class Child : public Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Derived Function" << endl;
        Parent :: GeeksforGeeks_Print();
    }
    void xyz(){
        cout<<"xyz"<<endl;
    }
};
 
int main()
{
    Parent *base, b;
    Child Child_Derived, *p;

  
    base = new Child();
    base->GeeksforGeeks_Print();// Base function
    base->status();
   // base->xyz();

   Child_Derived.Parent::GeeksforGeeks_Print();
   Child_Derived.GeeksforGeeks_Print();
    return 0;
}