#pragma once

#include <iostream>

class Stock {
	char * company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const Stock& st);
	Stock(const char* name, int n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	Stock& operator=(const Stock& st);
	friend std::ostream& operator<<(std::ostream& os, const Stock& st);
	const Stock& topval(const Stock& s) const;
};