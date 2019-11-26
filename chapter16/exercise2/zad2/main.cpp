#include <iostream>
#include <string>
#include <algorithm>


bool palindrom(std::string& st);
bool space(char c);

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

bool space(char c)
{
	if (c == ' ')
		return true;
	else
		return false;
}

bool palindrom(std::string& st)
{
	st.erase(std::remove_if(st.begin(), st.end(), space), st.end());
	std::cout << st << std::endl;
	if (st.size() % 2 == 0)
		return false;
	std::transform(st.begin(), st.end(), st.begin(), std::tolower);
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