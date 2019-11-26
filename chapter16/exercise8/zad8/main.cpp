#include <iostream>
#include <set>
#include <string>
#include <iterator>

int main()
{
	std::set<std::string> Bolek;
	std::cout << "Bolek, podaj liste gosci (akceptuj osobe poprzez klawisz enter ";
	std::cout << ", 0 konczy wprowadzanie): " << std::endl;
	std::string temp;
	getline(std::cin, temp);
	while (temp != "0")
	{
		Bolek.insert(temp);
		getline(std::cin, temp);
	}
	std::cout << "Koniec wprowadzania. Lolek podaj liste gosci:" << std::endl;
	std::set<std::string> Lolek;
	getline(std::cin, temp);
	while (temp != "0")
	{
		Lolek.insert(temp);
		getline(std::cin, temp);
	}
	std::cout << "Koniec wprowadzania." << std::endl;
	std::cout << "Lista gosci Bolka: " << std::endl;
	for (auto it = Bolek.begin(); it != Bolek.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "Lista gosci Lolka: " << std::endl;
	for (auto it = Lolek.begin(); it != Lolek.end(); it++)
		std::cout << *it << std::endl;
	std::set<std::string> guest_list(Bolek.begin(), Bolek.end());
	guest_list.insert(Lolek.begin(), Lolek.end());
	std::cout << "Wspolna lista gosci: " << std::endl;
	for (auto it = guest_list.begin(); it != guest_list.end(); it++)
		std::cout << *it << std::endl;
}