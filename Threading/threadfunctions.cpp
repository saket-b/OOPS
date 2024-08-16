#include<bits/stdc++.h>
#include<thread>
using namespace std;

void Process()
{

}



int main()
{
    thread t1(Process);

    // HANDLE handle = t1.native_handle();
    // SetThreadDescription(handle, L"mythread"); // set the name of thread
    auto  id = t1.get_id();// give the id of thread;
    t1.join();
    int cores = std::thread:: hardware_concurrency();
    cout<<cores<<endl;
    cout<< id<<endl;

}