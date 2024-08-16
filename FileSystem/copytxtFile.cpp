#include<bits/stdc++.h>
#include<fstream>
#include<string>
 #include <experimental\filesystem>
using namespace std;

int main()
{
    using namespace std :: experimental :: filesystem;
    path source(current_path());

    source /= "Source.cpp"; // create path for source.cpp
    
    path dest(current_path());
    dest /= "copy.cpp";

    ifstream input{source};

    if( !input)
    {
        cout<<"sourc file  is not found"<<endl;
        return -1;
    }
    ofstream output{dest};

    string line;
    while( getline(input, line).eof())
    {
        output<<line<<endl;
    }
    input.close();
    output.close();


}