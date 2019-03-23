#ifndef EVIDENCE_H
#define EVIDENCE_H

#include <string>
#include <fruit/fruit.h>
#include <iostream>

struct Evidence
{
  public:
    INJECT(Evidence(ASSISTED(std::string) name)) : name_(name) {}
    void name()
    {
        std::cout << name_ << std::endl;
    }

  private:
    std::string name_;
};

#endif