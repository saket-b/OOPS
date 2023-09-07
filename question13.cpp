#include<iostream>
using namespace std;
  
class Test
{
public:
  Test();
};
  
Test::Test()  {
    cout << " Constructor Called. ";
}
  
void fun() {
  static Test t1;
}
  
int main() {
    cout << " Before fun() called. ";
    fun();
    fun();
    cout << " After fun() called. ";  
    return 0;
}

//output
//Before fun() called. Constructor Called. After fun() called.