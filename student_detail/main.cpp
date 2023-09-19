//******************************************************************************

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class student{
    
    private :
    string name;
    int roll_no;
    unordered_map<string, int>sub_mark;
    public:
    void add_detail();
    void pass_fail();
    void display();
};

void student:: add_detail()
{
    int f = 5;
    cout<<"\nEnter the name of student :";
    cin>>name;
    cout<<"\n Enter the roll_no : ";
    cin>>roll_no;
    cout<<"\nEnter the five Subject name and marks :"<<endl;
    while(f-- > 0)
    {
        string x;
        int mark;
        
        cin>>x>>mark;
        sub_mark[x] = mark;
        
    }
    
}

void student :: pass_fail()
{
    int sum = 0;
    int f = 0;
    
    for(auto itr = sub_mark.begin(); itr != sub_mark.end(); itr++)
    {
        sum += itr->second;
        if( itr->second < 30)
        {
           
            f = 1;
            break;
        }
    }
    float avg = sum /5.0;
    cout<<"total = \t"<<sum<<endl;
    cout<<"avg = \t"<<avg<<endl;
    
    
    
    if( f )
    {
        cout<<"Fail"<<endl;
        return ;
    }
    
    if( avg >= 30 && avg < 45)
    {
        cout<<"Third Division"<<endl;
    }
    else if( avg >= 45 && avg < 60)
    {
        cout<<"Second Division"<<endl;
    }
    else 
    {
        cout<<"First Division"<<endl;
    }
    
}

void student :: display()
{
    cout<<"Name : \t"<<name<<endl;
    cout<<"Roll No :\t"<<roll_no<<endl;
    cout<<"Subject \t mark"<<endl;
    for( auto itr = sub_mark.begin(); itr != sub_mark.end(); itr++)
    {
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }
    
    
}




int main()
{
    student obj;
    int x;
   
    
    while(1)
    {
        cout<<"Enter 1 : for adding the new student detail "<<endl;
        cout<<"Enter 2 : display the student detail"<<endl;
        cout<<"Enter 3 : check pass or fail "<<endl;
        cin>>x;
        switch(x)
        {
            case 1: obj.add_detail();break;
            case 2: obj.display();break;
            case 3: obj.pass_fail(); break;
            case 4: exit(0);
            default: cout<<"Wrong input"<<endl;
    
        }
    }
    
}