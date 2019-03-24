#ifndef CRIMINALCOURT_H
#define CRIMINALCOURT_H

#include "court.h"

class CriminalCourt : public Court
{
  public:
    virtual void begin() override;
    virtual void recess() override;
    virtual void adjourn() override;
};

#endif