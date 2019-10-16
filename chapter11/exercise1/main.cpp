#include <iostream>
#include <cstdlib> // prototypy funkcji rand() i srand()
#include <ctime>
#include "vect.h"
#include <fstream>

int main()
{
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result;
    unsigned long steps = 0;
    double target;
    double dstep;
    std::cout << "Podaj dystans do przejscia: ";
    while (std::cin >> target)
        {

            std::cout << "Podaj dlugosc kroku: ";
            while (!(std::cin >> dstep))
                {
                    std::cin.clear();
                    while (getchar() != '\n')
                        continue;
                    std::cout << " Blad. Podaj dlugosc kroku jeszcze raz: ";
                }
            std::ofstream file;
            file.open("kroki.txt");
            file << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << std::endl;
            if (!file.is_open())
                {
                    std::cout << "Blad. Plik nie zostal otworzony do zapisu.";
                    break;
                }
            file << steps << ": "<< result << std::endl;
            while (result.magval() < target)
                {
                    direction = rand() % 360;
                    step.reset (dstep, direction, Vector::POL);
                    result = result + step;
                    steps++;
                    file << steps;
                    file << ": ";
                    file << result << std::endl;
                }
            file << "Po "<< steps << " krokach osoba osiagnela polozenie: " << result << "," <<std::endl;
            result.polar_mode();
            file << "czyli "<< result << std::endl;
            file << "Srednia dlugosc kroku pozornego: " << result.magval() / steps << std::endl;
            steps = 0;
            result.reset(0.0, 0.0);
            file.close();
            std::cout << "Podaj dystans do przejscia: k, aby zakonczyc): ";
        }
    std::cout << "Koniec!";
    return 0;
}
