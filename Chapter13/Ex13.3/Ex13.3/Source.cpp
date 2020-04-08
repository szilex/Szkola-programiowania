#include <iostream>
#include "DMA.h"

using namespace std;

int main() {
	DMA* tab[3];
	tab[0] = new baseDMA("Portabelly", 8);
	tab[1] = new lacksDMA("czerwony", "Blimpo", 4);
	tab[2] = new hasDMA("Merkator", "Buffalo Keys", 5);
	for (int i = 0; i < 3; i++)
		tab[i]->View();
	cout << "1. Utworz baseDMA\n2. Utworz lacksDMA\n3. Utworz hasDMA\n4. Zakoncz\n";
	int choice;
	while (cin >> choice) {
		switch (choice)	{
		case 1: {
			cout << "Wprowadz etykiete: ";
			char l[20];
			cin >> l;
			cout << "Wprowadz klase: ";
			int k;
			cin >> k;
			baseDMA base(l, k);
			base.View();
			break; 
		}
		case 2: {
			cout << "Wprowadz kolor: ";
			char c[20];
			cin >> c;
			cout << "Wprowadz etykiete: ";
			char l[20];
			cin >> l;
			cout << "Wprowadz klase: ";
			int k;
			cin >> k;
			lacksDMA lacks(c, l, k);
			lacks.View();
			break;
		}
		case 3: {
			cout << "Wprowadz styl: ";
			char s[20];
			cin >> s;
			cout << "Wprowadz etykiete: ";
			char l[20];
			cin >> l;
			cout << "Wprowadz klase: ";
			int k;
			cin >> k;
			hasDMA has(s, l, k);
			has.View();
			break;
		}
		case 4: system("PAUSE");  return 0;
		default:
			cout << "Bledna liczba\n";
			break;
		}
		cout << "1. Utworz baseDMA\n2. Utworz lacksDMA\n3. Utworz hasDMA\n4. Zakoncz\n";
	}

	system("PAUSE");
	return 0;
}