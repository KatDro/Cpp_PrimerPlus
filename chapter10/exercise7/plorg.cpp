#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg (const char n[])
{
    strcpy (name, n);
    sat = 50;
}

void Plorg::satiety (int s)
{
    sat = s;
}

void Plorg::show () const
{
    std::cout << "Nazywam sie: " << name << std::endl;
    std::cout << "Moj wspolczynnik sytosci to: " << sat << std::endl;
}
