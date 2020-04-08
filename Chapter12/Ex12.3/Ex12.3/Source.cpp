#include <iostream>
#include "stock.h"

using namespace std;
const int STKS = 4;

int main() {
	Stock stocks[STKS] = {
		Stock("NanoSmart",12,20.0),
		Stock("BurakPol",200,2.0),
		Stock("GruzPol",130,3.25),
		Stock("FutroPol",60,6.5)
	};
	cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)
		cout << stocks[st];
	const Stock* top = &stocks[0];
	for (st = 0; st < STKS; st++)
		top = &top->topval(stocks[st]);
	cout << "Najbardziej wartosciowy  pakiet:\n" << *top;

	system("PAUSE");
	return 0;
}