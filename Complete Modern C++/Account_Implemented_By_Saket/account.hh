#include<bits/stdc++.h>
using namespace std;

class Account{

    private:
    int AccountNumber;
    string AccountHolder;
    protected:
    int Balance;

    public:

    void Withdraw(int );
    void Deposit(int );
    float GetBalance() const;
    float GetInterestRate()const;
    Account(string  holdername, int accountnumber, int amount);
    void AccumulateIterest();
};