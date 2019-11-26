#include <iostream>
#include "cow.h"

using std::cout;
using std::endl;

main()
{
    Cow c1;
    Cow c2 ("Ala", "Jedzenie trawy", 187);
    Cow c3 = c2;
    c3 = c2;
    Cow c4 ("Basia", "Muczenie", 231.56);
    Cow c5 (c4);
    cout << "Krowa 1" << endl;
    c1.ShowCow();
    cout << "Krowa 2" << endl;
    c2.ShowCow();
    cout << "Krowa 3" << endl;
    c3.ShowCow();
    cout << "Krowa 4" << endl;
    c4.ShowCow();
    cout << "Krowa 5" << endl;
    c5.ShowCow();

    return 0;
}
