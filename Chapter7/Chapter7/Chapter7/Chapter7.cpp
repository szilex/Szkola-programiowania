#include "stdafx.h"
#include "iostream"

using namespace std;

/*
//Ex1
double sr_harm(double x, double y);
//Ex2
const int dycha = 10;
int wprowadz_wyniki(int tab[]);
void wyswietl_wyniki(int tab[], int ilosc);
double srednia_wynikow(int tab[], int ilosc);
//Ex3
struct pudlo {
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};
void przez_wartosc(pudlo pud);
void przez_wskaznik(pudlo* pud);
//Ex4
long double prawdopodobienstwo(unsigned int numbers, unsigned int picks, unsigned int mega);
//Ex5
long silnia(long warotsc);
//Ex6
int fill_array(double tab[], int n);
void show_array(double tab[], int n);
void reverse_array(double tab[], int n);
//Ex7
const int Max = 5;
double* fill_array_7(double*  poczatek, double * koniec);
void show_array_7(const double* poczatek, const double* koniec);
void revalue(double r, double * poczatek, double * koniec);
//Ex8
const int Seasons = 4;
const char* Snames[4] = { "Wiosna","Lato", "Jesien","Zima" };
void fill_8(double tab[]);
void show_8(double tab[]);
//Ex9
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
//Ex10
double add(double x, double y);
double add2(double x, double y);
double add3(double x, double y);
double calculate(double x, double y, double (*funk)(double,double));
*/

int main()
{
	//Ex1
	/*
	double x, y;
	while (cin >> x >> y) {
		if (x == 0 || y == 0)
			break;
		cout << "Srednia harmoniczna: " << sr_harm(x, y) << endl;
		
	}
	*/
	//Ex2
	/*
	int wyniki[dycha] = { 0 }, ilosc = wprowadz_wyniki(wyniki);
	wyswietl_wyniki(wyniki, ilosc);
	cout << "Srednia wynikow: " << srednia_wynikow(wyniki, ilosc) << endl;
	*/
	//Ex3
	/*
	pudlo pud {"Katarynka",50.2,43.1,78.5,972.0 };
	przez_wartosc(pud);
	przez_wskaznik(&pud);
	*/
	//Ex4
	/*
	double total, choices, mega_total;
	cout << "Podaj najwieksza liczbe, jaka mozna wybrac, liczbe skreslen oraz zakres mega loterii: ";
	while ((cin >> total >> choices >> mega_total) && choices <= total) {
		cout << "Szanse wygranej to jeden do " << prawdopodobienstwo(total, choices, mega_total) << endl;
		cout << "Nastepny zestaw liczb: ";
	}
	cout<<"Koniec/n";
	*/
	//Ex5
	/*
	cout << "Silnia z ";
	long liczba;
	cin >> liczba;
	cout << "to " << silnia(liczba)<<endl;
	*/
	//Ex6
	/*
	cout << "Podaj rozmiar tablicy: ";
	int size;
	cin >> size;
	double* tab = new double[size];
	int zakres=fill_array(tab, size);
	show_array(tab, zakres);
	reverse_array(tab, zakres);
	show_array(tab, zakres);
	delete[]tab;
	*/
	//Ex7
	/*
	double properties[Max];
	double* zakres = &properties[Max];
	zakres++;
	double* koniec = fill_array_7(properties, zakres);
	show_array_7(properties, koniec);
	if (koniec != properties) {
		cout << "Podaj czynnik zmiany wartosci: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Niepoprawna wartosc; podaj liczbe: ";
		}
		revalue(factor, properties, koniec);
		show_array_7(properties, koniec);
	}
	cout << "Gotowe.\n";
	*/
	//Ex8
	/*
	double expenses[Seasons];
	fill_8(expenses);
	show_8(expenses);
	*/
	//Ex9
	/*
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	//Ex10
	double(*tab[3])(double, double) = { add,add2,add3 };
	for (int i = 0; i < 3; i++) {
		cout << "Podaj dwie liczby:";
		double x, y;
		cin >> x >> y;
		cout << "Wynik operacji to: " << tab[i](x, y)<<endl;
	}
	*/


	system("PAUSE");
    return 0;
}

