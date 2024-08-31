#include<bits/stdc++.h>
using namespace std;

struct Free
{
    void operator()(int *p)
    {
        free(p);
        cout<<"Deleter has called"<<endl;
    }
};

int main()
{
    unique_ptr<int, Free>p{(int*) malloc(4), Free{}};
    *p = 10;
    shared_ptr<int>p2 ((int*)malloc(4), Free{});
    *p2 = 6;

}