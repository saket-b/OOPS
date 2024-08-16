
#include<bits/stdc++.h>
using namespace std;

template <typename T>
T Add( T x,  T y)
{

    return (x + y);
}

template <typename T>
T ArraySum( T *arr, size_t size)
{
    T sum = 0;
    for( int i=0; i<size; i++)
    {
        sum +=arr[i];
    }
    return sum;
}
template <typename T>
T Max(const T *arr, size_t size)
{
    T max_ele = arr[0];
    for( int i=0; i<size; i++)
    {
        if( arr[i] > max_ele)
            max_ele = arr[i];
    }
    return max_ele;
}

template <typename T>
pair<T, T>MinMax(const T*arr, size_t size)
{
    T max_ele = arr[0];
    T min_ele = arr[0];
    for( int i=1; i<size; i++)
    {
        if( max_ele < arr[i])
            max_ele = arr[i];
        if( arr[i] < min_ele)
            min_ele = arr[i]; 
    }
    return {min_ele, max_ele};
}

int main()
{
    //T (*p)(int, int) = Add;
  //  cout<<*p<<endl;
    float arr[] = {1.3,2.4,3.4,4.5,5.8};
    cout<<ArraySum(arr, 5)<<endl;
    cout<<Max(arr, 5)<<endl;
    pair<float, float>p = MinMax(arr, 5);
    cout<<p.first<<" "<<p.second<<endl;

    

    return 0;
}