#include<bits/stdc++.h>
using namespace std;


class Integer{

    private:
    int number;
    public:

  
    void get_value();
    Integer(int );
    Integer()= default;

    Integer  operator +(const Integer obj);
    Integer & operator ++();
    Integer  operator ++(int);
    Integer & operator =(const Integer &);
    friend ostream& operator<<( ostream &out, const Integer &obj);

    friend istream & operator >>(istream &in,  Integer &obj);

    void * operator new (size_t size);
    void operator delete (void *ptr);
};

Integer::Integer(int x)
{
    number = x;
}

void Integer::get_value()
{
    cout<<"Value = "<<number<<endl;
}

Integer Integer::operator+(const Integer temp)
{
    Integer obj;
    obj.number = number + temp.number;
    return obj;
}

ostream & operator<<(ostream &out, const Integer &obj)
{
    out<<obj.number<<endl;
    return out;
}
istream & operator>>(istream &in,  Integer &obj)
{
    in>>obj.number;
    return in;
}

Integer & Integer::operator++()
{
    ++number;
    return *this;
    
}

Integer  Integer::operator ++(int )
{
    Integer temp = (*this);
    ++number;
    return temp;
    
}

Integer  & Integer::operator=(const Integer &obj)
{
    
    if( this == &obj)
    {
        return *this;
    }
    number = obj.number;
    //cout<<temp.number<<endl;
    return *this;
}

void * Integer :: operator  new(size_t size)
{
    cout<<"inside new"<<endl;
    void *ptr;
    ptr = malloc(size);
    return ptr;
}

void Integer :: operator delete(void *ptr)
{
    cout<<"delete endl"<<endl;
    if( !ptr )
        free(ptr);
}

int main()
{
    Integer obj(4);
    Integer obj2(5);
    Integer sum = obj + obj2;
    Integer obj3 ;
    obj3 = sum;
    //++sum;
    //sum++;
    (sum++).get_value();
    obj3.get_value();
    cout<<sum;
    cin>>sum;
    cout<<sum<<endl;

    Integer *ptr = new Integer(5);
    delete ptr;
    ptr->get_value();
}


