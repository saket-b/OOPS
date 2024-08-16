#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

int Operation(promise<int>&data)
{
    using namespace std:: chrono_literals;
    auto f = data.get_future();
    cout<<"Task waiting for count"<<endl;
    auto count = f.get();
    cout<<"Promise acquired"<<endl;
    int sum{};
    for( int i=0; i<count; i++)
    {
        sum += i;
         std::this_thread:: sleep_for(300ms);
        cout<<i<<" ";
       
    }
    cout<<endl;
    return  sum;
}

int main()
{
     using namespace std:: chrono_literals;
     promise<int>data;

    future<int>result = async(std:: launch :: async, Operation, ref(data));// async create thread runtime and return some value;
    std::this_thread::sleep_for(1s);
    cout<<"setting data in promise"<<endl;
    data.set_value(10);
    if( result.valid())
    {
        

        cout<<result.get()<<endl;// just like join
    }
}