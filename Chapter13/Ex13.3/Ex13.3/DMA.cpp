#include <iostream>
#include "DMA.h"

using namespace std;

DMA::DMA(const char *l, int r) {
	label = new char[strlen(l)+1];
	strcpy(label, l);
	rating = r;
}
DMA::DMA(const DMA& rs) {
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
}
DMA::~DMA() {
	delete[] label;
}
void DMA::View() const {
	cout << "Etykieta: " << label << "\nKlasa: " << rating << endl;
}

DMA& DMA::operator=(const DMA & rs) {
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
ostream & operator<<(ostream & os, const DMA &rs) {
	os<< "Etykieta: " << rs.label << "\nKlasa: " << rs.rating << endl;
	return os;
}

baseDMA::baseDMA(const baseDMA& rs): DMA(rs) { }

void baseDMA::View() const {
	DMA::View();
}

baseDMA& baseDMA::operator=(const baseDMA & rs) {
	DMA::operator=(rs);
	return *this;
}
	
ostream & operator<<(ostream & os, const baseDMA &rs){
	operator<<(os, (const DMA&)rs);
	return os;
}

lacksDMA::lacksDMA(const char* c, const DMA& rs):DMA(rs) {
	strcpy(color, c);
}

void lacksDMA::View() const {
	DMA::View();
	cout << "Kolor: " << color << endl;
}

ostream & operator<<(ostream & os, const lacksDMA &hs) {
	os << (const DMA&)hs;
	os << "Kolor: " << hs.color << endl;
	return os;
}

hasDMA::hasDMA(const hasDMA& rs):DMA(rs) {
	style = new char[strlen(rs.style) + 1];
	strcpy(style, rs.style);
}

hasDMA::~hasDMA() {
	delete[] style;
}
void hasDMA::View() const{
	DMA::View();
	cout << "Styl: " << style << endl;
}
ostream & operator<<(ostream & os, const hasDMA &hs) {
	os << (const DMA&)hs;
	os << "Kolor: " << hs.style << endl;
	return os;
}