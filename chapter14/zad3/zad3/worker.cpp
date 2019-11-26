#include <iostream>
#include "worker.h"

void Worker::data() const
{
	std::cout << "Imie i nazwisko: " << fullname << std::endl;
	std::cout << "Numer identyfikacyjny: " << id << std::endl;
}
void Worker::get()
{
	std::cout << "Podaj imie i nazwisko: ";
	std::getline(std::cin, fullname);
	std::cout << "Podaj numer identyfikacyjny: ";
		std::cin >> id;
	while (std::cin.get() != '\n')
		continue;
}

