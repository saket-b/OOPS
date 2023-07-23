#include <iostream>
using namespace std;

// Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.

//throw − A program throws an exception when a problem shows up. This is done using a throw keyword.

/*catch − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. 
            The catch keyword indicates the catching of an exception.*/

//try − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.

void func(){

    int x = 50;
    int y = 0;

    try{

        if( y == 0)
        throw string ("division exception occured");
        cout<<x/y<<endl;
        
    }

    //this 1 : types of exception
    catch(string x)
    {
        
        cout<<"Div exception is occured : "<<x<<endl;
    }
    
   // 2 : type exception

    catch( ...) // all type of exception come in side this catch
    // Note : this must be appear in last other compiler gives error;
    {
        cout<<"Default Exception"<<endl;
    }




}

 
int nested_try_catch()
{
    try {
        try {
            throw 5 ;
        }
        catch (int n) {
            cout << "Handle Partially "<<endl;
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining "<<endl;
    }
  
    return 0;
}

class Test {
public:
    Test() { cout << "Constructor of Test " << endl; }
    ~Test() { cout << "Destructor of Test " << endl; }
};

class Base {};
class Derived: public Base {};


void func3()
{

    try{

        throw 8;
    }
    catch(int x)
    {
        cout<<"int Exception : "<<x<<endl;
    }
    catch( ...)
    {
        cout<<"Default Exception"<<endl;
    }
    

}
 


int main()
{

    func();
    nested_try_catch();

     try {
        Test t1;
        throw 10;
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }


//     Derived d;
//    try {
//        throw d;
//    }
//    catch(Base b) {
//         cout<<"Caught Base Exception"<<endl;
//    }
//    catch(Derived d) {
//         cout<<"Caught Derived Exception"<<endl;
//    }

   func3();
}