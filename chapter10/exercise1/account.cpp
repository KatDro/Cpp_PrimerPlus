#include "account.h"
#include <iostream>

Account::Account (const string n, const string no, double b)
{
    name = n;
    number = no;
    balance = b;
}

void Account::show () const
{
    std::cout << "Posiadacz konta: " << name << std::endl;
    std::cout << "Numer konta: " << number << std::endl;
    std::cout << "Saldo konta: " << balance << std::endl;
}

void Account::deposit (double d)
{
    balance +=d;
}

void Account::withdraw (double n)
{
    if (balance < n)
        std::cout << "Brak wystarczajacych srodkow na koncie." << std::endl;
    else
    balance -=n;
}

void showmenu()
{
    std::cout << "1. Pokaz stan konta\n" << "2. Wplac pieniadze\n" << "3. Wyplac pieniadze\n";
    std::cout << "4.Koniec\n";
}
