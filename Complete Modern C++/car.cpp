#include "car.h"
#include <iostream>
using namespace std;

void Car::FillFuel(float amount)
{
    fuel += amount;
}

void Car::Accelerate()
{
    speed++;
    fuel -= 1;

}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers(int count)
{

    passengers = count;

}

void Car::DashBoard()
{
    cout<<"fuel = "<<fuel<<endl;
    cout<<"Speed = "<<speed<<endl;
    cout<<"Passenger = "<<passengers<<endl;
}

Car::~Car()
{
    cout<<"destructor"<<endl;
}
