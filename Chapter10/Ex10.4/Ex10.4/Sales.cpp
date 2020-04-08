#include <iostream>
#include "sales.h"

namespace SALES {
	Sales::Sales() {
		using std::cout;
		using std::cin;
		cout << "Podaj informacje dla 4 kwartalow:\n";
		cin >> sales[0];
		double min, max, average;
		min = max = average = sales[0];
		for (int i = 1; i < QUARTERS; i++) {
			cin >> sales[i];
			if (min > sales[i]) min = sales[i];
			if (max < sales[i]) max = sales[i];
			average += sales[i];
		}
		this->min = min;
		this->max = max;
		this->average = average / QUARTERS;
	}
	Sales::Sales(double ar[], int n) {
		double mini = ar[0], maxi = ar[0], averagei = ar[0];
		for (int i = 1; i < n; i++) {
			sales[i] = 0.0;
			if (mini > ar[i]) mini = ar[i];
			if (maxi < ar[i]) maxi = ar[i];
			averagei += ar[i];
		}
		sales[0] = this->min = mini;
		this->max = maxi;
		this->average = averagei / n;
	}
	void Sales::ShowSales() const {
		using std::cout;
		using std::endl;
		cout << "Wyniki sprzedazy:\n";
		for (int i = 0; i < QUARTERS; i++)
			cout << sales[i] << endl;
		cout << "Minimum: " << min << endl;
		cout << "Maksimum: " << max << endl;
		cout << "Srednia: " << average << endl;
	}
}