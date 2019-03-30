#ifndef COURTHOUSE_H
#define COURTHOUSE_H

#include <fruit/fruit.h>
#include "criminalCourt.h"
#include "court.h"

class CourtHouse
{
public:
  virtual void chooseCourt(bool criminal) = 0;
};

fruit::Component<fruit::Required<fruit::Component<fruit::Annotated<CriminalCourt, Court>>>, CourtHouse> getCourtHouseComponent();

#endif