#include <iostream>
#include "sales.h"

using namespace std;


namespace SALES {
	void setSales(Sales & s, const double ar[], int n) {
		double min=ar[0], max=ar[0], average=ar[0];
			for (int i = 1; i < n; i++) {
				s.sales[i] = 0.0;
				if (min > ar[i]) min = ar[i];
				if (max < ar[i]) max = ar[i];
				average += ar[i];
			}
			s.sales[0] = s.min= min;
			s.max = max;
			s.average = average / n;
	}

	void setSales(Sales & s){
		cout << "Podaj informacje dla 4 kwartalow:\n";
		cin >> s.sales[0];
		double min, max, average;
		min = max = average = s.sales[0];
		for (int i = 1; i < QUARTERS; i++) {
			cin >> s.sales[i];
			if (min > s.sales[i]) min = s.sales[i];
			if (max < s.sales[i]) max = s.sales[i];
			average += s.sales[i];
		}
		s.min = min;
		s.max = max;
		s.average = average / QUARTERS;

	}

	void showSales(const Sales & s) {
		cout << "Wyniki sprzeda¿y:\n";
		for (int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << endl;
		cout << "Minimum: " << s.min << endl;
		cout << "Maksimum: " << s.max << endl;
		cout << "Srednia: " << s.average << endl;
	}
}