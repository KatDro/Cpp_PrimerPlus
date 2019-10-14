#include <iostream>
#include "zad5.h"

void menu ()
{
    std::cout << "1. Dodaj klienta" <<std::endl;
    std::cout << "2. Usun klienta" <<std::endl;
    std::cout << "3. Podaj ilosc klientow" <<std::endl;
    std::cout << "4. Koniec" <<std::endl;
}

void showcust(customer c)
{
    std:: cout << "Klient: " << c.fullname << std::endl;
    std:: cout << "Naleznosc: " << c.payment << std::endl;
    std:: cout << std::endl;
}
