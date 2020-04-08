#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));

	cout << "Studium przypadku: 2 bankomaty Banku Stu Kas\nPodaj maksymalna dlugosc kolejki: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	Queue line2(qs);
	cout << "Podaj symulowany czas (w godzinach): ";
	int hours;
	cin >> hours;
	long cyclelimit = hours * MIN_PER_HR;

	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour;
	cin >> perhour;
	double min_per_cust = MIN_PER_HR / perhour;
	
	Item temp;
	long turnaways = 0, customers = 0, served = 0, sum_line = 0, line_wait = 0, line_wait2 = 0;
	int wait_time = 0, wait_time2=0;

	for (int cycle = 0; cycle < cyclelimit; cycle++) {
		if (newcustomer(min_per_cust)) {
			if (line.isfull()&&line2.isfull())
				turnaways++;
			else {
				customers++;
				temp.set(cycle);
				if (line.queuecount() < line2.queuecount()) {
					line.enqueue(temp);
				}
				else {
					line2.enqueue(temp); 
				}
			}
		}
		if (wait_time <= 0 && !line.isempty()) {
			
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time2 <= 0 && !line2.isempty()) {
			line2.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait2 += cycle - temp.when();
			served++;
		}

		if (wait_time > 0)
			wait_time--;

		if (wait_time2 > 0)
			wait_time2--;

		sum_line += line.queuecount()+line2.queuecount();
	}
	if (customers > 0) {
		cout << " liczba klientow przyjetych: " << customers << endl;
		cout << "liczba klientow obsluzonych: " << served << endl;
		cout << " liczba klientow odeslanych: " << turnaways << endl;
		cout << "  Srednia dlugosc kolejki 1: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		//cout << "  Srednia dlugosc kolejki 2: ";
		//cout << (double)sum_line2 / cyclelimit << endl;
		cout << "    Sredni czas oczekiwania: " << (double)(line_wait+line_wait2)/served << " minut\n";
	}
	else cout << "Brak klientow!\n";
	cout << "Gotowe!\n";


	system("PAUSE");
	return 0;
}

bool newcustomer(double x) {
	return (std::rand()*x / RAND_MAX < 1);
}