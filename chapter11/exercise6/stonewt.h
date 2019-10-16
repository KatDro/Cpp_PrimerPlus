#ifndef STONE_H
#define STONE_H
#include <iostream>

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};  //liczba funtow na kamien
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt (double lbs);
    Stonewt (int stn, double lbs);
    Stonewt();
    ~Stonewt();
    Stonewt operator + (const Stonewt & st) const;
    Stonewt operator - (const Stonewt & st) const;
    Stonewt operator * (const Stonewt & st) const;
    bool operator == (const Stonewt & st) const;
    bool operator > (const Stonewt & st) const;
    bool operator < (const Stonewt & st) const;
    friend std::ostream & operator << (std::ostream & os, const Stonewt & st);
};
#endif // STONE_H
