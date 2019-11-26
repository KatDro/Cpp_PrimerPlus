#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <iterator>

int main()
{
	std::ifstream fin;
	fin.open("bolek.dat");
	if (!fin.is_open())
	{
		std::cout << "Plik nie zostal otworzony.";
		exit(EXIT_FAILURE);
	}
	std::string guest;
	std::set<std::string> b_list;
	while (getline(fin, guest))
		b_list.insert(b_list.end(), guest);
	std::cout << "Lista gosci Bolka:" << std::endl;
	std::ostream_iterator<std::string> out(std::cout, "\n");
	copy(b_list.begin(), b_list.end(), out);
	std::cout << std::endl;
	fin.close();

	fin.open("lolek.dat");
	if (!fin.is_open())
	{
		std::cout << "Plik nie zostal otworzony.";
		exit(EXIT_FAILURE);
	}
	std::set<std::string> l_list;
	while (getline(fin, guest))
		l_list.insert(l_list.end(), guest);
	std::cout << "Lista gosci Lolka: " << std::endl;
	copy(l_list.begin(), l_list.end(), out);
	std::cout << std::endl;
	fin.close();

	std::set<std::string> bl_list;
	bl_list.insert(l_list.begin(), l_list.end());
	bl_list.insert(b_list.begin(), b_list.end());
	std::cout << "Wspolna lista gosci Bolka i Lolka:" << std::endl;
	copy(bl_list.begin(), bl_list.end(), out);
	
	std::ofstream fout;
	fout.open("bolilol.dat");
	if (!fout.is_open())
	{
		std::cout << "Plik nie zostal otworzony.";
		exit(EXIT_FAILURE);
	}
	for (auto i = bl_list.begin(); i != bl_list.end(); i++)
		fout << *i << std::endl;
	fout.close();

}