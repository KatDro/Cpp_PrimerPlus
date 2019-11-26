#include <iostream>
#include <string>

bool palindrom(std::string& st);
int main()
{
	std::string s;
	std::cout << "Podaj slowo, (koniec konczy program): ";
	while (std::getline(std::cin, s) && s != "koniec")
	{
		if (palindrom(s))
			std::cout << "Podane slowo to palindrom." << std::endl;
		else
			std::cout << "Podane slowo to nie palindrom." << std::endl;
	}
}

bool palindrom(std::string& st)
{
	if (st.size() % 2 == 0)
		return false;
	std::string st_begin;
	st_begin.insert(st_begin.begin(), st.begin(), (st.begin() + (st.size() - 1) / 2));
	std::string st_end;
	st_end.insert(st_end.begin(), (st.begin() + (st.size() + 1) / 2), st.end());
	std::reverse(st_end.begin(), st_end.end());
	if (st_begin == st_end)
		return true;
	else
		return false;
}