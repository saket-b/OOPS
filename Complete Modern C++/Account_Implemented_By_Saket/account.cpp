#include "account.hh"

void Account::Withdraw(int amount)
{
    if( amount > Balance)
    {
        cout<<"Insufficient Balance"<<endl;
        return;
    }
    Balance -= amount;

}

void Account::Deposit(int amount)
{

    Balance += amount;
}

float Account::GetBalance() const
{
    return Balance;
}

float Account::GetInterestRate() const 
{
    return 10;
}
Account::Account( string name, int acc, int amount )
{
    AccountNumber = acc;
    AccountHolder = name;
    Balance = amount;
}

void Account:: AccumulateIterest()
{
   
}

