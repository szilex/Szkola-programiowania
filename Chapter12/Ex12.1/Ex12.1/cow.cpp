#include <iostream>
#include "cow.h"



Cow::Cow() {
	strcpy(name, "Krowa");
	hobby = new char[6];
	strcpy(hobby, "Mleko");
	weight = 10;
}

Cow::Cow(const char *nm, const char* ho, double wt) {
	strcpy(name, nm);
	hobby = new char[strlen(ho)+1];
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow&c) {
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow() {
	delete[] hobby;
}
Cow & Cow::operator=(const Cow& c) {
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const {
	std::cout << "Imie: " << name << "\nHobby: " << hobby << "\nWaga: " << weight << '\n';
}