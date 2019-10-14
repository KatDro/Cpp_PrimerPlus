#include <iostream>
#include "golf.h"

const int N = 3; //number of golf structure in array

int main()
{
    std::cout << "STATYSTYKI GOLFIARZY" << std::endl;
    golf arr [N];
    std::cout << "Wprowadz dane golfiarzy, puste nazwisko gracza konczy wprowadzanie." << std::endl;
    int i = 0;
    while (i < N)
    {
        setgolf (arr[i]);
        if (arr[i].fullname [0] == '\0' ) break;
        std::cin.get();
        i++;
    }
    int amount = i-1; //amount of golf structure saved in array

    for (int j = 0; j <= amount; j++)
    {
        showgolf(arr[j]);
    }

    return 0;
}
