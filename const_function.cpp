#include<bits/stdc++.h>
using namespace std;

class Base{

    private :
    int x;

    public:

    Base(int x1)
    {
        x = x1;     
    }

    int get() const
    {
        
        return x;
    }
    int sum(int x, int y)const
    {
        int sum = x+y;
        return sum;
    }

    void display()
    {
        cout<<"value of x :"<<x<<endl;
    }

    //  void   set(int x1) const
    // {
    //    // x1++;
    //     x = x1;
    // }


};

int main()
{

     Base obj(5);

   // obj.set(2);
    cout<<obj.get()<<endl;
    cout<<obj.sum(3,4)<<endl;
   obj.display();
}