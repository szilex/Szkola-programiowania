#include <iostream>
#include "Stack.h"

int main() {
	using namespace std;
	Stack st=Stack();
	char ch;
	customer temp;
	double total=0.0;
	cout << "Nacisnij D, aby wprowadzic klienta, P, aby usunac klienta, lub K, aby zakonczyc: ";
	while (cin >> ch && toupper(ch) != 'K') {
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		switch (toupper(ch)) {
		case 'D': 
			cout << "Podaj nazwisko klienta: ";
			cin >> temp.fullname;
			cout << "Podaj wielkosc platnosci: ";
			cin >> temp.payment;
			if (st.is_full())
				cout << "Stos pelen!\n";
			else st.push(temp);
			break;
		case 'P': 
			if (st.is_empty())
				cout << "Stos pusty!\n";
			else {
				st.pop(temp);
				cout << "Klient " << temp.fullname << " z platnoscia " << temp.payment << " zostal zdjety\n";
				total += temp.payment;
				cout << "Calkowita ilosc platnosci: " << total << endl;
			}
			break;
		}
		cout<< "Nacisnij D, aby wprowadzic klienta, P, aby usunac klienta, lub K, aby zakonczyc: ";
	}
	cout << "Koniec!";
	system("PAUSE");
	return 0;
}