#include<bits/stdc++.h>
using namespace std;

template<typename T, typename U>

class XYZ{

    private:
    T x;
    U y;

    public :

    XYZ(T x1,  U y2)
    {
        x = x1;
        y = y2;
    }

    U sum( )
    {
        return x+y;
    }

};

int main()
{
    XYZ <int, float>obj(5, 4.5);
    cout<<obj.sum()<<endl;
}