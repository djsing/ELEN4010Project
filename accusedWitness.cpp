#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>

class AccusedWitness : public Witness
{
  public:
    INJECT(AccusedWitness()) : wishesToRemainSilent_(false)
    {
    }

    virtual void respondToQuestion() override
    {
        if (wishesToRemainSilent_)
        {
            remainSilent();
        }
        else
        {
            std::cout << "Accused Party Answers Question." << std::endl;
        }
    }

  private:
    bool wishesToRemainSilent_;
    void remainSilent()
    {
        std::cout << "Accused Exercises Right to Remain Silent." << std::endl;
    }
};