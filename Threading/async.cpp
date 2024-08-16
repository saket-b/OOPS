#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

void Downloader()
{
    for( int i=0; i<10; i++)
    {
         std::this_thread:: sleep_for(std :: chrono::seconds(1));
        cout<<i<<" ";
       
    }
    cout<<endl;
}

int main()
{
    future<void>result = async(Downloader);// async create thread runtime and return some value;
  
    cout<<"main thread continue...\n";
    result.get();// just like join
}

