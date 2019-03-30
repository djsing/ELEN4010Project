#include "courthouse.h"
#include <fruit/fruit.h>
#include "court.h"
#include "criminalCourt.h"

class CourtHouseImpl : public CourtHouse
{
private:
  Court *criminal_;
  Court *civil_;
  fruit::Provider<fruit::Component<fruit::Annotated<CriminalCourt, Court>>> criminalProvider_;

public:
  INJECT(CourtHouseImpl(fruit::Provider<fruit::Component<fruit::Annotated<CriminalCourt, Court>>> criminalProvider)) : criminalProvider_(criminalProvider)
  {
  }

  virtual void chooseCourt(bool criminal) override
  {
  }
};

fruit::Component<fruit::Required<fruit::Component<fruit::Annotated<CriminalCourt, Court>>>, CourtHouse> getCourtHouseComponent()
{
  return fruit::createComponent().bind<CourtHouse, CourtHouseImpl>().install(getCriminalCourtComponent);
}