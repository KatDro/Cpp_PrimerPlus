#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>;
#include <cstdlib>;

std::vector<int> Lotto(int range, int n);

int main()
{
	std::srand(std::time(0));
	std::vector<int> winners;
	winners = Lotto(100, 4);
	for (std::vector<int>::iterator it = winners.begin(); it != winners.end(); it++)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

std::vector<int> Lotto(int range, int n)
{
	std::vector<int> v_range;
	for (int i = 1; i <= range; i++)
		v_range.push_back(i);
	std::random_shuffle(v_range.begin(), v_range.end());
	std::vector<int> result(v_range.begin(), v_range.begin() + n);
	std::sort(result.begin(), result.end());
	return result;
}