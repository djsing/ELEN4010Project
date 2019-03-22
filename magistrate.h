#ifndef MAGISTRATE_H
#define MAGISTRATE_H

class Magistrate
{
  public:
    virtual void giveVerdict() = 0;
    virtual void giveSentenceType() = 0;
    virtual int giveSentence() = 0;
    virtual void giveRuling() = 0;
};

#endif