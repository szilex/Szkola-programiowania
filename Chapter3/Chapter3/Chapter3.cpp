#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercise 1
	/*
	const double centyNaCale = 1.0 / 2.54;
	const double centyNaStopy = 1.0 / 30.48;
	cout << "Podaj wzrost w centymetrach: ";
	double wzrostCenty;
	cin >> wzrostCenty;
	cout << "Wzrost w calach: " << wzrostCenty * centyNaCale << ", wzrost w stopach: " << wzrostCenty * centyNaStopy<<endl;
	*/
	//Exercise 2
	/*
	cout << "Podaj wzrost w stopach: ";
	int wzrostStopy;
	cin >> wzrostStopy;
	cout << "Podaj wzrost w calach: ";
	int wzrostCale;
	cin >> wzrostCale;
	cout << "Podaj wage w funtach: ";
	double wagaFunty;
	cin >> wagaFunty;
	const int calewStopie = 12;
	const double caleNaMetr = 0.0254, funtyNaKilo=2.2;
	int wzrostCalkowityCale = wzrostStopy * calewStopie + wzrostCale;
	double wzrostMetry = double(wzrostCalkowityCale) * caleNaMetr;
	double wagaKilo = double(wagaFunty) / funtyNaKilo;
	double BMI = wagaKilo / pow(wzrostMetry, 2);
	cout << "BMI wynosi: "<<BMI<<endl;
	*/
	//Exercise 3
	/*
	int stopnie, minuty, sekundy;
	const double minutaNaStopien = 1.0 / 60, sekundaNaStopien = 1.0 / 3600;
	cout << "Podaj dlugoscw stopniach, minutach i sekundach:\nNajpierw podaj stopnie: ";
	cin >> stopnie; 
	cout << "Nastepnie podaj minuty stopnia luku: ";
	cin >> minuty;
	cout << "Na koniec podaj sekundy luku: ";
	cin >> sekundy;
	double wynik = stopnie + minuty * minutaNaStopien + sekundy * sekundaNaStopien;
	cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = " << wynik <<" stopni"<< endl;
	*/
	//Exercise 4
	/*
	const int godzinywDniu = 24, minutywGodzinie = 60, sekundywMinucie = 60;
	long liczbaSekund;
	cout << "Podaj liczbe sekund: ";
	cin >> liczbaSekund;
	int dni, godziny, minuty, sekundy, temp;
	dni = liczbaSekund / (godzinywDniu*minutywGodzinie*sekundywMinucie);
	temp = liczbaSekund % (godzinywDniu*minutywGodzinie*sekundywMinucie);
	cout << temp << endl;;
	godziny = temp / (minutywGodzinie*sekundywMinucie);
	temp %= (minutywGodzinie*sekundywMinucie);
	cout << temp << endl;
	minuty = temp / sekundywMinucie;
	sekundy = temp % sekundywMinucie;
	printf("%d sekund= %d dni, %d godzin, %d minut, %d sekund\n", liczbaSekund, dni, godziny, minuty, sekundy);
	*/
	//Exercise 5
	/*
	long long worldPopulation, polandPopulation;
	cout << "Podaj liczbe populacji swiata: ";
	cin >> worldPopulation;
	cout << "Podaj liczbe populacji Polski: ";
	cin >> polandPopulation;
	double percentOfPopulation = double(polandPopulation) / worldPopulation*100;
	cout << "Populacja Polski stanowi " << percentOfPopulation << "% populacji swiata\n";
	*/
	//Exercise 6
	/*
	double milePrzejechane, milePozostale, paliwoZuzyte, paliwoPozostale;
	cout << "Podaj ilosc przejechanych mil: ";
	cin >> milePrzejechane;
	cout << "Podaj ilosc pozostalych mil: ";
	cin >> milePozostale;
	cout << "Podaj ilosc zuzytego paliwa: ";
	cin >> paliwoZuzyte;
	cout << "Podaj ilosc pozostałego paliwa: ";
	cin >> paliwoPozostale;
	cout << "Mile na galon: " << double(milePrzejechane) / paliwoZuzyte<<endl;
	*/
	//Exercise 7
	/*
	double spalanieLitry;
	cout << "Podaj spalanie w litrach na 100 kilometrow: ";
	cin >> spalanieLitry;
	double spalanieGalony = (1.0 / spalanieLitry) * (62.14 * 3.875);
	cout << "Spalanie w milach na galon: "<<spalanieGalony<<endl;
	*/
	system("PAUSE");
    return 0;
}

