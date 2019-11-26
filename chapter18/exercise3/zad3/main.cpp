#include <iostream>

template<typename T, typename ...Args>
long double sum_values(T val, Args... args);

template<typename T>
T sum_values(T val);

int main()
{
	long double one = sum_values(5, 10.4, 3.7, 12.11, 1);
	long double two = sum_values(5, 10.4, 3.7, 'a');
	std::cout << one << std::endl;
	std::cout << two << std::endl;
}

template<typename T, typename ...Args>
long double sum_values(T val, Args... args)
{
	long double result;
	result = val + sum_values(args...);
	return result;
}

template<typename T>
T sum_values(T val)
{
	return val;
}