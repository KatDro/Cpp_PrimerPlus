#include <iostream>
#include "account.h"

int main()
{
    Account k1("Basia Kowalska", "123 321 123");
    std::cout << "Witamy w banku!" << std::endl;
    showmenu();
    std::cout <<"Podaj numer akcji: ";
    int opt;
    std::cin >> opt;
    while(opt != 4)
    {
        switch (opt)
    {
    case 1:
        k1.show();
        break;
    case 2:
        std::cout << "Podaj kwote depozytu: ";
        double temp;
        std::cin >> temp;
        while(!std::cin.good())
        {
            std::cin.clear();
            char c;
            std::cin.get(c);
            while (c != '\n')
            {
                std::cin.get(c);
            }
            std::cout << "Transakwacja sie nie udala!. Podaj kwote depozytu jeszcze raz: ";
            std::cin >> temp;
        }
        k1.deposit(temp);
        break;
    case 3:
        std::cout << "Podaj kwote podjecie: ";
        std::cin >> temp;
        while(!std::cin.good())
        {
            std::cin.clear();
            char c;
            std::cin.get(c);
            while (c != '\n')
            {
                std::cin.get(c);
            }
            std::cout << "Transakwacja sie nie udala!. Podaj kwote depozytu jeszcze raz: ";
            std::cin >> temp;
        }
        k1.withdraw (temp);
        break;
    }
    std::cout << "Podaj numer akcji:";
    std::cin >> opt;
    }
    return 0;
}
