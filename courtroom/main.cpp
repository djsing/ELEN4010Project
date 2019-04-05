#include <fruit/fruit.h>
#include "criminalCourt.h"

int main()
{
    fruit::Injector<fruit::Annotated<CriminalCourt, Court>> criminalCourtInjector(getCriminalCourtComponent);
    Court *criminalCourt = criminalCourtInjector.get<fruit::Annotated<CriminalCourt, Court *>>();

    criminalCourt->begin();
    criminalCourt->recess();
    criminalCourt->begin();
    criminalCourt->adjourn();
}