#pragma once
#include <iostream>

class DMA
{
private:
	char* label;
	int rating;
protected:
	static int const LIM = 80;
public:
	DMA(const char* l = "brak", int r = 0);
	DMA(const DMA& r);
	DMA& operator = (const DMA& rs);
	virtual ~DMA() { delete[] label; }
	virtual void View() const = 0; //funkcja czysto wirtualna
	char* Label() const { return label; }
	int Rating() const { return rating; }
	friend std::ostream& operator<<(std::ostream& os, const DMA& rs);
};

class baseDMA : public DMA
{
public:
	baseDMA(const char* l = "brak", int r = 0) : DMA::DMA(l, r) {}
	baseDMA(const baseDMA& rs) : DMA::DMA(rs) {}
	~baseDMA() {};
	void View() const;
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

class lacksDMA : public DMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "brak", const char* l = "brak", int r = 0);
	lacksDMA(const char* c, const DMA& rs);
	void View() const;
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
};

class hasDMA : public DMA
{
private:
	char* style;
public:
	hasDMA(const char* s = "brak", const char* l = "brak", int r = 0);
	hasDMA(const char* s, const DMA& rs);
	hasDMA(const hasDMA& rs);
	~hasDMA();
	void View() const;
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};