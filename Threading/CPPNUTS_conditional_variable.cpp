#include<bits/stdc++.h>
#include<mutex>
using namespace std;

mutex mtx;
condition_variable cv;
long balance  = 0;


void AddMoney(int money)
{
    lock_guard<mutex>lg(mtx);
    balance += money;
    cout<<"Amount Added Current :"<<money<<endl;
    cv.notify_one();
}

void   WithdraMoney(int money)
{
    unique_lock<mutex>ul(mtx);
    cv.wait(ul, []{return (balance != 0 ? true : false);});

    if( balance >= money)
    {
        balance -= money;
        cout<<"Amount Deducted:  "<< money<<endl;
    }
    else 
    {
        cout<<"amount cant deducted"<<endl;
    }
    cout<<"Curr Balance is :"<<balance<<endl;
}

int main()
{

    thread t1(AddMoney, 100);
    thread t2(WithdraMoney, 50);
    t1.join();
    t2.join();

}