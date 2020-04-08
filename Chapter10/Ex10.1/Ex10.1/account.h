#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account 
{
private:
	char* name;
	char* number;
	double balance;
public:
	Account() : name(nullptr), number(nullptr), balance(0.0) {};// { name = number = nullptr; balance = 0.0; }
	Account(const char* name, const char* number, double balance);
	~Account();
	void Show() const;
	void Receive( double value);
	void Take(double value);
};

#endif
