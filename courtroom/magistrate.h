#ifndef MAGISTRATE_H
#define MAGISTRATE_H

#include <fruit/fruit.h>

class Magistrate
{
public:
  virtual void giveVerdict() = 0;
  virtual void giveRuling() = 0;

private:
  virtual std::string giveSentenceType() = 0;
  virtual int giveSentenceLength() = 0;
};

fruit::Component<Magistrate> getMagistrateComponent();

#endif