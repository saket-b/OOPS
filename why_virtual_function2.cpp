#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
        virtual void eat() { std::cout << "I'm eating generic food."<<endl; }
};

class Cat : public Animal
{
    public:
        void eat() { std::cout << "I'm eating a rat."; }
};

void func(Animal *xyz) { xyz->eat(); }

int main()
{
    Animal *animal = new Animal;
    Cat *cat = new Cat;
    
    // animal->eat(); // Outputs: "I'm eating generic food."
    // cat->eat(); 
    
    func(animal); // Outputs: "I'm eating generic food."
    func(cat); // o/p I'm eating generic food".
}