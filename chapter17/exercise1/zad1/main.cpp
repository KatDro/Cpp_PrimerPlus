#include <iostream>

int main()
{
	std::cout << "Wprawadz znaki (znak '$' konczy)" << std::endl;
	int ct = 0;
	char ch;
	while (std::cin.peek() != '&')
	{
		ct++;
		std::cin.get(ch);
	}
	std::cin.get(ch);
	std::cout << "Koniec wprowadzania. Nastepny znak w strumieniu: " << ch << std::endl;
	std::cout << "Wprowadziles znakow: " << ct;
}