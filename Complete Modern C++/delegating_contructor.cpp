#include<bits/stdc++.h>
using namespace std;

class Car {

    private:
        float fuel;
        float speed;
        int passengers;


    public:
    // void FillFuel(float amount);
    // void Accelerate();
    // void Brake();
    // void AddPassengers(int count);
    // void DashBoard();
    Car();
    Car(float);
    Car(float, int);
    //~Car();
};

Car :: Car(): Car(0)
{
    cout<<"Default constructor"<<endl;
}
Car :: Car(float amount ) : Car(amount, 0)
{
    cout<<"Costructor 2"<<endl;
}

Car :: Car(float amount, int pass)
{
    fuel = amount;

    passengers = pass;
    cout<<"Contructor 3"<<endl;
}

int main()
{
    Car obj;
}