/*
//Ex1
double sr_harm(double x, double y) {
	return 2.0*x*y / (x + y);
}
//Ex2
int wprowadz_wyniki(int tab[]) {
	int i, wartosc;
	for (i = 0; i < dycha; i++) {
		cout << "Podaj wartosc " << i + 1 << ": ";
		cin >> wartosc;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane :(" << endl;
			break;
		}
		if (wartosc < 0)
			break;
		tab[i] = wartosc;
	}
	return i;
}
void wyswietl_wyniki(int tab[], int ilosc) {
	cout << "Wprowadzone liczby: ";
	for (int i = 0; i < ilosc; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}
double srednia_wynikow(int tab[], int ilosc) {
	double suma = 0.0;
	for (int i = 0; i < ilosc; i++) {
		suma += tab[i];
	}
	return suma;
}
//Ex3
void przez_wartosc(pudlo pud) {
	cout << "Producent:" << pud.producent << "\nWysokosc: " << pud.wysokosc << "\nSzerokosc: " << pud.szerokosc << "\nDlugosc: " << pud.szerokosc << "\nObjetosc: " << pud.objetosc << endl<<endl;
}
void przez_wskaznik(pudlo* pud) {
	cout << "Producent:" << pud->producent << "\nWysokosc: " << pud->wysokosc << "\nSzerokosc: " << pud->szerokosc << "\nDlugosc: " << pud->szerokosc << "\nObjetosc: " << pud->objetosc << endl<<endl;
}
//Ex4
long double prawdopodobienstwo(unsigned int numbers, unsigned int picks, unsigned int mega) {
	long double result = 1.0, n;
	unsigned int p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result *= n / p;
	return result * mega;
}
//Ex5
long silnia(long wartosc) {
	if (wartosc == 1 || wartosc == 0)
		return 1;
	else return wartosc * silnia(wartosc - 1);
}
//Ex6
int fill_array(double tab[], int n){
	int i, wartosc;
	for (i = 0; i < n; i++) {
		cout << "Podaj wartosc " << i + 1 << ": ";
		cin >> wartosc;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane :(" << endl;
			break;
		}
		if (wartosc < 0)
			break;
		tab[i] = wartosc;
	}
	return i;
}
void show_array(double tab[], int n) {
	cout << "Zawartosc tablicy: ";
	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";
	cout << endl;
}
void reverse_array(double tab[], int n) {
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(tab[i], tab[j]);
	}
}
//Ex7
double* fill_array_7(double*  poczatek, double * koniec) {
	double temp;
	double* wsk = poczatek;
	int i;
	for (i=0; wsk!=koniec; i++, wsk++) {
		cout << "Podaj wartosc nr " << i + 1 << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		*wsk = temp;
	}
	return wsk;
}
void show_array_7(const double* poczatek, const double* koniec) {
	for (int i = 0; poczatek + i != koniec; i++)
		cout << "Nieruchomosc nr " << i + 1 << ": " << *(poczatek + i)<< endl;
}
void revalue(double r, double * poczatek, double * koniec) {
	for (int i = 0; poczatek + i != koniec; i++)
		*(poczatek + i) *= r;
}
//Ex8
void fill_8(double tab[]){
	for (int i = 0; i < Seasons; i++) {
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> tab[i];
	}
}
void show_8(double tab[]) {
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": "<<tab[i]<<"zl"<<endl;
		total+= tab[i];
	}
}

//Ex9
int getinfo(student pa[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "Podaj nazwisko " << i + 1 << " studenta:\n";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == '\0')
			break;
		cout << "Jego hobby:\n";
		cin.getline(pa[i].hobby,SLEN);
		cout << "Jego poziom:\n";
		cin >> pa[i].ooplevel;
		cin.get();
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledny poziom, przerwano wprowadzanie\n";
			break;
		}
	}
	return i;
}
void display1(student st) {
	cout << "Nazwisko: " << st.fullname << ", hobby: " << st.hobby << ", poziom: " << st.ooplevel << endl;
}
void display2(const student * ps) {
	cout << "Nazwisko: " << ps->fullname << ", hobby: " << ps->hobby << ", poziom: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n) {
	for (int i=0;i<n;i++)
		cout << "Nazwisko: " << pa[i].fullname << ", hobby: " << pa[i].hobby << ", poziom: " << pa[i].ooplevel << endl;
}
//Ex10
double add(double x, double y) {
	return x + y;
}
double add2(double x, double y) {
	return x * y;
}
double add3(double x, double y) {
	return x / y;
}
double calculate(double x, double y, double(*funk)(double, double)) {
	return funk(x, y);
}
*/