#include <iostream>
using namespace std;

/*
this code give me error b/c of show is pure virtual function So, it must be overrid in dereved if base class inherited
class Base {

    public :
   virtual void show() = 0; 
};

class Dereived : public Base {
    public:
    int b;


};

int main()
{
    Dereived d;
       
}

*/

class Base {

    public :
   virtual void show(){}; 
   void  sum();
};

class Dereived : public Base {
    public:
    int b;

    void show(){
        cout<<"saket"<<endl;
    }

    void sum (){
        cout<<9+4<<endl;
    }


};

int main()
{
    Dereived d;
       d.show();
       d.sum();
       
}