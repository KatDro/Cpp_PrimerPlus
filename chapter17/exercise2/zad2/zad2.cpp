#include <iostream>
#include <fstream>
#include <string>
#pragma warning(disable : 4996)

int main(int argc, char* argv[])
{
	using std::cin;
	using std::cout;
	using std::endl;

	//std::string filename;
	//cout << "Podaj nazwe pliku: ";
	//std::getline(cin, filename);
	if (argc == 1)
	{
		std::cerr << "Skladnia: " << argv[0] << " plik[i]\n";
		exit(EXIT_FAILURE);
	}
	//char * fname = new char[filename.size() + 1];
	//strcpy(fname, filename.c_str());
	//fout.open(fname);
	std::ofstream fout;
	for (int i = 1; i < argc; i++)
	{
		fout.open(argv[i]);
		if (!fout.is_open())
		{
			cout << "Nie udalo sie otworzyc pliku. Nastapi zakonczenie programu.";
			exit(EXIT_FAILURE);
		}
		cout << "Podaj tekst to skopiowania do pliku, (CTRL+Z, konczy kopiowanie znakow)";
		std::string temp;
		while (getline(cin, temp))
		{
			fout << temp << endl;
			if (cin.eof())
				break;
		}
		cout << "Koniec zapisywania do pliku.";
	}

}