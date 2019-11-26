#pragma once
#include <string>

class Person
{
private:
	std::string name;
public:
	Person() : name("brak") {}
	Person(std::string n) : name(n) {}
	virtual ~Person() {};
	virtual void Data();
	virtual void Get();
	virtual void Set();
	virtual void Show() = 0;
};

class Gunslinger : virtual public Person
{
private:
	int scotch;
public:
	Gunslinger() : Person(), scotch(0) {}
	Gunslinger(std::string n, int s) : Person(n), scotch(s) {}
	~Gunslinger() {}
	float Draw();
	virtual void Data();
	virtual void Get();
	virtual void Set();
	virtual void Show();
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() : Person() {}
	PokerPlayer(std::string n) : Person(n) {}
	~PokerPlayer() {}
	int Draw();
	virtual void Set();
	virtual void Show();
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude() : Person(), Gunslinger(), PokerPlayer() {}
	BadDude(std::string n, int s) : Person(n), Gunslinger(n, s), PokerPlayer(n) {}
	float Gdraw() { return Gunslinger::Draw(); }
	int Cdraw() { return PokerPlayer::Draw(); }
	void Set();
	void Show();
};