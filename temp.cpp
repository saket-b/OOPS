#include<bits/stdc++.h>

using namespace std;

class Base {

     public:
    int x, y;


   
    Base(int x1=0, int y1=0){
        x = x1;y= y1;
    }
    void func(){
        cout<<"Base Class"<<endl;
    }

    Base  operator -(const Base &obj)
    {
        Base c;
        c.x= x - obj.x;
        c.y = y - obj.y;
        cout<<c.x<<" "<<c.y<<endl;
       return c;

    }   
};

class Derived : public Base{

    private:
    int a = 10, b = 10;

    public:
    void func(){
        cout<<"Derived Class"<<endl;
    }

    void show(){
        cout<<"Show func"<<endl;
    }

    friend void hello();


};

void hello(){

    Derived obj;    
    cout<<"Inside hello function "<<obj.a<<" "<<obj.b<<endl;
}

int  main(){

    Base obj(1, 3), obj2(4, 5);

    Base ans;
    ans  = obj - obj2;   

    cout<<ans.x<<" "<<ans.y<<endl;

    Derived a;
    hello();
  
    
}