#include <iostream>
#include "Sales.h"

using namespace std;

int main() {
	double ar[5]{ 4.2,452.1,145,1.2,876.8 };
	int n = 5;
	using SALES::Sales;
	Sales tab[2]{ {ar,n} };
	for (int i = 0; i < 2; i++)
		tab[i].ShowSales();
	system("PAUSE");
	return 0;
}