#include <iostream>
#include <cstring>
#include "person.h"

using std::string;

    Person::Person(const string & ln, const char * fn)
    {
        lname = ln;
        strcpy (fname, fn);

    }
    void Person::Show () const
    {
        std::cout << "Imie: " << fname << std::endl;
        std::cout << "Nazwisko: " << lname << std::endl;
    }
    void Person::FormalShow () const
    {
        std::cout << "Nazwisko: " << lname << std::endl;
        std::cout << "Imie: " << fname << std::endl;
    }
