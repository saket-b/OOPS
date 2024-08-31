#include "account.hh"

class Saving : public Account{

    private:
    float m_rate;
    public:
    Saving(string s, int balance, float rate);

    float getInterestRate()const;
    
    void AccumulateIterest();
  


};