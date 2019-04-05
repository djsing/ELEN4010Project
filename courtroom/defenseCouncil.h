#ifndef DEFENSECOUNCIL_H
#define DEFENSECOUNCIL_H

#include <fruit/fruit.h>
#include "council.h"

struct DefenseCouncil
{
};

fruit::Component<fruit::Annotated<DefenseCouncil, Council>> getDefenseCouncilComponent();

#endif