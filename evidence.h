#ifndef EVIDENCE_H
#define EVIDENCE_H

#include <string>
#include <fruit/fruit.h>

struct Evidence
{
  public:
    INJECT(Evidence(ASSISTED(std::string) name)) : name_(name) {}

  private:
    std::string name_;
};

#endif