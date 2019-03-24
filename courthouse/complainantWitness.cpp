#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>
#include "complainantWitness.h"

class ComplainantWitnessImpl : public Witness
{
public:
  INJECT(ComplainantWitnessImpl()) = default;

  virtual void respondToQuestion() override
  {
    std::cout << "Complainant Answers Question." << std::endl;
  }

private:
  virtual void remainSilent() override
  {
    std::cout << "Complainant attempts to remain silent, but is instructed to answer by the Magistrate." << std::endl;
    respondToQuestion();
  }
};

fruit::Component<fruit::Annotated<ComplainantWitness, Witness>> getComplainantWitnessComponent()
{
  return fruit::createComponent().bind<fruit::Annotated<ComplainantWitness, Witness>, ComplainantWitnessImpl>();
}