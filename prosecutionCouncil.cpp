#include "prosecutionCouncil.h"
#include "complainantWitness.h"
#include "evidence.h"

class ProsecutionCouncilImpl : public Council
{
private:
  Witness *complainant_;
  Evidence *weapon_;

public:
  INJECT(ProsecutionCouncilImpl()) = default;

  virtual void presentEvidence() override
  {
  }

  virtual void crossExamineWitness() override
  {
  }

  virtual void callWitness() override
  {
  }

  virtual void objection() override
  {
  }

  virtual void leadWitness() override
  {
  }
};

fruit::Component<fruit::Annotated<ProsecutionCouncil, Council>> getProsecutionCouncilComponent()
{
  return fruit::createComponent().bind<fruit::Annotated<ProsecutionCouncil, Council>, ProsecutionCouncilImpl>();
}