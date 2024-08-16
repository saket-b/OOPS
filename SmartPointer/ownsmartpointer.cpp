#include<bits/stdc++.h>
using namespace std;
// https://www.codeproject.com/Articles/15351/Implementing-a-simple-smart-pointer-in-c
class Base {

    private:
    int x;
    public:

    void print()
    {
        cout<<"inside base class"<<endl;
    }
};

class RC{

    private:
    int count ;

    public:

    void AddRef()
    {
        count++;
    }

    int ReleaseRef()
    {
        return --count;
    }

};

template <typename T> 
class SP{

    private:
    T *ptr;
    RC *ref;
    public :
    SP(T *temp_ptr = NULL)
    {
        ref = new RC();
        ref->AddRef();
        ptr = temp_ptr;
    }
    ~SP()
    {
        if( ref->ReleaseRef() == 0)
        {
            cout<<"Destructor will be call"<<endl;
            delete ptr;
            delete ref;
        }
    }
    T * operator ->()
    {
        return ptr;
    }
    T  & operator *()
    {
        return *ptr;
    }
    SP(const SP<T>&sp)
    {
        ptr = sp.ptr;
        ref = sp.ref;
        ref->AddRef();   
    }
    SP 
};



int main()
{
    SP<Base>p;
   // (*obj).print();    
   p->print();        // we can this both way 
   {
        SP<Base>q = p;
        q->print();
   }
    p->print();
}
