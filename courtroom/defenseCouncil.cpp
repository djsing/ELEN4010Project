#include "defenseCouncil.h"
#include "accusedWitness.h"
#include "evidence.h"
#include <iostream>

class DefenseCouncilImpl : public Council
{
  private:
    Witness *accused_;
    std::unique_ptr<Evidence> reasonableDoubt_;
    bool calledAccused_;

  public:
    INJECT(DefenseCouncilImpl(ANNOTATED(AccusedWitness, Witness *) accused, EvidenceFactory evidencefactory)) : accused_(accused), reasonableDoubt_(evidencefactory("alibi")), calledAccused_(false)
    {
    }

    virtual void presentEvidence() override
    {
        std::cout << "The Defense presents a ";
        reasonableDoubt_->name();
        std::cout << " into evidence." << std::endl;
    }

    virtual void crossExamineWitness() override
    {
        std::cout << "The Defense is Cross-Examining the witness." << std::endl;
    }

    virtual void callWitness() override
    {
        if (!calledAccused_)
        {
            std::cout << "The Defense calls the accused to the stand." << std::endl;
            !calledAccused_;
        }
        else
        {
            std::cout << "The Defense has no more witnesses to call." << std::endl;
        }
    }

    virtual void objection() override
    {
        std::cout << "The Defense objects to the Prosecutions's statements." << std::endl;
    }

    virtual void leadWitness() override
    {
        std::cout << "The Defense leads the accused." << std::endl;
    }
};

fruit::Component<fruit::Annotated<DefenseCouncil, Council>> getDefenseCouncilComponent()
{
    return fruit::createComponent().bind<fruit::Annotated<DefenseCouncil, Council>, DefenseCouncilImpl>().install(getAccusedWitnessComponent).install(getEvidenceComponent);
}