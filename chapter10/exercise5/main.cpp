#include <iostream>
#include "zad5.h"

using namespace std;

double total_payment;
int main()
{
// Deklaracje struktur
    customer cust1 {"Jan Kowalski", 10.5};
    customer cust2 {"Anna Nowak", 100.1};
    customer cust3 {"Bartlomiej Mucha", 25};
    customer cust4 {"Zbigniew Krzak", 5};
    customer cust5 {"Barbara Zajac", 88};
    std::cout << "Oto lista klientow: " << std::endl << std::endl;
    std::cout << "1.";
    showcust(cust1);
    std::cout << "2.";
    showcust(cust2);
    std::cout << "3.";
    showcust(cust3);
    std::cout << "4.";
    showcust(cust4);
    std::cout << "5.";
    showcust(cust5);
    stack <customer> stos;
    int wybor;
    int klient;
    while (wybor != 4)
    {
        menu();
        std::cout << "Wybierz numer: ";
        std:: cin >> wybor;
        switch (wybor)
        {
        case 1:
            //Nalezy dodac sprawdzenie czy kleint zostal juz dodany
            std::cout << "Podaj numer klienta, ktrorego dodac: ";
            std::cin >> klient;
            switch (klient)
            {
            case 1:
                stos.push(cust1);
                break;
            case 2:
                stos.push(cust2);
                break;
            case 3:
                stos.push(cust3);
                break;
            case 4:
                stos.push(cust4);
                break;
            case 5:
                stos.push(cust5);
                break;
            }
            break;
        case 2:
            if (stos.empty()) std::cout << "Stos jest pusty";
            else
            total_payment += (stos.top()).payment;
            stos.pop();
            std::cout << "Calkowita naleznosc: " << total_payment << std::endl;
            break;
        case 3:
            std::cout << "Ilosc klientow na stosie: " << stos.size() <<std::endl;
        }
    }
}
