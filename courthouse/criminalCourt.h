#ifndef CRIMINALCOURT_H
#define CRIMINALCOURT_H

#include <fruit/fruit.h>
#include "court.h"

struct CriminalCourt
{
};

fruit::Component<fruit::Annotated<CriminalCourt, Court>> getCriminalCourtComponent();

#endif