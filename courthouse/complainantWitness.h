#ifndef COMPLAINANTWITNESS_H
#define COMPLAINANTWITNESS_H

#include <fruit/fruit.h>
#include "witness.h"

struct ComplainantWitness
{
};

fruit::Component<fruit::Annotated<ComplainantWitness, Witness>> getComplainantWitnessComponent();

#endif