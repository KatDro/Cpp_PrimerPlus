#include <iostream>
#include "vect.h"
#include "functions.h"
#include <vector>
#include <ctime>
#include <cstdlib>

using VECTOR::Vector;

int main()
{
    srand(time(0));
    std::cout << "Podaj ilosc prob: ";
    int N;
    std::cin >> N;
    double target;
    double dstep;
    std::cout << "Podaj dystans do przejscia: ";
    while (!(std::cin >> target))
        {
            std::cin.clear();
            while (getchar() != '\n')
                continue;
            std::cout << " Blad. Podaj dlugosc kroku jeszcze raz: ";
        }
    std::cout << "Podaj dlugosc kroku: ";
    while (!(std::cin >> dstep))
        {
            std::cin.clear();
            while (getchar() != '\n')
                continue;
            std::cout << " Blad. Podaj dlugosc kroku jeszcze raz: ";
        }
    std::vector <unsigned long> results;
    for (int i = 0; i <= N; i++)
        results.push_back(randwalk(target, dstep));
    unsigned long min = minimum(results);
    unsigned long max = maximum(results);
    unsigned long avar = avarage(results);
    std:: cout << std::endl << "Dystans do przejscia: "<< target;
    std:: cout << " Dlugosc kroku: " << dstep << std::endl;
    std::cout << "Ilosc prob: " << N << std::endl;
    std::cout << "Minimalna ilosc krokow: " << min << std::endl;
    std::cout << "Maksymalna ilosc krokow: " << max << std::endl;
    std::cout << "Srednia ilosc krokow: " << avar << std::endl;
    return 0;
}
