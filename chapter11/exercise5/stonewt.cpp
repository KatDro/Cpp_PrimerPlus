#include "stonewt.h"
#include <iostream>

using std::cout;

Stonewt::Stonewt(double lbs, Mode m)
{
    mode = m;
    stone = int (lbs) /Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, Mode m)
{
    mode = m;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
    mode = LBSD;
}

Stonewt::~Stonewt()
{

}

void Stonewt::stone_mode()
{
    mode = STN;
}

void Stonewt::lbsdouble_mode()
{
    mode = LBSD;
}

void Stonewt::lbsint_mode()
{
    mode = LBSI;
}

Stonewt Stonewt::operator + (const Stonewt & st) const
{
    Stonewt sum;
    sum.pounds = pounds + st.pounds;
    sum.stone = int(sum.pounds) / Lbs_per_stn;
    sum.pds_left = int(sum.pounds) % Lbs_per_stn + sum.pounds - int(sum.pounds);
    return sum;
}

Stonewt Stonewt::operator - (const Stonewt & st) const
{
    Stonewt diff;
    diff.pounds = pounds - st.pounds;
    diff.stone = int (diff.pounds) / Lbs_per_stn;
    diff.pds_left = int (diff.pounds) % Lbs_per_stn + diff.pounds - int(diff.pounds);
    return diff;
}

Stonewt Stonewt::operator * (const Stonewt & st) const
{
    Stonewt multi;
    multi.pounds = pounds * st.pounds;
    multi.stone = int (multi.pounds) / Lbs_per_stn;
    multi.pds_left = int (multi.pounds) % Lbs_per_stn + multi.pounds - int(multi.pounds);
    return multi;
}

std::ostream & operator << (std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::STN)
    os << "Kamieni: " << st.stone << ", reszta funtow: " << st.pds_left;
    else if (st.mode == Stonewt::LBSD)
    os <<  "Funtow: " << st.pounds;
    else if (st.mode == Stonewt::LBSI)
    os <<  "Funtow: " << int(st.pounds);
    else
    os << "Blad.";
    return os;
}
