#include "account.hh"

int main()
{
    shared_ptr<Account>person1(new Account( "saket", 1234568,0));

    person1->Deposit(900);
    person1->Withdraw(1090);
    cout<<"Remaining balance = "<<person1->GetBalance()<<endl;

    person1->AccumulateIterest();
     cout<<"Remaining balance = "<<person1->GetBalance()<<endl;
    

}