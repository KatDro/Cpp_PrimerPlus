#pragma once
#include <iostream>
#include <string>
#include <valarray>
#include "Pair.h"

//typedef std::valarray<int> ArrayInt;
//typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
	
	std::string name;
	int years;
	Pair<std::valarray<int>, std::valarray<int> > yearbot;
public:
	Wine();
	Wine(const char* l, int y, int yr[], int bot[]): name(l), years(y), 
		yearbot(std::valarray<int>(yr, y), std::valarray<int>(bot, y)) {}
	Wine(const char* l, int y) : name(l), years(y), 
		yearbot(std::valarray<int>(y), std::valarray<int>(y)) {}
	void GetBottles();
	std::string& Label() { return name; }
	int Sum();
	void Show();
};
