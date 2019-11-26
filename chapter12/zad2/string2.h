#ifndef STRING_H
#define STRING_H

#include <iostream>

class String
{
private:
    char *str;
    int len;
    static int num_strings;
    static int const CINLIM = 80;
public:
    String (const char * s);
    String();
String (const String &);
~String();
int lenght () const { return len; }
stringlow ();
stringup();
int HowManyChar (const char);
String & operator = (const String &);
String & operator = (const char *);
char & operator [] (int i);
const char & operator [] (int i) const;
String operator + (const String &) const;
friend String operator + (const char * , const String &);
friend bool operator < (const String & st1, const String & st2);
friend bool operator > (const String & st1, const String & st2);
friend bool operator == (const String & st1, const String & st2);
friend std::ostream & operator << (std::ostream & os, const String & st);
friend std::istream & operator >> (std::istream & os, String & st);
static int HowMany() { return num_strings; }
};

#endif // STRING_H

