#ifndef GENERALWITNESS_H
#define GENERALWITNESS_H

#include <fruit/fruit.h>
#include "witness.h"

struct GeneralWitness
{
};

fruit::Component<fruit::Annotated<GeneralWitness, Witness>> getGeneralWitnessComponent();

#endif