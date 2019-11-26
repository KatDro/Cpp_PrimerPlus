#include <iostream>
#include "emp.h"

char show_menu();
const int MAX = 10;
abstr_emp* pc[MAX];

int main()
{
	int amount = 0;
	std::ifstream fin;
	fin.open("list.dat");
	if (!fin.is_open())
	{
		std::cout << "Blad otwarcia pliku do odczytu. Nastapi zakonczenie programu.";
		exit(EXIT_FAILURE);
	}
	std::cout << "Wczytywanie danych z pliku..." << std::endl;
	choices::classkind type_empl = choices::Employee;
	while(fin >> type_empl)
	{
		fin.get();
		switch (type_empl)
		{
		case choices::Employee: pc[amount] = new employee; pc[amount]->Readall(fin); 
			break;
		case choices::Manager: pc[amount] = new manager; pc[amount]->Readall(fin);
			break;
		case choices::Fink: pc[amount] = new fink; pc[amount]->Readall(fin);
			break;
		case choices::Highfink: pc[amount] = new highfink; pc[amount]->Readall(fin);
			break;
		default: std::cout << "Blad pobieranie danych. Nastapi zakonczenie programu.";
			exit(EXIT_FAILURE);
		}
		amount++;
		if (amount == MAX)
		{
			std::cout << "Lista zapelniona, Koniec wczytywania danych." << std::endl;
			break;
		}	
	}
	std::cout << "Aktualna lista pracownikow:\n";
	for (int i = 0; i < amount; i++)
	{
		pc[i]->ShowAll();
		std::cout << std::endl;
	}	
	/////////////////////////////////////////////////////////////////////////////
	std::ofstream fout;
	fout.open("list.dat", std::ios_base::app);
	if (!fout.is_open())
	{
		std::cout << "Blad otwarcia pliku do zapisu. Nastapi zakonczenie programu.";
		exit(EXIT_FAILURE);
	}
	if (amount == MAX)
	{
		std::cout << "Lista zapelniona, Koniec zapisywania danych." << std::endl;
		std::cout << "NAstapi zakonczenie programu" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Program dodawania pracownikow, wypisz 'k', aby zakonczyc program\n";
	char ch;
	int new_empl = 0;
	while (amount != MAX && (ch = show_menu()) != 'k')
	{

		int choice = (int)ch - '0';
		switch (choice)
		{
		case 1: pc[amount] = new employee;
			break;
		case 2: pc[amount] = new manager;
			break;
		case 3: pc[amount] = new fink;
			break;
		case 4: pc[amount] = new highfink;
			break;
		default: std::cout << "Bledne wprowadzone dane. Nastapi zakonczenie programu";
			exit(EXIT_FAILURE);
		}
		pc[amount]->SetAll();
		amount++;
		new_empl++;
	}
	if (amount == MAX)
		std::cout << "Lista pracownikow zapelniona.";
	for (int i = amount - new_empl; i < amount; i++)
		pc[i]->Writeall(fout); 
	
}

char show_menu()
{
	char ch;
	std::cout << "Menu dodawania pracownika.\n";
	std::cout << "Wybierz numer okreslajacy typ pracownika:\n" << "1. Employee\n" << "2. Manager\n" << "3. Fink\n" << "4. Highfink\n";
	std::cout << "Twoj wybor: ";
	std::cin.get(ch);
	while (std::cin.get() != '\n')
		continue;
	return ch;
}