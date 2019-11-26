#include <iostream>
#include <initializer_list>

template <typename T>
double avarage_list(const std::initializer_list<T>& li);

int main()
{
	auto q = avarage_list({ 15.4, 10.7, 9.0 });
	std::cout << q << std::endl;
	std::cout << avarage_list({ 20, 30, 19, 17, 45, 38 }) << std::endl;
	auto ad = avarage_list<double>({ 'A', 70, 65.33 });
	std::cout << ad << std::endl;
}

template <typename T>
double avarage_list(const std::initializer_list<T>& li)
{
	double a = *li.begin() + *(li.end()-1) / li.size();
	return a;
}