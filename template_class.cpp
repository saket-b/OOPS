#include <bits/stdc++.h>

using namespace std;

template <class T>

// there is no much differece in typename class;
// like template<typename T>

class Base {
    
    public:
    T x;
    T y;
    
    Base( T x1, T y1){
        x = x1;
        y = y1;
    }
};


int main()
{
    Base<int>obj(1, 2);
    Base<float>obj2(1.5, 2.4);
    
    cout<<obj.x<<" "<<obj.y<<endl;
}
