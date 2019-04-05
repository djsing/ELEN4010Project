#ifndef PROSECUTIONCOUNCIL_H
#define PROSECUTIONCOUNCIL_H

#include <fruit/fruit.h>
#include "council.h"

struct ProsecutionCouncil
{
};

fruit::Component<fruit::Annotated<ProsecutionCouncil, Council>> getProsecutionCouncilComponent();

#endif