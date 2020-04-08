#pragma once

struct element {
	int value;
	element* next;
};

class list {
	enum { MAX = 10 };
	int length;
	element* top;
public:
	list(): length(0),top(nullptr) {}
	list(int value);
	~list();
	bool is_empty() const;
	bool is_full() const;
	void push(element & elem);
	void pop(element & elem);
	void visit(void(*pf)(element& elem));
};

void modify(element& elem);