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

public:
  INJECT(CriminalCourtImpl(ANNOTATED(ProsecutionCouncil, Council *) prosecution, ANNOTATED(DefenseCouncil, Council *) defense, Magistrate *magistrate)) : magistrate_(magistrate), prosecution_(prosecution), defense_(defense)
  {
  }
  virtual void begin() override
  {
    std::cout << "Criminal Court begins proceedings." << std::endl;
  }
  virtual void recess() override
  {
    std::cout << "Criminal Court is in Recess." << std::endl;
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