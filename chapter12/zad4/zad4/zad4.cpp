#include <iostream>
#include "stack.h"

int main()
{
	Item x = 1;
	Stack stos1(5);
	std::cout << "Stos 1:\n" << stos1;
	stos1.push(10);
	stos1.push(3.5);
	std::cout << "Wartosci stosu 1 po dodaniu 10 oraz 3." << std::endl;
	std::cout << "Stos 1:\n" << stos1;
	Stack stos2 = stos1;
	std::cout << "Utworzenie stosu 2, na podstawie stosu 1 (konstruktor kopiujacy)." << std::endl;
	std::cout << "Stos 2:\n" << stos2;
	stos2.pop(x);
	std::cout << "Ususniecie elementu ze stosu 2.\n";
	std::cout << "Stos 2:\n" << stos2;
	Stack stos3;
	std::cout << "Przypisanie stosu 3 do stosu 2.\n";
	stos3 = stos2;
	std::cout << "Stos 3:\n" << stos3;
	stos3.pop(x);
	stos3.pop(x);
	stos3.pop(x);
}
