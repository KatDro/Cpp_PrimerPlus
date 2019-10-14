#include <iostream>
#include "plorg.h"

int main()
{
   Plorg pl1;
   std::cout << "Jestem domyslny plorg" << std::endl;
   pl1.show();

   Plorg pl2 ("Plorgus");
   pl2.show();
   std::cout  <<"Plorgus zmiania swoja sytosc" << std::endl;
   pl2.satiety(80);
   pl2.show();

    return 0;
}
