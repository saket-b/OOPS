#include<bits/stdc++.h>
using namespace std;

// template <typename T>

// T my_max(T x, T y)
// {
//     return max(x, y);
// }

// int main()
// {

//     cout<< my_max(3, 6)<<endl;
//     cout<<my_max(4.5, 5.5)<<endl;
//     cout<<my_max('d', 'g')<<endl;


// }

class student
{
    public:
    int marks;
    public: student(){}
    student(int x)
    { 
         marks=x; 
    }
};
int main()
{
    student s1(100);
    student s2();
   student s3=100;

    cout<<"saket"<<endl;
    cout<<s3.marks<<endl;

    return 0;
}