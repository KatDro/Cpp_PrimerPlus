#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person
{
private:
    static const int LIMIT = 256;
    std::string lname;
    char fname[LIMIT];
public:
    Person() { lname = " "; fname[0] = '\0'; } // constructor 1
    Person(const std::string & ln, const char * fn = "Hejty"); // constructor 2
    void Show () const;
    void FormalShow () const;
};

#endif
