#include "golf.h"
#include <iostream>
#include <cstring>

Golf::Golf(const char *fn, int hc)
{
    strcpy(fullname, fn);
    handicap = hc;
}

int Golf::setgolf ()
{
    char tempfn [LEN];
    int temphand;
    std::cout << "Podaj imie i nazwisko golfisty: ";
    std::cin.getline (tempfn, LEN);
    if (tempfn [0] == '\0')
    {
        std::cin.clear();
        return 0;
    }
    else
    {
        std::cout << "Podaj handicap: ";
        std::cin >> temphand;
        while(!std::cin.good())
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Nie udalo sie wprowadzic. Podaj handicap jeszcze raz:";
            std::cin >> temphand;
        }
        Golf tempzaw (tempfn, temphand);
        *this = tempzaw;
        return 1;
    }

}

void Golf::hand(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    std::cout << "Imie i nazwisko: " << fullname << std::endl;
    std::cout << "Handicap: " << handicap << std::endl;
}
