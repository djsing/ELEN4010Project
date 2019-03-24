#include <fruit/fruit.h>
#include "prosecutionCouncil.h"

int main()
{
    fruit::Injector<fruit::Annotated<ProsecutionCouncil, Council>> injector(getProsecutionCouncilComponent);
    Council *prosecutor = injector.get<fruit::Annotated<ProsecutionCouncil, Council *>>();

    prosecutor->presentEvidence();
}