#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>
#include "generalWitness.h"

class GeneralWitnessImpl : public Witness
{
  public:
    INJECT(GeneralWitnessImpl()) = default;

    virtual void respondToQuestion() override
    {
        std::cout << "Witness Answers Question." << std::endl;
    }

  private:
    virtual void remainSilent() override
    {
        std::cout << "Witness attempts to remain silent, but is instructed to answer by the Magistrate." << std::endl;
        respondToQuestion();
    }
};

fruit::Component<fruit::Annotated<GeneralWitness, Witness>> getGeneralWitnessComponent()
{
    return fruit::createComponent().bind<fruit::Annotated<GeneralWitness, Witness>, GeneralWitnessImpl>();
}