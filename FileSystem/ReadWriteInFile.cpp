#include<bits/stdc++.h>
#include<fstream>
using namespace std;

void Write()
{
    ofstream out;
    out.open("data.txt");
    out<<"Hello World"<<endl;
    out<<10;
    out.close();

}

void Read()
{
    ifstream input;
    input.open("dat.txt");
    // if( input.fail())
    // {
    //     cout<<"File has not open"<<endl;
    //     return;
    // }
    // if(! input.is_open())
    // {
    //     cout<<"File does not exist"<<endl;
    //     return;
    // }
    string message;
    int value{};
    getline(input, message);
    input>>value;
   // input>>value;

    // if( input.good())
    // {
    //     cout<<"File Read Successfully"<<endl;
    // }
    // if( input.bad())
    // {
    //     cout<<"File is not Read Correctly"<<endl;
    // }
    // if( input.eof())
    // {
    //     cout<<"EOF has encountered"<<endl;
    // }
    cout<<message<<endl;
    cout<<value<<endl;
    

    input.close();
}

void UsingFstream()
{
    fstream stream{"file.txt"};

    if( !stream)
    {
        cout<<"File doeas not exist"<<endl;
        ofstream out {"file.txt"};
        out.close();
        stream.open("file.txt");
    }

    stream << "Hello World"<<endl;
    cout<<stream.tellp()<<endl;
    stream.seekg(0);
    string word;
    getline(stream, word);
    cout<<word<<endl;
    stream.close();
}

int main()
{
    // Write();
    // Read();
    UsingFstream();
}