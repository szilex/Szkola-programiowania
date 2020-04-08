#include <iostream>
#include "Golf.h"
#include <string>

Golf::Golf() {
	using std::cout;
	char fullname[40];
	int handicap;
	cout << "Wprowadz imie i nazwisko: ";
	std::cin.get(fullname,40);
	cout << "Wprowadz handicap: ";
	std::cin >> handicap;
	Golf temp(fullname, handicap);
	*this = temp;
	
}
Golf::Golf(const char * name, int hc) {
	strcpy_s(fullname, name);
	this->hcp = hc;
}

void Golf::handicap(int hc) {
	this->hcp = hc;
}

void Golf:: showgolf() const {
	std::cout << "Gracz: " << fullname << ", handicap: " << hcp << std::endl;
}