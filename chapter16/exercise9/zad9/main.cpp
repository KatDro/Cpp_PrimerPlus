#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main()
{
	const int SIZE = 100000;
	std::srand(time(0));
	std::vector<int> vi0;
	int temp;
	for (int i = 0; i < SIZE; i++)
	{
		temp = rand() % 10000;
		vi0.push_back(temp);
	}
	std::vector<int> vi(vi0.begin(), vi0.end());
	std::list<int> li(vi0.begin(), vi0.end());
	clock_t start = clock();
	sort(vi.begin(), vi.end());
	clock_t stop = clock();
	double time_vector = (double) (stop - start) / CLOCKS_PER_SEC;
	start = clock();
	li.sort();
	stop = clock();
	double time_list = (double)(stop - start) / CLOCKS_PER_SEC;
	std::cout << "Czas sortowania vectora: " << time_vector << std::endl;
	std::cout << "Czas sortowania listy: " << time_list << std::endl;
	std::copy(vi0.begin(), vi0.end(), li.begin());
	start = clock();
	std::vector<int> vi_list(li.begin(), li.end());
	std::sort(vi_list.begin(), vi_list.end());
	copy(vi_list.begin(), vi_list.end(), li.begin());
	stop = clock();
	double time_list_vector = (double)(stop - start) / CLOCKS_PER_SEC;
	std::cout << "Czas sortowania listy z wykorzystaniem vectora: " << time_list_vector << std::endl;
}