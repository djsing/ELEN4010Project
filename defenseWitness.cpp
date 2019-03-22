#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>

class DefenseWitness : public Witness
{
    INJECT(DefenseWitness()) = default;

    virtual void respondToQuestion() override
    {
        std::cout << "Defense Witness Answers Question." << std::endl;
    }
};