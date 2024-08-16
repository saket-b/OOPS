#include<bits/stdc++.h>
#include<mutex>
using namespace std;

void findOdd(promise<int>OddPromise, int start, int end)
{
    int oddSum = 0;

    for( int i=start; i <= end; i++)
    {
        if( (i & 1))
            oddSum +=i;
        
    }
    OddPromise.set_value(oddSum);


}

int main()
{
    int start =1;
    int end = 10;

    promise <int> p;
    future<int> f = p.get_future();

    thread t1 (findOdd, move(p), start, end);
    t1.join();
    cout<<"odd sum "<<f.get()<<endl;
}

