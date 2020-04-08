#include "stdafx.h"
#include <iostream>
#include "golf.h"
#include <string>

using namespace std;


void setgolf(golf & g, const char * name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

bool setgolf(golf & g) {
	cout << "Wprowadz imie i nazwisko: ";
	cin.get(g.fullname, Len);
	if (g.fullname == "")
		return 0;
	else {
		cout << "Wprowadz handicap: ";
		cin >> g.handicap;
		return 1;
	}	
}

void handicap(golf & g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf & g) {
	cout << "Gracz: " << g.fullname << ", handicap: " << g.handicap<<endl;
}