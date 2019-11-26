#include <iostream>
#include <algorithm>
#include <iterator>

int reduce(long ar[], int n);

int main()
{
	const int SIZE = 9;
	long arr[SIZE] = { 43.2, 12.0, 4.65, 543.0, 65.3, 12.0, 1.122, 12.0, 34.5 };
	int s = reduce(arr, SIZE);
	std::cout << s;
}

int reduce(long ar[], int n)
{
	std::ostream_iterator<long, char> out (std::cout, " ");
	std::sort(ar, ar + n);
	copy(ar, ar + n, out);
	std::cout << std::endl;
	auto it = std::unique(ar, ar + n);
	int size_result = std::distance(ar, it);
	long* ar_result = new long [size_result];
	std::copy(ar, it, ar_result);
	copy(ar_result, ar_result + size_result, out);
	std::cout << std::endl;
	return size_result;
}