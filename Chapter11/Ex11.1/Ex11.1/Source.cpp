#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps(0);
	double target, dstep;

	int amount;
	cout << "Podaj ilosc prob (k, zeby zakonczyc): ";
	if (!(cin >> amount))
		return 0;
	int * tab = new int[amount];
	tab[0] = 0;
	cout << "Podaj dystans do przejscia:";
	if (!(cin >> target))
		return 0;
	cout << "Podaj dlugosc kroku: ";
	if (!(cin >> dstep))
		return 0;
	int i = 0, max=0,min=0,average=0;
	while (i < amount) {
		while (result.magval() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		tab[i++] = steps;
		if (steps > max) max = steps;
		else if (steps < min||min==0) min = steps;
		average += steps;
		cout << "Po " << steps << " krokach delikwent osiagnal polozenie:\n" << result << endl;
		//result.polar_mode();
		//cout << " czyli\n" << result << endl << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	cout << "Po " << amount << " probach srednia wynosi: " << average / i << ", najwiecej: " << max << ", najmniej: " << min << endl;
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	system("PAUSE");
	return 0;
}