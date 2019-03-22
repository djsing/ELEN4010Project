#include "witness.h"
#include <fruit/fruit.h>
#include <iostream>

class StateWitness : public Witness
{
    INJECT(StateWitness()) = default;

    virtual void respondToQuestion() override
    {
        std::cout << "State Witness Answers Question." << std::endl;
    }
};