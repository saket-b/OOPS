#include<bits/stdc++.h>
#include<thread>
using namespace std;

int Add(int x, int y)
{
    return x + y;
}

int square(int x)
{
    return x*x;
}

int coumpute(vector<int>&arr)
{
    int sum = 0;
    for( int i=0; i<arr.size(); i++)
    {
        sum +=arr[i];
    }

    return sum;
}


int main()
{
    packaged_task<int(int, int)>taskAdd{Add};
    future<int>ft = taskAdd.get_future();
    Add(3, 4);
    auto result = ft.get();
    cout<<result<<endl;
    

}