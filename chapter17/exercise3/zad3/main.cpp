#include <iostream>
#include <fstream>

//pierwszy argument to destination, drugi argument to source
int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		std::cerr << "Blad, zla skladnia polecenia, brakuje argumentow";
		exit(EXIT_FAILURE);
	}
	std::ofstream fout;
	fout.open(argv[1]);
	if (!fout.is_open())
	{
		std::cout << "Nie udalo sie otworzyc pliku: " << argv[1] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream fin;
	fin.open(argv[2]);
	if (!fin.is_open())
	{
		std::cout << "Nie udalo sie otworzyc pliku: " << argv[2] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Nastepuje kopiowanie tekstu z pliku: " << argv[2] << " do pliku: " << argv[1] << std::endl;
	char temp;
	while (fin.get(temp))
		fout << temp;
	std::cout << "Koniec kopiowania." << std::endl;
}