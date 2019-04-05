#ifndef WITNESS_H
#define WITNESS_H

#include <fruit/fruit.h>

class Witness
{
public:
  virtual void respondToQuestion() = 0;

private:
  virtual void remainSilent() = 0;
};

#endif