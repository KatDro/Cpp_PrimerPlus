#include <iostream>
#include "move.h"


int main()
{
    std::cout << "Obiekt 1" << std::endl;
    Move ruch1(1.5, 3.5);
    ruch1.showmove();
    std::cout << "Obiekt 2" << std::endl;
    Move ruch2;
    ruch2.showmove();
    std::cout << "Obiekt 3" << std::endl;
    Move ruch3 (10.1, 2);
    ruch3.showmove();
    std::cout << "Obiekt 4" << std::endl;
    Move ruch4;
    ruch4 = ruch1.add(ruch3);
    ruch4.showmove();

    return 0;
}
