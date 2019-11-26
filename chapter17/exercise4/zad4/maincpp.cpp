#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream fin1;
	fin1.open("w1_plik.txt");
	if (!fin1.is_open())
	{
		std::cout << "Nie udalo sie otworzyc pliku w1_plik.txt.";
		exit(EXIT_FAILURE);
	}
	std::ifstream fin2;
	fin2.open("w2_plik.txt");
	if(!fin2.is_open())
	{
		std::cout << "Nie udalo sie otworzyc pliku w2_plik.txt.";
		exit(EXIT_FAILURE);
	}
	std::fstream foutin;
	foutin.open("wyjscie.txt");
	if (!foutin.is_open())
	{
		std::cout << "Nie udalo sie otworzyc pliku wyjscie.";
		exit(EXIT_FAILURE);
	}
	std::string temp1, temp2;

	while (fin1.good() || fin2.good())
	{
		if (fin1.good())
		{
			getline(fin1, temp1);
			foutin << temp1 << " ";
		}
		if (fin2.good())
		{
			getline(fin2, temp2);
			foutin << temp2;
		}
		foutin << std::endl;		
	}
	foutin.seekp(std::ios_base::beg);
	char ch;
	while (foutin.get(ch))
		std::cout << ch;
}