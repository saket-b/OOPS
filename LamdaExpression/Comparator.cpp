#include<bits/stdc++.h>
using namespace std;
using comparator = bool (*)(int, int);

template<typename T, int size>
void Sort(T (&arr)[size], comparator comp)
{
    for( int i=0; i<size; i++)
    {
        for( int j=0; j<size-1; j++)
        {
            if( comp(arr[j], arr[j+1] ))
            {
                T temp = move(arr[j]);
                arr[j] = move(arr[j+1]);
                arr[j+1] = move(temp);
            }
        }
    }
}

bool comp1(int x, int y)
{
    return x > y;
}

int main()
{
    int arr[]{1,2,6, 5, 4, 8 };

    Sort(arr, comp1);
    for(auto ele: arr)
    cout<<ele<<" ";
}