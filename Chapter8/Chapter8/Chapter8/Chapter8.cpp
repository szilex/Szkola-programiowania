#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Ex1
/*
void wypisz(char * napis, int liczba = 0);
*/
//Ex2
/*
struct Batonik {
	char name[30];
	float weight;
	int calories;
};

void wypelnij(Batonik & baton, const char * nazwa="Millenium Munch", const float waga=2.85, const int kalorie=350);
void wypisz(Batonik & baton);
*/
//Ex3
/*
bool wypisz(string & napis);
*/
//Ex4
/*
struct stringy {
	char* str;
	int ct;
};

void set(stringy & par1, char * par2);
void show(const stringy obj, int amount = 1);
void show(const char * str, int amount = 1);
*/
//Ex5
/*
template <typename T>
T max5(T tab[]) {
	T maksimum = tab[0];
	for (int i = 1; i < 5; i++)
		if (tab[i] > maksimum)
			maksimum = tab[i];
	return maksimum;
}
*/
//Ex6
/*
template <typename T>
T maxn(T tab[], int n) {
	T maksimum = tab[0];
	for (int i = 1; i < n; i++)
		if (tab[i] > maksimum)
			maksimum = tab[i];
	return maksimum;
}

template <> const char* maxn(const char* tab[], int n){
	int length = 0;
	const char* max = tab[0];
	while (tab[0][length])
		length++;
	for (int i = 1; i < n; i++) {
		int leng = 0;
		while (tab[i][leng])
			leng++;
		if (leng > length)
			max = tab[i];
	}
	return max;
}
*/
//Ex7

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

struct debts {
	char name[50];
	double amount;
};






int main()
{
	//Ex1
	/*
	char napis[20] = "blabllab";
	wypisz(napis, 4);
	*/
	//Ex2
	/*
	Batonik baton = {"ads",23,1};
	wypelnij(baton);
	wypisz(baton);
	*/
	//Ex3
	/*
	bool result = 1;
	for (int i = 0; result; i++)
	{
		cout << "Podaj lancuch (q, aby skonczyc): ";
		string napis;
		getline(cin,napis);
		result=wypisz(napis);
	}
	*/
	//Ex4
	/*
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 2);
	show("Gotowe!");
	free(beany.str);
	*/
	//Ex5
	/*
	int tab1[5] = { 1,4,6,123,21 };
	double tab2[5] = { 4.2,234.1,52341.2,12.4,1231 };
	cout << "Maksimum w intach: " << max5(tab1) << endl << "maksimum w doublach: " << max5(tab2) << endl;
	*/
	//Ex6
	/*
	int tab1[5] = { 1,4,6,123,21 };
	double tab2[4] = { 4.2,234.1,52341.2,12.4};
	const char* tab3[5] = { "afdas", "asdasd", "gwe","asdawqewqr","as" };
	cout<<maxn(tab1, 5)<<endl;
	cout<<maxn(tab2, 4)<<endl;
	cout<<maxn(tab3, 5)<<endl;
	*/
	//Ex7
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Suma przedmiotow Pana E.: "<<SumArray(things, 3)<<endl;
	cout << "Suma dlugow Pana E.:" << SumArray(pd, 3) << endl;

	system("PAUSE");
    return 0;
}

//Ex1
/*
void wypisz(char * napis, int liczba) {
	if (!liczba) {
		while (*napis) {
			cout << *napis;
			napis++;
		}
	}
	else {
		for (int i = 0; i < liczba; i++) {
			while (*napis) {
				cout << *napis;
				napis++;
			}
		}
	}
}
*/
//Ex2
/*/
void wypelnij(Batonik & baton, const char * nazwa_wsk, const float waga, const int kalorie) {
	for (int i=0;*nazwa_wsk;i++){
		baton.name[i] = *nazwa_wsk;
		nazwa_wsk++;
	}
	baton.weight = waga;
	baton.calories = kalorie;
}
void wypisz(Batonik & baton) {
	for (int i = 0; baton.name[i]; i++)
		cout << baton.name[i];
	cout << endl << baton.weight << endl << baton.calories << endl;
}
*/
//Ex3
/*
bool wypisz(string & napis) {
	if (napis == "q")
		return 0;
	int leng = napis.length();
	for (int i = 0; i < leng; i++) {
		napis[i]=toupper(napis[i]);
		cout << napis[i];
	}
	cout << endl;
	return 1;
}
*/
//Ex4
/*
void set(stringy & par1, char * par2) {
	int length=0;
	while (par2[length])
		length++;
	par1.str = new char[length+1];
	par1.ct = length;
	for (int i = 0; i < length; i++) {
		par1.str[i] = par2[i];
	}
	par1.str[length] = '\0';

}
void show(const stringy obj, int amount) {
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j <= obj.ct; j++)
			cout << obj.str[j];
		cout << endl;
	}
}
void show(const char * str, int amount) {
	int length = 0;
	while (str[length])
		length++;
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j <= length; j++)
			cout << str[j];
		cout << endl;
	}
}
*/
//Ex7
template <typename T>
T SumArray(T arr[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

template <typename T>
T SumArray(T* arr[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}

