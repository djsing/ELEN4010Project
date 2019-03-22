#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>

class ComplainantWitness : public Witness
{
    INJECT(ComplainantWitness()) = default;

    virtual void respondToQuestion() override
    {
        std::cout << "Complainant Answers Question." << std::endl;
    }
};