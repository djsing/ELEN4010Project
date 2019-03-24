#ifndef COURT_H
#define COURT_H

#include <fruit/fruit.h>

class Court
{
public:
  virtual void begin() = 0;
  virtual void recess() = 0;
  virtual void adjourn() = 0;
};

fruit::Component<> getCourtComponent();

#endif