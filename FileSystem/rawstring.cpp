#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

int main()
{
    string s {"c:\filename\aket"};
    cout<<s<<endl;// output -> c:
    string s2 {R"(c:\filename\aket)"};// this is raw string
    cout<<s2<<endl;
    string message {R"MSG(ehll"(saket")")MSG"};
    cout<<message<<endl;

}
