#include <iostream>
#include "account.h"

Account::Account(const char* name, const char* number, double balance) {
	this->name = new char[strlen(name)];
	strcpy(this->name, name);
	this->number = new char[strlen(number)];
	strcpy(this->number, number);
	this->balance = balance;
}
Account::~Account() {
	delete(name);
	delete(number);
}
void Account::Show() const {
	std::cout << "Nazwisko: " << name << "\nNumer konta: " << number << "\nBalans: " << balance << std::endl;
}
void Account::Receive(double value) {
	balance += value;
}
void Account::Take(double value) {
	if (value > balance) {
		std::cout << "Cos ci sie pomylilo, zabraklo ci kasy :(\nMasz 0 na koncie";
		balance = 0.0;
	}
	else balance -= value;
}