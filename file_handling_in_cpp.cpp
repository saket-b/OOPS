#include<bits/stdc++.h>
using namespace std;

int count_line( string filename, string message)
{
    fstream file;
    string str;

    file.open(filename);
    int count =0;
    stack<string>st;

    if(! file)
    {
        cout<<"file has not open"<<endl;
        return 0;
    }
    else{
        while( !file.eof())
        {
            getline(file, str);
            st.push(str);
           // st.push(str);
        }
        file << message<<endl;
    }

    while( !st.empty() &&  count < 10)
    {
        cout<<st.top()<<endl;
        st.pop();
        count++;
    }
    return count;
}

int main()
{
    string filename = "input2.txt";

    cout<<count_line(filename, "saket")<<endl;


}