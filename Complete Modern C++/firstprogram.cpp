#include<bits/stdc++.h>
using namespace std;

class Number{
    int m_Num{} ;
public:
    Number(int num){
        m_Num = num ;
    }
    int GetNumber(){
        return m_Num ;
    }
    //Constructors and other members
} ;
 
void Print( Number & num){
    cout << num.GetNumber() ;
}
 
int main(){
    Number n{5} ;
    Print(n) ;
    //Other code
    return 0 ;
}