#include<bits/stdc++.h>
#include<mutex>
using namespace std;
int res = 0;
recursive_mutex  mtx;

void IncreaseFunc(int th, int count)
{
    if(count < 0)
        return;
    
    mtx.lock();
    cout<<"Thread: "<<th<<" "<<res<<endl;
    res++;
    IncreaseFunc(th, count-1);

    mtx.unlock();
    

}
int main()
{
    thread t1( IncreaseFunc, 1, 10);
    thread t2(IncreaseFunc, 2, 10);

    t1.join();
    t2.join();

   // cout<<counter<<endl;
}