#include "evidence.h"
#include <iostream>

class EvidenceImpl : public Evidence
{
public:
  INJECT(EvidenceImpl(ASSISTED(std::string) name)) : name_(name) {}

  virtual void name() override
  {
    std::cout << name_;
  }

private:
  std::string name_;
};

fruit::Component<EvidenceFactory> getEvidenceComponent()
{
  return fruit::createComponent().bind<Evidence, EvidenceImpl>();
}