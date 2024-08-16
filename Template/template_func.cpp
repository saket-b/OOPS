#include<bits/stdc++.h>
using namespace std;

template <typename T>

T my_max(T x, T y)
{
    return max(x, y);
}

int main()
{

    cout<< my_max<int>(3, 6)<<endl;
    cout<<my_max<float>(4.5, 5.5)<<endl;
    cout<<my_max<char>('d', 'g')<<endl;


}

