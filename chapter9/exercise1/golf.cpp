#include <iostream>
#include <cstring>
#include "golf.h"

//set structure golf properties base on
//arguments of function
void setgolf (golf & g, const char * name, int hc)
{
    strcpy (g.fullname,name);
    g.handicap = hc;
}

//set structure golf properties base on
//input stream
void setgolf (golf & g)
{
    std::cout << "Podaj imie i nazwisko: ";
    std::cin.getline (g.fullname, Len);
    if (g.fullname [0] == '\0' ) return;
    std::cout << "Podaj  wartosc handicap: ";
    std::cin >> g.handicap;
}

//set handicap in structure golf base on
//arguments of function
void handicap (golf & g, int hc)
{
    g.handicap = hc;
}

//set handicap in structure golf base on
//input stream
void handicap (golf & g)
{
    std::cout << "Podaj  wartosc handicap: ";
    std::cin >> g.handicap;
}

//show properties of golf structure
void showgolf (const golf & g)
{
    std::cout << "Imie i nazwisko: " << g.fullname << std::endl;
    std::cout << "Ilosc handicapow: " << g.handicap << std::endl;
}
