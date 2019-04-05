#include "prosecutionCouncil.h"
#include "complainantWitness.h"
#include "evidence.h"
#include <iostream>

class ProsecutionCouncilImpl : public Council
{
private:
  Witness *complainant_;
  std::unique_ptr<Evidence> weapon_;
  bool calledComplainant_;

public:
  INJECT(ProsecutionCouncilImpl(ANNOTATED(ComplainantWitness, Witness *) complainant, EvidenceFactory evidencefactory)) : complainant_(complainant), weapon_(evidencefactory("gun")), calledComplainant_(false)
  {
  }

  virtual void presentEvidence() override
  {
    std::cout << "The Prosecution presents a ";
    weapon_->name();
    std::cout << " into evidence." << std::endl;
  }

  virtual void crossExamineWitness() override
  {
    std::cout << "The Prosecution is Cross-Examining the witness." << std::endl;
  }

  virtual void callWitness() override
  {
    if (!calledComplainant_)
    {
      std::cout << "The Prosecution calls Complainant to the stand." << std::endl;
      !calledComplainant_;
    }
    else
    {
      std::cout << "The Prosecution has no more witnesses to call." << std::endl;
    }
  }

  virtual void objection() override
  {
    std::cout << "The Prosecution objects to the Defense's statements." << std::endl;
  }

  virtual void leadWitness() override
  {
    std::cout << "The Prosecution leads the complainant." << std::endl;
  }
};

fruit::Component<fruit::Annotated<ProsecutionCouncil, Council>> getProsecutionCouncilComponent()
{
  return fruit::createComponent().bind<fruit::Annotated<ProsecutionCouncil, Council>, ProsecutionCouncilImpl>().install(getComplainantWitnessComponent).install(getEvidenceComponent);
}