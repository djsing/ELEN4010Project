#include "court.h"
#include "magistrate.h"
#include "defenseCouncil.h"
#include "prosecutionCouncil.h"
#include <iostream>
#include "criminalCourt.h"

class CriminalCourtImpl : public Court
{
private:
  Magistrate *magistrate_;
  Council *defense_;
  Council *prosecution_;
  bool recess_;

public:
  INJECT(CriminalCourtImpl(ANNOTATED(ProsecutionCouncil, Council *) prosecution, ANNOTATED(DefenseCouncil, Council *) defense, Magistrate *magistrate)) : magistrate_(magistrate), prosecution_(prosecution), defense_(defense)
  {
  }
  virtual void begin() override
  {
    if (!recess_)
    {
      std::cout << "Welcome to the Magistrate's Court." << std::endl;
      std::cout << "Criminal Court begins proceedings." << std::endl;
      prosecution_->callWitness();
      prosecution_->leadWitness();
      defense_->objection();
      magistrate_->giveRuling();
      prosecution_->presentEvidence();
    }
    else
    {
      std::cout << "Criminal Court resumes proceedings." << std::endl;
      defense_->callWitness();
      defense_->leadWitness();
      prosecution_->objection();
      magistrate_->giveRuling();
      defense_->presentEvidence();
      std::cout << "The Magistrate is deliberating..." << std::endl;
      magistrate_->giveVerdict();
    }
  }
  virtual void recess() override
  {
    std::cout << "Criminal Court is in Recess." << std::endl;
    recess_ = true;
  }
  virtual void adjourn() override
  {
    std::cout << "Criminal Court has been adjourned." << std::endl;
  }
};

fruit::Component<fruit::Annotated<CriminalCourt, Court>> getCriminalCourtComponent()
{
  return fruit::createComponent().bind<fruit::Annotated<CriminalCourt, Court>, CriminalCourtImpl>().install(getProsecutionCouncilComponent).install(getDefenseCouncilComponent).install(getMagistrateComponent);
}