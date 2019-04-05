#ifndef COUNCIL_H
#define COUNCIL_H

class Council
{
  public:
    virtual void presentEvidence() = 0;
    virtual void crossExamineWitness() = 0;
    virtual void callWitness() = 0;
    virtual void objection() = 0;
    virtual void leadWitness() = 0;
};

#endif