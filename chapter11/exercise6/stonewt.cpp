#include "stonewt.h"
#include <iostream>

using std::cout;

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) /Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()
{

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

bool Stonewt::operator == (const Stonewt & st) const
{
    if (pounds == st.pounds)
        return true;
    else
        return false;
}
bool Stonewt::operator > (const Stonewt & st) const
{

    if (pounds > st.pounds)
        return true;
    else
        return false;
}
bool Stonewt::operator < (const Stonewt & st) const
{
    if (pounds < st.pounds)
        return true;
    else
        return false;
    }

std::ostream & operator << (std::ostream & os, const Stonewt & st)
{
    os << "Kamieni: " << st.stone << ", reszta funtow: " << st.pds_left;
    os <<  "\tFuntow: " << st.pounds;
    return os;
}

