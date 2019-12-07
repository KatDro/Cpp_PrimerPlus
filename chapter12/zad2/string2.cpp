#include "string2.h"
#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::endl;
using std::strcpy;
using std::strcat;

int String::num_strings = 0;

String::String (const char * s)
{
    len = strlen(s);
    str = new char [len + 1];
    strcpy(str, s);
    num_strings++;
}
String::String()
{
    len = 0;
    str = new char [CINLIM+1];
    str =nullptr;
}
String::String (const String & s)
{
    len = s.len;
    str = new char [len + 1];
    strcpy(str, s.str);
    num_strings++;
}
String::~String()
{
    delete [] str;
    num_strings--;
}
String::stringlow ()
{
    int i = 0;
    while (str [i])
    {
        str[i] = tolower(str[i]);
        i++;
    }
}
String::stringup ()
{
    int i = 0;
    while (str [i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    //cout << "Test" << str;
}
int String::HowManyChar (const char c)
{
    int i = 0;
    int amount = 0;
    while (str[i])
    {
        if (str[i] == c)
            amount++;
            i++;
    }
    return amount;
}
String & String::operator = (const String & s)
{
    len = s.len;
    str = new char [len+1];
    strcpy (str, s.str);
}
String & String::operator = (const char * s)
{
    len = strlen(s);
    str = new char [len+1];
    strcpy (str, s);
}
char & String::operator [] (int i)
{
    return str[i];
}
const char & String::operator [] (int i) const
{
    return str[i];
}
String String::operator + (const String & s) const
{
    //cout << str << " + " << s.str << endl;
    char * temp = new char [len + s.len + 1];
    strcpy(temp, str);
    //cout << "tymczasowy lancuch " << temp;
    strcat(temp, s.str);
    //cout << "koncowy lancuch " << temp;
    String result (temp);
    delete [] temp;
    return result;
}
String operator + (const char * c, const String & st)
{
    return String(c) + st;
}
bool operator < (const String & st1, const String & st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}
bool operator > (const String & st1, const String & st2)
{
    return (strcmp(st1.str, st2.str) > 0);
}
bool operator == (const String & st1, const String & st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}
std::ostream & operator << (std::ostream & os, const String & st)
{
    os << st.str;
    return os;
}
std::istream & operator >> (std::istream & is, String & st)
{
    char temp [String::CINLIM];
    is.getline(temp, String::CINLIM);
    st = temp;
    return is;
}



