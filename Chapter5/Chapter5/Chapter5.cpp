#include "stdafx.h"
#include "iostream"
#include "array"
#include "string"

using namespace std;

const int ArSize = 101;

int main()
{
	//Ex1
	/*
	int liczba1, liczba2, suma=0;
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba1;
	cout << "Podaj druga liczbe: ";
	cin >> liczba2;
	for (; liczba1 <= liczba2; liczba1++)
		suma += liczba1;
	cout << suma << endl;
	*/
	//Ex2
	/*
	array <long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	*/
	//Ex3
	/*
	int zmienna=0, suma=0;
	cin >> zmienna;
	while (zmienna != 0)
	{
		suma += zmienna;
		cin >> zmienna;
	}
	cout << int(suma)<<endl;
	*/
	//Ex4
	/*
	const int tab_size = 50;
	double dafne[tab_size]{ 100 }, cleo[tab_size]{ 100 };
	for (int i = 1; i < tab_size; i++)
	{
		dafne[i] = dafne[i - 1]+10;
		cleo[i] = cleo[i - 1] * 1.05;
		cout << "Rok: " << i << "\t dafne: " << dafne[i] << "\t cleo: " << cleo[i] << endl;
	}

	*/
	//Ex5
	/*
	const int NoMonths = 12;
	const char* months[NoMonths]{"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	int sale[NoMonths], suma = 0;
	for (int i = 0; i < NoMonths; i++)
	{
		cout << months[i] << ": ";
		cin >> sale[i];
		suma += sale[i];
	}
	cout << "Sprzedaz roczna: " << suma << endl;
	*/
	//Ex6
	/*
	const int NoMonths = 12, years=3;
	const char* months[NoMonths]{ "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	int sale[years][NoMonths], suma[years], sumaCala = 0;
	for (int j = 0; j < years; j++) {
		cout << "Rok " << j + 1 << endl;
		for (int i = 0; i < NoMonths; i++)
		{
			cout << months[i] << ": ";
			cin >> sale[j][i];
			suma[j] += sale[j][i];
		}
		cout << "Sprzedaz roczna: " << suma << endl;
		sumaCala += suma[j];
	}
	cout << "Calkowita suma: " << sumaCala;
	*/
	//Ex7
	/*
	struct car {
		string marka;
		int rok;
	};
	int ilosc;
	cout << "Podaj ilosc katalogowanych aut: ";
	cin >> ilosc;
	cin.get();
	car* katalog = new car[ilosc];
	for (int i = 0; i < ilosc; i++)
	{
		cout << "Samochod #" << i + 1 << ":" << endl;
		cout << "Prosze podac marke: ";
		getline(cin, katalog[i].marka);
		cout << "Rok produkcji: ";
		cin>>katalog[i].rok;
		cin.get();
	}
	for (int i = 0; i < ilosc; i++)
		cout << katalog[i].rok << " " << katalog[i].marka << endl;
	*/
	//Ex8
	/*
	char bufor[20];
	cin >> bufor;
	int licznik = 0;;
	while (strcmp(bufor,"gotowe")) {
		licznik++;
		cin >> bufor;
	}
	cout << "Podano " << licznik << " slow" << endl;
	*/
	//Ex9
	/*
	string word;
	cin >> word;
	int licznik = 0;;
	while (word != "gotowe") {
		licznik++;
		cin >> word;
	}
	cout << "Podano " << licznik << " slow" << endl;
	*/
	//Ex10
	/*
	cout << "Podaj liczbe wierszy: ";
	int liczba;
	cin >> liczba;
	for (int j = 0; j < liczba; j++) {
		for (int i = 0; i < liczba - j-1; i++)
			cout << ".";
		for (int i = liczba - j-1; i < liczba; i++)
			cout << "*";
		cout << endl;
	}
	*/
	system("PAUSE");
    return 0;
}

