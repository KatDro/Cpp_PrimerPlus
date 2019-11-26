#pragma once
#include <valarray>
#include <string>
#include "pair.h"

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private Pair<ArrayInt, ArrayInt>
{
public:
	std::string name;
	int years;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]) : 
		name(l), years(y), Pair(ArrayInt(yr, y), ArrayInt(bot,y)) {}
	Wine(const char* l, int y) :
		name(l), years(y), Pair(ArrayInt(y), ArrayInt(y)) {}
	void GetBottles();
	std::string& Label()  { return name; }
	int Sum() const;
	void Show() const;
};