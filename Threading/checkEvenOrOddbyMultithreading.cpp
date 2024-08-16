#include<bits/stdc++.h>
using namespace std;

int number;
mutex mtx;
std::condition_variable cv;
bool ready = false;

void TakeInput()
{
    while(1)
    {
        unique_lock<mutex>mtx2(mtx);
        cin>>number;
        ready = true;
        cv.notify_all();
    }
}
void CheckEven()
{
    while(true)
    {
        unique_lock <mutex>mtx2(mtx);
        cv.wait(mtx2 , []{return (ready && number % 2 == 0);});
        cout<<"Number is Even"<<endl;
        ready = false;
        
    }
}

void CheckOdd()
{
    while(true)
    {
        unique_lock <mutex>mtx2(mtx);
        cv.wait(mtx2 , []{return (ready && number % 2 != 0) ;});
        cout<<"Number is Odd"<<endl;

        ready = false;
        
        
    }

}


int main()
{
    thread inp(TakeInput);
    thread even(CheckEven);
    thread odd(CheckOdd);

    inp.join();
    even.join();
    odd.join();


}