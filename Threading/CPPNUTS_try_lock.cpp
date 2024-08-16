#include<bits/stdc++.h>
#include<mutex>
using namespace std;
int counter = 0;
mutex  mtx;

void IncreaseFunc()
{
    for( int i=0; i<1000000; i++)
    {
        if( mtx.try_lock())
        {
                counter++;
                mtx.unlock();
        }
    }

}
int main()
{
    thread t1( IncreaseFunc);
    thread t2(IncreaseFunc);

    t1.join();
    t2.join();

    cout<<counter<<endl;
}