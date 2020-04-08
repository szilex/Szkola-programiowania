#include <iostream>
#include "Stack.h"

Stack::Stack() {
	top = 0;
}
bool Stack::is_empty() const {
	return top == 0;
}
bool Stack::is_full() const {
	return top == MAX;
}
bool Stack::push(const customer & cust) {
	if (top < MAX) {
		customers[top++] = cust;
		return 1;
	}
	else return 0;
}
bool Stack::pop(customer & cust) {
	if (top > 0) {
		cust = customers[--top];
		return 1;
	}
	else return 0;
}
