#include<bits/stdc++.h>
using namespace std;

class shopping {

    private:
    int count ;
    vector<int>price;
    vector<string>name;
    vector<int>offer;
    vector<int>code;
    public:

    void init()
    {
        count =0;
    }
    void additem();
    void display();
    void removeitem();
};

void shopping:: additem( )
{
    int code1, offer1, price1;
    string name1;
    cout<<"\nEnter the code of item :";
    cin>>code1;
    cout<<"\nEnter the name of item : ";
    cin>>name1;
    cout<<"\nPrice of item :\t ";
    cin>>price1;
    cout<<"\nEnter offer Percentage :";
    cin>>offer1;
    code.push_back(code1);
    price.push_back(price1);
    name.push_back(name1);
    offer.push_back(offer1);

    count++;

}



void shopping :: display()
{

        cout<<"\t name \t price \t offer "<<endl;
        for(int i=0; i<count; i++)
        {
            if( price[i] != 0)
            cout<<"\t"<<name[i]<<" "<<price[i]<<" "<<offer[i]<<endl;
        }

        float total=0;
        for( int i=0; i<count; i++)
        {
            if( price[i] != 0)
            {
                total += price[i] - ( price[i]* offer[i])/ 100.0; 
            }
        }

        cout<<"Total price is equal = "<<total<<endl;

}

void shopping:: removeitem()
{
    int code1;
    cout<<"Enter item code :"<<endl;
    cin>>code1;

    for( int i=0; i<count; i++)
    {
        if( code[i] == code1)
        price[i] = 0;
    }
    


}



int main()
{

    shopping obj;
    obj.init();
    int x;
    while(1)
    {

        cout<<"\n 1 : For add item :";
        cout<<"\n 2: Remvoe item :";
        cout<<"\n 3: display item :";
        cout<<"\n 4: Exit :"<<endl;
        cin>>x;

        switch ( x)
        {
        case 1: obj.additem();
            break;
        case 2 : obj.removeitem();
                break;
        case 3 : obj.display();
            break;
        case 4 : exit(0);
        default:
            cout<<"Please Enetr righ Key"<<endl;
            break;
        }
    }
    return 0;
}