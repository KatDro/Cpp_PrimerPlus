#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include <fstream>

int main()
{
	using namespace std;
	vector <string> s1;
	vector <string> s2;
	string temp;
	fstream file1;
	file1.open("file1.txt");
	if (!file1.is_open())
		cout << "Blad!. Plik nie zostal otworzony." << endl;
	while (file1.good())
	{
		file1 >> temp;
		s1.push_back(temp);
	}	
	fstream file2;
	file2.open("file2.txt");
	if (!file2.is_open())
		cout << "Blad!. Plik nie zostal otworzony." << endl;
	while (file2.good())
	{
		file2 >> temp;
		s2.push_back(temp);
	}
	ostream_iterator<string, char> out(cout, " ");
	cout << "Wektor 1: " << endl;
	copy(s1.begin(), s1.end(), out);
	cout << endl;
	cout << "Wektor 2: " << endl;
	copy(s2.begin(), s2.end(), out);
	cout << endl;

	set<string> A(s1.begin(), s1.end());
	set<string> B(s2.begin(), s2.end());

	cout << "Zbior A: ";
	copy(A.begin(), A.end(), out);
	cout << endl;
	cout << "Zbior B: ";
	copy(B.begin(), B.end(), out);
	cout << endl;

	cout << "Suma zbiorow A i B: ";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Przeciecie zbiorow A i B: ";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Roznica zbiorow A i B: ";
	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	set <string> C;
	cout << "Zbior C:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
	copy(C.begin(), C.end(), out);
	cout << endl;

	string s3("brudny");
	C.insert(s3);
	cout << "Zbior C po wstawieniu:\n";
	copy(C.begin(), C.end(), out);
	cout << endl;

	cout << "Wyswietleniu zakresu :\n";
	copy(C.lower_bound("duch"), C.upper_bound("monstrum"), out);
	cout << endl;
}
