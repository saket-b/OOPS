#include<iostream>
#include<experimental\filesystem>
using namespace std;

int main()
{
    using namespace std :: experimental::filesystem;

    path p{R"(C:\Users\saket\OOPS\ExecptionHandling)"};

    // if( p.has_filename())
    // {
    //     cout<<p.filename()<<endl;
    // }

    // for( const auto &x: p)
    // {
    //     cout<<x<<endl;
    // }
    // directory_iterator beg{p};
    // directory_iterator end{};
    // while( beg != end)
    // {
    //     cout<<*beg<<endl;
    //     ++beg;
    // }
}