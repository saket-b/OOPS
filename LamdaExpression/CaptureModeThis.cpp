#include<bits/stdc++.h>
using namespace std;

template<typename T, int size, typename Callback>
void ForEach(T (&arr)[size], Callback operation)
{
    for( int i=0; i<size; i++)
    {
        operation(arr[i]);
    }
}

class Product{

    private:
    string name;
    float price;

    public:

    Product(const string &n, float p): name(n), price(p){}

    void AssignFinalPrice()
    {
        float taxes[] = {1,2,3,4,5};
        float basePrice{price};
        ForEach(taxes, [this, basePrice](float tax){
            float taxedPrice = (basePrice * tax) /100;
            this->price += taxedPrice;
        });
    }

    float getPrice()
    {
        return price;
    }

};

int main()
{
    Product obj("saket", 100);

    [](int x){
        [](int x){
            cout<<"value of x = "<<x<<endl;
        }(2*x);
    }(5); // this is nested lamda expression

    obj.AssignFinalPrice();
    cout<<obj.getPrice()<<endl;
}