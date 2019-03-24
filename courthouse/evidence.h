#ifndef EVIDENCE_H
#define EVIDENCE_H

#include <string>
#include <fruit/fruit.h>

class Evidence
{
public:
  virtual void name() = 0;
  virtual ~Evidence() = default;
};

using EvidenceFactory = std::function<std::unique_ptr<Evidence>(std::string)>;

fruit::Component<EvidenceFactory> getEvidenceComponent();

#endif