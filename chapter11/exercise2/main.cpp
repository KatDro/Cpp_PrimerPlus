#include <iostream>
#include <cstdlib> // prototypy funkcji rand() i srand()
#include <ctime>
#include "vect.h"

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
            while (result.magval() < target)
                {
                    direction = rand() % 360;
                    step.reset (dstep, direction, Vector::POL);
                    result = result + step;
                    steps++;
                }
            std::cout << "Po "<< steps << " krokach osoba osiagnela polozenie: " << result << "," <<std::endl;
            result.polar_mode();
            std::cout << "czyli "<< result << std::endl;
            std::cout << "Srednia dlugosc kroku pozornego: " << result.magval() / steps << std::endl;
            steps = 0;
            result.reset(0.0, 0.0);
            std::cout << "Podaj dystans do przejscia: k, aby zakonczyc): ";
        }
    std::cout << "Koniec!";
    return 0;
}
