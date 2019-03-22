#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>

class CourtWitness : public Witness
{
    INJECT(CourtWitness()) = default;

    virtual void respondToQuestion() override
    {
        std::cout << "Court Witness Answers Question." << std::endl;
    }
};