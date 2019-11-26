#include "cow.h"
#include <iostream>
#include <cstring>

Cow::Cow()
{
    strcpy (name, "");
    hobby = new char [1];
    hobby[0] = '\0';
    weight = 0;
}
Cow::Cow (const char * nm, const char * ho, double wt)
{
    strcpy (name, nm);
    hobby = new char [strlen(ho)+1];
    strcpy (hobby, ho);
    weight = wt;
}
Cow::Cow (const Cow & c)
{
    strcpy (name, c.name);
    hobby = new char [strlen(c.hobby)+1];
    strcpy (hobby, c.hobby);
    weight = c.weight;
    std::cout << "zakonczono dzialanie konstruktora kopiujacego " << std::endl;
}
Cow & Cow::operator = (const Cow & c)
{
    strcpy (name, c.name);
    hobby = new char [strlen(c.hobby)+1];
    strcpy (hobby, c.hobby);
    weight = c.weight;
    std::cout << "zakonczono dzialanie operatora = " << std::endl;
}
void Cow::ShowCow () const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}
