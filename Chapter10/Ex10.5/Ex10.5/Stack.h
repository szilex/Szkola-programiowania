#pragma once

struct customer {
	char fullname[35];
	double payment;
};

class Stack {
	enum {MAX=10};
	customer customers[MAX];
	int top;
public:
	Stack();
	~Stack(){}
	bool is_empty() const;
	bool is_full() const;
	bool push(const customer & cust);
	bool pop(customer & cust);
};