#ifndef STONE_H
#define STONE_H
#include <iostream>

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};  //liczba funtow na kamien
    enum  Mode {STN, LBSD, LBSI};
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt (double lbs, Mode m = LBSD);
    Stonewt (int stn, double lbs, Mode m = STN);
    Stonewt();
    ~Stonewt();
    void stone_mode();
    void lbsdouble_mode();
    void lbsint_mode();
    Stonewt operator + (const Stonewt & st) const;
    Stonewt operator - (const Stonewt & st) const;
    Stonewt operator * (const Stonewt & st) const;
    friend std::ostream & operator << (std::ostream & os, const Stonewt & st);
};
#endif // STONE_H
