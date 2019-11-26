#include <iostream>
#include <cstring>
#include "dma.h"

// class DMA
DMA::DMA(const char* l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}
DMA::DMA(const DMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}
DMA& DMA::operator = (const DMA& rs)
{
	if (this == &rs)
		return *this;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}
std::ostream& operator<<(std::ostream& os, const DMA& rs)
{
	os << "Marka: " << rs.label << std::endl << "Ocena: " << rs.rating << std::endl;
	return os;
}
void DMA::View() const
{
	std::cout << "Marka: " << label << std::endl << "Ocena: " << rating << std::endl;
}
//class baseDMA
baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;
	DMA::operator=(rs);
	return *this;
}
void baseDMA::View() const
{
	std::cout << "Marka: " << DMA::Label() << std::endl;
	std::cout << "Ocena: " << DMA::Rating() << std::endl;
}
std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	os << (const DMA&)rs;
	return os;
}
//class lacksDMA
lacksDMA::lacksDMA(const char* c, const char* l, int r) : DMA::DMA(l, r)
{
	strcpy_s(color, COL_LEN - 1, c);
	color[COL_LEN - 1] = '\0';
}
lacksDMA::lacksDMA(const char* c, const DMA& rs) : DMA::DMA(rs)
{
	strcpy_s(color, COL_LEN - 1, c);
	color[COL_LEN - 1] = '\0';
}
void lacksDMA::View() const
{
	std::cout << "Marka: " << DMA::Label() << std::endl;
	std::cout << "Ocena: " << DMA::Rating() << std::endl;
	std::cout << "Kolor: " << color << std::endl;
}
std::ostream& operator<<(std::ostream& os, const lacksDMA& rs)
{
	os << (const DMA&)rs;
	os << "Kolor: " << rs.color << std::endl;
	return os;
}
//class hasDMA
hasDMA::hasDMA(const char* s, const char* l, int r) : DMA::DMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const char* s, const DMA& rs) : DMA::DMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const hasDMA& rs) : DMA::DMA(rs)
{
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}
hasDMA& hasDMA::operator=(const hasDMA& rs)
{
	if (this == &rs)
		return *this;
	DMA::operator=(rs);
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
	return *this;
}
void hasDMA::View() const
{
	std::cout << "Marka: " << DMA::Label() << std::endl;
	std::cout << "Ocena: " << DMA::Rating() << std::endl;
	std::cout << "Styl: " << style << std::endl;
}
std::ostream& operator<<(std::ostream& os, const hasDMA& rs)
{
	os << (const DMA&)rs;
	os << "Styl: " << rs.style << std::endl;
	return os;
}
