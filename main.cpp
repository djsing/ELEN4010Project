#include <fruit/fruit.h>
#include "defenseCouncil.h"

int main()
{
    fruit::Injector<fruit::Annotated<DefenseCouncil, Council>> injector(getDefenseCouncilComponent);
    Council *defense = injector.get<fruit::Annotated<DefenseCouncil, Council *>>();

    defense->presentEvidence();
}