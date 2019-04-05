#include <fruit/fruit.h>
#include "criminalCourt.h"
#include <iostream>

int main()
{
    std::cout << "Welcome to the Magistrate's Court." << std::endl;
    fruit::Injector<fruit::Annotated<CriminalCourt, Court>> criminalCourtInjector(getCriminalCourtComponent);
}