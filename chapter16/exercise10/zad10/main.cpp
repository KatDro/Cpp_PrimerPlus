#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review
{
	std::string title;
	int rating;
	float proce;
};
bool operator<(std::shared_ptr <Review> r1, std::shared_ptr <Review> r2);
bool WorseThan(std::shared_ptr <Review> r1, std::shared_ptr <Review> r2);
bool FillReview(std::shared_ptr< Review> rr);
void ShowReview(std::shared_ptr <Review> rr);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	std::vector <std::shared_ptr <Review>> books;
	std::shared_ptr <Review> temp (new Review);
	while (FillReview(temp))
	{
		books.push_back(temp);
		temp.reset(new Review);
	}
		
	if (books.size() > 0)
	{
		cout << "Dziekuje. Podales " << books.size() << " ocen ksiazek:\n"
			<< "Ocena:\tKsiazka:\n";
		std::for_each(books.begin(), books.end(), ShowReview);

		std::sort(books.begin(), books.end());
		cout << "Posortowane wedlug tytulu:\nOcena:\tKsiazka:\n";
		std::for_each(books.begin(), books.end(), ShowReview);

		std::sort(books.begin(), books.end(), WorseThan);
		cout << "Posortowane wedlug oceny:\nOcena:\tKsiazka:\n";
		std::for_each(books.begin(), books.end(), ShowReview);

		std::random_shuffle(books.begin(), books.end());
		cout << "Po wymieszaniu:\nOcena:\tKsiazka:\n";
		std::for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "Brak danych.\n";
	cout << "Koniec.\n";
}

bool operator<(std::shared_ptr<Review> r1, std::shared_ptr<Review> r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool WorseThan(std::shared_ptr<Review> r1, std::shared_ptr<Review> r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool FillReview(std::shared_ptr<Review> rr)
{
	std::cout << "Wpisz tytul ksiazki (koniec, aby zakonczyc): ";
	std::getline(std::cin, rr->title);
	if (rr->title == "koniec")
		return false;
	std::cout << "Wpisz ocene:";
	std::cin >> rr->rating;
	if (!std::cin.good())
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(std::shared_ptr<Review> rr)
{
	std::cout << rr->rating << "\t" << rr->title << std::endl;
}