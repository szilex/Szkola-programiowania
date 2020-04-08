#include "stdafx.h"
#include "iostream"
#include "string"
#include "array"

using namespace std;


int main()
{
	//Ex1
	/*
	char nazwisko[30];
	char imie[15];
	int ocena, wiek;
	cout << "Jak masz na imie? ";
	cin.get(imie, 15).get();
	cout << "Jak sie nazywasz? ";
	cin.get(nazwisko, 30).get();
	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;
	cout << " Ile masz lat? ";
	cin >> wiek;
	cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: " << ocena - 1<<endl;
	cout << "Wiek: " << wiek << endl;
	*/
	//Ex2
	/*
	string nazwisko;
	string imie;
	int ocena, wiek;
	cout << "Jak masz na imie? ";
	getline(cin, imie);
	cout << "Jak sie nazywasz? ";
	getline(cin, nazwisko);
	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;
	cout << "Ile masz lat? ";
	cin >> wiek;
	cout << "Nazwisko: " << nazwisko + ", " + imie << endl;
	cout << "Ocena: " << ocena - 1 <<endl;
	cout << "Wiek: " << wiek << endl;
	*/
	//Ex3
	/*
	char imie[15], nazwisko[15];
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	char nazwa[30];
	strcpy(nazwa, nazwisko);
	strcat(nazwa, ", ");
	strcat(nazwa, imie);
	cout << "Oto informacje zestawione w jeden napis: "<<nazwa<<endl;
	*/
	//Ex4
	/*
	string imie, nazwisko;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	string nazwa;
	nazwa = nazwisko + ", " + imie;
	cout << "Oto informacje zestawione w jeden napis: " << nazwa << endl;
	*/
	//Ex5
	/*
	struct batonik {
		string marka;
		double waga;
		int kalorie;
	};
	batonik snack{ "Mocha Munch", 2.3, 350 };
	cout << "Nazwa: " << snack.marka << ", waga: " << snack.waga << ", kalorie: " << snack.kalorie << endl;
	*/
	//Ex6
	/*
	struct batonik {
		string marka;
		double waga;
		int kalorie;
	};

	batonik snacks[3] = {
		{ "Mocha Munch", 2.3, 350 },
		{ "Mars", 3.4, 450 },
		{ "Snickers", 4.1, 600 }
	};
	for (int i = 0; i < 3; i++)
		cout << "Nazwa: " << snacks[i].marka << ", waga: " << snacks[i].waga << ", kalorie: " << snacks[i].kalorie << endl;
	*/
	//Ex7
	/*
	struct pizza {
		string nazwa;
		double srednica;
		double waga;
	};

	pizza klient;
	cout << "Podaj nazwe, srednice i wage pizzy: " << endl;
	getline(cin, klient.nazwa);
	cin >> klient.srednica;
	cin >> klient.waga;
	cout << "Nazwa: " << klient.nazwa << ", srednica: " << klient.srednica << ", waga: " << klient.waga << endl;
	*/
	//Ex8
	/*
	struct pizza {
	string nazwa;
	double srednica;
	double waga;
	};

	pizza *klient=new pizza;
	cout << "Podaj nazwe, srednice i wage pizzy: " << endl;
	getline(cin, klient->nazwa);
	cin >> klient->srednica;
	cin >> klient->waga;
	cout << "Nazwa: " << klient->nazwa << ", srednica: " << klient->srednica << ", waga: " << klient->waga << endl;
	delete klient;
	*/
	//Ex9
	/*
	struct batonik {
	string marka;
	double waga;
	int kalorie;
	};

	batonik* snacks = new batonik[3];
	snacks[0] = { "Mocha Munch", 2.3, 350 };
	snacks[1] = { "Mars", 3.4, 450 };
	snacks[2] = { "Snickers", 4.1, 600 };
	
	for (int i = 0; i < 3; i++)
	cout << "Nazwa: " << snacks[i].marka << ", waga: " << snacks[i].waga << ", kalorie: " << snacks[i].kalorie << endl;
	*/
	//Ex10
	/*
	array <double, 3> wyniki;
	cout << "Podaj 3 wyniki biegu:" << endl;
	for (int i=0;i<3;i++)
		cin >> wyniki[i];
	for (int i = 0; i<3; i++)
		cout<<"Wynik "<<i+1<<": "<< wyniki[i]<<endl;
	cout << "Srednia= " << (wyniki[0] + wyniki[1] + wyniki[2]) / 3 << endl;
	*/
	system("PAUSE");
    return 0;
}

