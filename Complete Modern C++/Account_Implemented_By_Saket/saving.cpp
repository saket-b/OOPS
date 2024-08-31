#include "saving.hh"

Saving::Saving(string name, int balance, float rate):Account(name, balance, 0), m_rate(rate)
{


}

void Saving:: AccumulateIterest()
{
    Balance += (Balance * m_rate);
}

