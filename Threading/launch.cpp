#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

int Operation(int count)
{
    using namespace std:: chrono_literals;
    int sum{};
    for( int i=0; i<10; i++)
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
    future<int>result = async(std:: launch :: async, Operation, 10);// async create thread runtime and return some value;
    std::this_thread::sleep_for(1s);
    cout<<"main thread continue...\n";
    if( result.valid())
    {
        auto timepoint = std::chrono::system_clock::now();
        timepoint +=1s;
        auto status = result.wait_until(timepoint);
        //auto status = result.wait_for(4s);
        switch(status)
        {

            case std::future_status:: deferred :
                cout<<"Task is Synchronous"<<endl;
                break;
            case std:: future_status::ready:
                cout<<"Task is ready"<<endl;
                break;
            case std:: future_status:: timeout:
                cout<<"Task is still running"<<endl;
                break;
        }


        cout<<result.get()<<endl;// just like join
    }
}