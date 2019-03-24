#ifndef ACCUSEDWITNESS_H
#define ACCUSEDWITNESS_H

#include <fruit/fruit.h>
#include "witness.h"

struct AccusedWitness
{
};

fruit::Component<fruit::Annotated<AccusedWitness, Witness>> getAccusedWitnessComponent();

#endif