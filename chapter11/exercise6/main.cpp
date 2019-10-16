#include <iostream>
#include "stonewt.h"
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    double p;
    vector <Stonewt> tab = { (25), (1, 12), (2)};

    for (int i = 3; i < 6; i++)
        {
            cout << "Podaj wartosci wagi w funtach dla pozycji " << i +1 << ": ";
            cin >> p;
             tab.push_back(Stonewt(p));
        }

    for (int i = 0; i < 6; i++)
        cout << tab[i] << endl;

    Stonewt maxi = tab[0];
    for (int i = 1; i < tab.size(); i++)
        if (tab[i] > maxi)
            maxi = tab[i];

    Stonewt mini = tab[0];
    for (int i = 1; i < tab.size(); i++)
        if (tab[i] < mini)
            mini = tab[i];

    cout << "Najmniejsza waga: " << mini << endl;
    cout << "Najwieksza waga: " << maxi << endl;
    cout << "Wartosci wieksze od 11 pounds: " << endl;

    Stonewt st11 (11);
    for (int i = 0; i < tab.size(); i++)
        if (tab[i] > st11)
            cout << tab[i] << endl;

    return 0;
}
