#include "stdafx.h"
#include <iostream>

using namespace std;

void Ex3_1() {
	cout << "Entliczek pentliczek" << endl;
}

void Ex3_2() {
	cout << "Czerwony stoliczek" << endl;
}

float Ex5(float  Celcius) {
	return (float)(1.8 * Celcius + 32.0);
}

double Ex6(double lightYear) {
	return lightYear * 63240;
}

void Ex7(int hour, int minutes) {
	cout <<"czas: "<< hour << ":" << minutes << endl;
}

int main()
{
	// Exercise 1
	/*
	cout << "Michał Szeler" << endl;
	*/
	// Exercise 2
	/*
	cout << "Podaj odleglosc w milach: ";
	float miles;
	cin >> miles;
	cout << "Odleglosc w metrach: " << miles * 1852<<endl;
	*/
	// Exercise 3
	/*
	Ex3_1();
	Ex3_1();
	Ex3_2();
	Ex3_2();
	*/
	//Exercise 4
	/*
	cout << "Podaj swoj wiek: ";
	int wiek;
	cin >> wiek;
	cout << "Twoj wiek w miesiacach wynosi " << wiek * 12 << endl;
	*/
	//Exercise 5
	/*
	cout << "Podaj temperature w stopniach Celsjusza: ";
	float Celcius;
	cin >> Celcius;
	cout << Celcius << " stopnie Celsjusza to " << Ex5(Celcius) << " stopnie Fahrenheita." << endl;
	*/
	//Exercise 6
	/*
	cout << "Podaj liczbe lat swietlnych: ";
	double lightYear;
	cin >> lightYear;
	cout<<lightYear<<" lat swietlnych = "<<Ex6(lightYear)<<" jednostek astronomicznych"<<endl;
	*/
	//Exercise 7
	/*
	int hour, minutes;
	cout << "Podaj liczbe godzin: ";
	cin >> hour;
	cout << "Podaj liczbe minut: ";
	cin >> minutes;
	Ex7(hour, minutes);
	*/
	system("PAUSE");
	return 0;
}

