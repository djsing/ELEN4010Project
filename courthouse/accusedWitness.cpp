#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>
#include "accusedWitness.h"

class AccusedWitnessImpl : public Witness
{
  public:
    INJECT(AccusedWitnessImpl()) : wishesToRemainSilent_(false) {}

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
    virtual void remainSilent() override
    {
        std::cout << "Accused Exercises Right to Remain Silent." << std::endl;
    }
};

fruit::Component<fruit::Annotated<AccusedWitness, Witness>> getAccusedWitnessComponent()
{
    return fruit::createComponent().bind<fruit::Annotated<AccusedWitness, Witness>, AccusedWitnessImpl>();
}