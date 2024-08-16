#include<bits/stdc++.h>
#include<mutex>
using namespace std;
int counter = 0;
timed_mutex  mtx;

void IncreaseFunc(int i)
{
    
        if( mtx.try_lock_for(std::chrono ::seconds(1)))
        {
            this_thread ::sleep_for(chrono ::seconds(2));
                cout<<"Thread "<<i<<endl;
                mtx.unlock();
        }
    

}
int main()
{
    thread t1( IncreaseFunc,1);
    thread t2(IncreaseFunc, 2);

    t1.join();
    t2.join();

    cout<<counter<<endl;
}