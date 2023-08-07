#include<bits/stdc++.h>

using namespace std;

class A{
public:
    A(){
        cout<<"base"<<endl;
    }
    ~A(){
        cout<<"destructor"<<endl;
    }

};
class derived : public A{

    public:
    derived(){
        cout<<"derived class"<<endl;

    }

    ~derived (){
        cout<<"derived destructor"<<endl;
    }
};


void hello(){
    cout<<"hello"<<endl;
}
int main()
{

    derived *x = new derived();

    A *y = x;

   delete y;

   hello();



}
