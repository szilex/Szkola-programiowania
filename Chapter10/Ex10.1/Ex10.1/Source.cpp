#include <iostream>
#include "account.h"

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	
	char name[20], number[20];
	double balance;
	cout << "Wprowadz nazwisko, numer konta i ilosc srodkow:\n";
	cin >> name >> number >> balance;
	Account konto("Kowalski", "1243562434513514", 235.32), konto2(name,number,balance);
	konto.Show();
	konto2.Show();
	konto2.Receive(20.0);
	konto.Take(250.0);
	konto.Show();
	konto2.Show();
	
	system("PAUSE");
	return 0;
}