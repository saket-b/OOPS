#include<bits/stdc++.h>
using namespace std;

template<typename T, int size, typename Callback>
void ForEach(T (&arr)[size], Callback operation)
{
    for( int i=0; i<size; i++)
    {
        operation(arr[i]);
    }
}
int main()
{
   auto fn = [](){
        cout<<"Inside Lamda Expression"<<endl;
    };

    cout<<typeid(fn).name()<<endl;
     fn();

    // lamda expression
    auto sum = [](int x, int y){
        return x+y;
    };

    cout<<sum(2,3)<<endl;


    int arr[] = {1,2,3, 4, 5};
    auto offset = 5;
    ForEach(arr, [offset] (auto x) {
        x += offset;
       // offset++;// for increasing offset lamda function will make mutable;
        cout<<x<<" ";
    } );
}