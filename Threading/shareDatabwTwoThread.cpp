#include<bits/stdc++.h>
#include<thread>
using namespace std;

list<int>listData;
int Size = 1000;
mutex m_mutex;

void Download1()
{
    for( int i=0; i<Size; i++)
    {
        lock_guard<mutex>mtx(m_mutex);
        
        listData.push_back(i);
        if( i == 100)return ;// what will happen the other thread wait for this thread unlock : this is condition is dead lock
        
    }
}

void Download2()
{
    for( int i=0; i<Size; i++)
    {
        lock_guard<mutex>mtx(m_mutex);
         
        listData.push_back(i);
        
    }

}

int main()
{

    thread threadDownload1(Download1);
    thread threadDownload2(Download2);

    threadDownload1.join();
    threadDownload2.join();
    cout<<listData.size()<<endl;
}