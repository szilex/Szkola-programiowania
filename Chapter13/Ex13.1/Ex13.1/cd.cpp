#include <iostream>
#include "classic.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d) {
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd() {
	performers = new char[5];
	strcpy(performers, "brak");
	label = new char[5];
	strcpy(label, "brak");
	selections =0;
	playtime = 0;
}
Cd::~Cd(){
	delete[] performers;
	delete[] label;
}

void Cd::Report() const {
	std::cout << "Wykonawcy: " << performers << std::endl;
	std::cout << "Nazwa: " << label << std::endl;
	std::cout << "Liczba utworow: " << selections << std::endl;
	std::cout << "Dlugosc w minutach: " << playtime << std::endl;
}
Cd& Cd::operator=(const Cd& d) {
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* s1,const  char* s2, const char* s3, int n, double x):Cd(s1,s2,n,x) {
	main_song = new char[strlen(s3) + 1];
	strcpy(main_song, s3);
}
Classic::Classic(const Classic& d):Cd(d) {
	main_song = new char[strlen(d.main_song) + 1];
	strcpy(main_song, d.main_song);
}
Classic::Classic() : Cd() {
	main_song = new char[5];
	strcpy(main_song, "brak");
}
Classic::~Classic() {
	delete[] main_song;
}
void Classic::Report() const {
	Cd::Report();
	std::cout << "Glowny utwor: " << main_song << std::endl;
}
Classic& Classic::operator=(const Classic& d) {
	Cd::operator=(d);
	main_song = new char[strlen(d.main_song) + 1];
	strcpy(main_song, d.main_song);
	return *this;
}