#include "court.h"
#include <fruit/fruit.h>
#include "criminalCourt.h"

fruit::Component<> getCourtComponent()
{
    return fruit::createComponent().addMultibinding<Court, CriminalCourt>();
}