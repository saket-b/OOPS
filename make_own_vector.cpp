#include<bits/stdc++.h>
using namespace std;

struct Node{

    int val;
    Node *next;

    Node(int val1)
    {
        val = val1;
        next = NULL; 

    }
};

Node* head = NULL;

class Vector{

    private:

     int size ;
    int *ptr;

    public :

    Vector()
    {
        size = 0;
    }

    void push_back( int x)
    {
        Node* t = new Node(x);
        t->next = head;
        head = t;
        size++;

    }
    void pop_back()
    { 
        try{

            if( size <= 0) 
                throw "Vector is empty";
            
        }
        catch(string message)
        {
            cout<<message<<endl;
        }
        
        Node * t = head;
        head = head->next;
        free( t);
        size--;

    }

    int Size()
    {
        return size;
    }
};



int main()
{

    Vector arr, arr2;

    arr.push_back(4);
    arr.push_back(5);
    cout<<arr.Size()<<endl;

    arr2.push_back(8);
    arr2.push_back(9);

    cout<<arr2.Size()<<endl;

}