#include <iostream>
using std::cout;
#include "stonewt.h"

int main() {
	Stonewt tab[6]{ {275},{258.7},{21,8} };
	Stonewt eleven(11 * 14);
	for (int i = 3; i < 6; i++) {
		cout << "Wprowadz wage w funtach: ";
		double weight;
		std::cin >> weight;
		tab[i] = weight;
	}
	cout << "Celebryta wazyl " << tab[0];
	cout << "Detektyw wazyl " << tab[1];
	cout << "Prezydent wazyl " << tab[2];
	cout << "Papiez wazyl " << tab[3];
	cout << "Piosenkarz wazyl " << tab[4];
	cout << "Aktor wazyl " << tab[5];
	for (int i = 0; i < 6; i++) {
		if (tab[i] >= eleven)
			cout << "Osoba " << i + 1 << " jest ciezsza niz 11 kamieni\n";
	}

	system("PAUSE");
	return 0;
}