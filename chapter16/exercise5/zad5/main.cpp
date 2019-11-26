#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

template<class T>
int reduce(T ar[], int n);

int main()
{
	const int SIZE1 = 9;
	std::cout << "Tablica elementow typu long." << std::endl;
	long arr1[SIZE1] = { 43.2, 12.0, 4.65, 543.0, 65.3, 12.0, 1.122, 12.0, 34.5 };
	int s1 = reduce(arr1, SIZE1);
	std::cout << s1 << std::endl;
	std::cout << "Tablica obiektow string." << std::endl;
	const int SIZE2 = 6;
	std::string arr2[SIZE2] = { "bufon", "klasa", "obok", "klasa", "dla", "dla" };
	int s2 = reduce(arr2, SIZE2);
	std::cout << s2 << std::endl;
	std::cout << "Wektor obiektow int." << std::endl;
	std::vector<int> v1 = { 32, 65, 3, 66, 1, 43, 65, 1 };
	int* p1 = new int;
	p1 = &v1[0];
	int s3 = reduce(p1, v1.size());
	std::cout << s3 << std::endl;
}

template <class T>
int reduce(T ar[], int n)
{
	std::ostream_iterator<T, char> out(std::cout, " ");
	std::sort(ar, ar + n);
	copy(ar, ar + n, out);
	std::cout << std::endl;
	auto it = std::unique(ar, ar + n);
	int size_result = std::distance(ar, it);
	T* ar_result = new T[size_result];
	std::copy(ar, it, ar_result);
	copy(ar_result, ar_result + size_result, out);
	std::cout << std::endl;
	return size_result;
}