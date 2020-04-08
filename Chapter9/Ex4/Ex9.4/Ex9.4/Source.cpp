#include <iostream>
#include "sales.h"

using namespace std;

int main() {
	const double ar[5]{ 4.2,452.1,145,1.2,124 };
	int n = 5;
	using SALES::Sales;
	Sales tab[2];
	setSales(tab[0], ar, n);
	setSales(tab[1]);
	for (int i = 0; i < 2; i++)
		showSales(tab[i]);
	system("PAUSE");
	return 0;
}