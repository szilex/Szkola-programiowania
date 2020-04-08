#include <iostream>
#include "stock.h"

using namespace std;

Stock::Stock() {
	company = new char[10];
	strcpy(company, "bez nazwy");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const Stock& st) {
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
}
Stock::Stock(const char* name, int n , double pr ) {
	company = new char[strlen(name) + 1];
	strcpy(company, name);
	if (n < 0) {
		cout << "Liczba udzialow nie moze byc ujemna; ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else shares = n;
	share_val = pr;
	set_tot();
}
Stock::~Stock() {
	delete[] company;
}
void Stock::buy(long num, double price) {
	if (num < 0) {
		cout << "Liczba nabywanych udzialow nie moze byc ujemna. Transakcja przerwana.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	if (num > 0)
		cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. Transakcja przerwana.\n";
	else if (num > shares)
		cout << "Nie mozesz sprzedac wiecej udzialow, niz posiadasz! Transakcja przerwana.\n";
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
Stock& Stock::operator=(const Stock& st) {
	if (this == &st)
		return *this;
	delete[] company;
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
	return *this;
}
ostream& operator<<(std::ostream& os, const Stock& st) {
	cout << "Spolka: " << st.company << " Liczba udzialow: " << st.shares << "\nCena udzialu: " << st.share_val << " zl\n";
	return os;
}
const Stock& Stock::topval(const Stock& s) const {
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}