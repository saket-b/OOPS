#include<bits/stdc++.h>
#include<memory>
using namespace std;

class Printer{

    weak_ptr<int>m_pValue{};
    public:
        void setValue(weak_ptr<int>p)
        {
            m_pValue = p;
        }
        void print()
        {
            if( m_pValue.expired())
            {
                cout<<"Resource is no longer available"<<endl;
                return;
            }
             auto sp = m_pValue.lock();
            cout<<"Value = "<<*sp<<endl;
            cout<<"Ref count "<<m_pValue.use_count()<<endl;
        }
};

int main()
{
    Printer prn;
    int num{};
    cin>>num;
    shared_ptr<int>p ( new int{num});
    prn.setValue(p);

    if(*p > 10)
    {
        p = nullptr;
    }

    prn.print();

}