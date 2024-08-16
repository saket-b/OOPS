#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

class Test{

    public:
    Test(){
        throw runtime_error("constructor error");
        cout<<"inside Constructor"<<endl;
    }
    ~Test()
    {
        cout<<"inside Destructor"<<endl;
    }
};

int main()
{
    try{

    Test obj;
    }
    catch(exception &exp)
    {
        cout<<exp.what()<<endl;
    }
    

}