#include "stdafx.h"
#include <iostream>
#include "golf.h"

using namespace std;


int main()
{
	int i = 0;
	golf golfiarze[3];
	while (i<3) {
		cout << "Co chcesz zrobic?\n1. Wpisac gracza automatycznie\n2.Wpisac gracza recznie\n3.Ustawic handicap\n4.Wyswietlic zawodnika\n";
		int wybor;
		cin >> wybor;
		cin.get();
		switch (wybor) {
		case 1: {
			setgolf(golfiarze[i], "Robert Lewandowski", 5);
			i++;
			break;
		}
		case 2: {
			if (!setgolf(golfiarze[i]))
				return 0;
			i++;
			break;
		}
		case 3: {
			if (i > 0) {
				i--;
				cout << "Wartosc handicapu: ";;
				int value;
				cin >> value;
				handicap(golfiarze[i], value);
				i++;
			}
			break;
		}
		case 4: {
			if (i > 0) {
				i--;
				showgolf(golfiarze[i]);
				i++;
			}
			break;
		}
		}
	}

	system("PAUSE");
    return 0;
}

