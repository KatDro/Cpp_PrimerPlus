#include <iostream>
#include "golf.h"

int main()
{
    Golf zaw1 ("Jan Kowalski", 10);
    zaw1.showgolf();
    zaw1.hand(20);
    zaw1.showgolf();

    Golf zaw2;
    int temp = zaw2.setgolf();
    if (temp ==1) zaw2.showgolf();

    return 0;
}
