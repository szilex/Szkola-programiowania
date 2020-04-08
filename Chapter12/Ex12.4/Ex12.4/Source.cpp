#include <iostream>
#include <cctype>
#include "Stack.h"

int main() {
	using namespace std;
	Stack st(3);
	char ch;
	unsigned long po;
	cout << "Nacisnij D, aby wprowadzic deklaracje,\nP, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
	while (cin >> ch && toupper(ch) != 'K') {
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		switch (ch) {
		case 'D':
		case 'd':	cout << "Podaj numer nowej delaracji: ";
					cin >> po;
					if (st.isfull())
						cout << "Stos pelen!\n";
					else st.push(po);
					break;
		case 'P':
		case 'p':	if (st.isempty())
						cout << "Stos pusty!\n";
					else {
						st.pop(po);
						cout << "Deklaracja nr" << po << " zdjeta\n";
					}
					break;
		}
		cout << "Nacisnij D, aby wprowadzic deklaracje,\nP, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
	}
	cout << "Fajrant!\n";
	system("PAUSE");
	return 0;
}