#include<bits/stdc++.h>
using namespace std;



int main()
{
    auto maxEle = [](auto x, auto y){
        return x > y ? x: y;
    }(1,2);
    cout<<maxEle<<endl;
}