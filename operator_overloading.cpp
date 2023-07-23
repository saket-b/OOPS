#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>    // needed to use the string class

using namespace std;

class complexl{
private:
 float r, i;
public:
 complexl(float r, float i){
  this->r=r;
  this->i=i;
 }
//  complex(){}
 void displaydata(){
  cout<<"real part = "<<r<<endl;
  cout<<"imaginary part = "<<i<<endl;
 }
 complexl operator+(complexl c){

    return complexl(r+c.r, i+c.i);

    

 }
};

int main(){
complexl a(2,3);
complexl b(3,4);
complexl c=a+b;
c.displaydata();
return 0;
}
