#include<bits/stdc++.h>
#include<thread>
#include<future>
using namespace std;

void Processors(int count)
{
    cout<<count<<endl;
    if( count < 5)
        throw out_of_range("Count should be greater than 10");
    int *arr = new int[count];
    if( arr == nullptr)
        throw runtime_error("Failed to memory allocate");
    
    for( int i=0; i<count; i++)
        arr[i] = i;

}



int main()
{
    try{
        // Processors(numeric_limits<int>::max());
        Processors(4);
    }
    catch( runtime_error &ex)
    {
        cout<<"inside runtime "<<endl;
        cout<<ex.what()<<endl;
    }
    // catch ( out_of_range &ex)
    // {
    //     cout<<"inside out of ranger"<<endl;
    //     cout<<ex.what()<<endl;
    // }
    // catch(exception &ex) // accept all child class execption 
    // {
    //     cout<<ex.what()<<endl;
    // }
    catch(...)// default eception  which accept any type of exception
    {
        cout<<"Exception has occured";
    }
}