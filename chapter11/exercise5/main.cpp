#include <iostream>
#include "stonewt.h"

using std::cout;
using std::endl;

int main()
{
    Stonewt st1(1, 12.5);
    Stonewt st2(15.1);
    Stonewt st3;
    std::cout << "waga 1: " << st1;
    st1.lbsdouble_mode();
    std::cout << "\t\t" << st1 << std::endl;
    st2.stone_mode();
    std::cout << "waga 2: " << st2;
    st2.lbsdouble_mode();
    std::cout << "\t\t"<< st2 << std::endl;
    st3.stone_mode();
    std::cout << "waga 3: " << st3;
    st3.lbsdouble_mode();
    std::cout << "\t\t"<< st3 << std::endl;

    st3 = st1 + st2;
    cout << "Waga 1 + Waga 2: " << st3;
    st3.stone_mode();
    cout <<"\t\t "<< st3 << endl;

    st3 = st1 - st2;
    cout << "Waga 1 - Waga 2: " << st3;
    st3.stone_mode();
    cout <<"\t\t "<< st3 << endl;

    st3 = st1 * st2;
    cout << "Waga 1 - Waga 2: " << st3;
    st3.stone_mode();
    cout <<"\t\t "<< st3 << endl;

    return 0;
}
