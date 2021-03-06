#include "stdafx.h"
#include "iostream"
#include "cctype"
#include "string"
#include "fstream"

using namespace std;

const int ten = 10, strsize=20;

int main()
{
	//Ex1
	/*
	char znak;
	cin.get(znak);
	while (znak != '@') {
		if (isalpha(znak)) {
			if (islower(znak))
				znak=toupper(znak);
			else znak=tolower(znak);
			}
		if (!isdigit(znak))
			cout << znak;
		cin.get(znak);
		}
	*/
	//Ex2
	/*
	double tab[ten], buffer, sum=0.0;
	int i = 0;
	while (cin >> buffer&&i<ten) {
		tab[i] = buffer;
		sum += buffer;
		++i;
		}
	if (i != 0) {
		double avg = sum / i;
		cout << "Srednia: " << avg << endl;
		for (int j = 0; j < i; j++)
			if (tab[j] > avg)
				cout << tab[j] << endl;
	}
	*/
	//Ex3
	/*
	char buff;
	cout << "r) roslinozerca\tp) pianista\nd) drzewo\tg)gra\n";
	do {
		cout << "Prosze podac litere r, p, d lub g: ";
		cin >> buff;
	} while (buff != 'r'&&buff != 'p'&&buff != 'd'&&buff != 'g');
	switch (buff) {
	case 'r': cout << "miesozerca\n"; break;
	case 'p': cout << "skrzypek\n"; break;
	case 'd': cout << "klon jest drzewem"; break;
	case 'g': cout << "let's play a game..."; break;
	}
	*/
	//Ex4
	/*
	struct zpdw {
		char imie[strsize];
		char stanowisko[strsize];
		char pseudozpdw[strsize];
		int preferncje;
	};

	zpdw workers[3] = { 
		"Wimp Macho","Programista","Kiler",2, 
		"Raki Rhodes", "Sprzatacz", "Pomywacz 3000",0, 
		"Hoppy Hipman","Admin","Boruta",1 
	};

	char znak;
	cout << "Zakon Programistow Dobrej Woli\n";
	do {
		cout << "a. lista wg imion\tb. lista wg stanowisk\nc. lista wg pseudo\td. lista wg preferencji\nq. koniec\nWybierz jedna z opcji:";
		cin >> znak;
		switch (znak) {
		case 'a': 
			for (int i = 0; i < 3; i++) {
				cout << workers[i].imie << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < 3; i++) {
				cout << workers[i].stanowisko << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < 3; i++) {
				cout << workers[i].pseudozpdw << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < 3; i++) {
				if (workers[i].preferncje == 0)
					cout << workers[i].imie << endl;
				else if (workers[i].preferncje == 1)
					cout << workers[i].stanowisko << endl;
				else cout << workers[i].pseudozpdw << endl;
			}
			break;
		}

	} while (znak != 'q');
	*/
	//Ex5
	/*
	int zysk;
	cout << "Podaj zarobki: ";
	while (cin >> zysk) {
		if (zysk > 35000)
			cout << "Podatek: " << 10000 * 0.1 + 20000 * 0.15 + (zysk - 35000)*0.2 << endl;
		else if (zysk>15000)
			cout << "Podatek: " << 10000 * 0.1 + (zysk - 15000)*0.15 << endl;
		else if (zysk>5000)
			cout << "Podatek: " << (zysk - 5000)*0.1 << endl;
		else cout << "Brak podatku" << endl;
		cout<< "Podaj zarobki: ";
	}
	*/
	//Ex6
	/*
	int amount;
	cout << "Podaj liczbe wplacajacych: ";
	cin >> amount;

	struct donator {
		string name;
		double account;
	};

	donator* donators = new donator[3];
	for (int i = 0; i < amount; i++) {
		cout << "Podaj nazwisko donatora: ";
		cin>>donators[i].name;
		cout << "Podaj wplacana kwote: ";
		cin >> donators[i].account;
	}

	int counter = 0;
	cout << "Nasi Wspaniali Sponsorzy\n";
	for (int i = 0; i < amount; i++) {
		if (donators[i].account >= 10000)
			cout << donators[i].name << ": " << donators[i].account << endl;
	}
	cout << "Nasi Biedni Sponsorzy\n";
	for (int i = 0; i < amount; i++) {
		if (donators[i].account < 10000)
			cout << donators[i].name << ": " << donators[i].account << endl;
	}
	*/
	//Ex7
	
	//Ex8
	/*
	ifstream plik;
	plik.open("dane.txt");
	if (plik.is_open()){
		char buff;
		int counter=0;
		while (plik.get(buff))
			counter++;
		cout << "Liczba znakow: " << counter<<endl;
	}
	plik.close();
	*/
	//Ex9

	struct donator {
		string name;
		double account;
	};

	ifstream plik;
	plik.open("dane.txt");
	if (plik.is_open()) {
		int amount;
		plik >> amount;
		plik.get();
		cout << amount<<endl;
		donator* donators = new donator[amount];
		for (int i = 0; i < amount; i++) {
			getline(plik, donators[i].name);
			cout << donators[i].name<<endl;
			plik >> donators[i].account;
			plik.get();
			cout << donators[i].account<<endl;
		}

		int counter = 0;
		cout << "Nasi Wspaniali Sponsorzy\n";
		for (int i = 0; i < amount; i++) {
			if (donators[i].account >= 10000)
				cout << donators[i].name << ": " << donators[i].account << endl;
		}
		cout << "Nasi Biedni Sponsorzy\n";
		for (int i = 0; i < amount; i++) {
			if (donators[i].account < 10000)
				cout << donators[i].name << ": " << donators[i].account << endl;
		}

	}
	plik.close();

	system("PAUSE");
    return  0;
}

