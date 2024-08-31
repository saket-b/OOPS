#include<bits/stdc++.h>
using namespace std;

void New()
{
    int *p, *arr ;

   // p = new int(8);// initialise with value;
    p = new int(6);
    *p = 7;
    cout<<*p<<endl;

    arr = new int[7]{1,2,3,4,7}; //uniform initialisation array

    cout<<arr[0]<<endl;

    delete []arr;
    delete p;
    arr = nullptr;
    p = nullptr;

}
int main()
{
    New();
}