#include <fruit/fruit.h>
#include "magistrate.h"

int main()
{
    fruit::Injector<Magistrate> injector(getMagistrateComponent);
    Magistrate *magistrate = injector.get<Magistrate *>();

    magistrate->giveVerdict();
}