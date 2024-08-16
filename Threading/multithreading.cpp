#include<bits/stdc++.h>
using namespace std;
int Size = 500000000;
vector<int>arr;
void Download(string file)
{
    cout<<"file name = "<<file<<endl;
    cout<<"Downloaded has begin"<<endl;
    for(int i=0; i<Size; i++)
    {
        arr.push_back(i);
    }
    cout<<"Downloaded has copleted"<<endl;
}
int main()
{

   // Download();
   string file {"songs.mp4"};
    thread threadToDownload(Download, file);
    cout<<"After the Download"<<endl;
    if( threadToDownload.joinable())
        threadToDownload.join();
}