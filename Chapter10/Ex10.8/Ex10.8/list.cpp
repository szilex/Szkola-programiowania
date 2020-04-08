#include <iostream>
#include "list.h"

list::list(int value) {
	top = new element{ value,nullptr };
}
list::~list() {
	if (top != nullptr) {
		element* temp = top;
		while (temp->next != nullptr) {
			temp = temp->next;
			delete (top);
			top = temp;
		}
		delete top;
	}
}
bool list::is_empty() const {
	return length == 0;
}
bool list::is_full() const {
	return length == MAX;
}
void list::push(element & elem) {
	if (top == nullptr) {
		top = new element;
		*top = elem;
	}
	else {
		element* temp = top;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = new element;
		*temp->next = elem;
	}
	length++;
}
void list::pop(element & elem) {
	using namespace std;
	if (top != nullptr) {
		if (top->next == nullptr) {
			elem = *top;
			delete top;
		}
		else if (top->next->next == nullptr) {
			elem = *top->next;
			delete(top->next);
			top->next = nullptr;
		}
		else {
			element* temp = top->next;
			while (temp->next->next != nullptr)
				temp = temp->next;
			delete(temp->next);
			temp->next = nullptr;
		}
		length--;
	}
	else cout << "Brak elementow na liscie";
}
void list::visit(void(*pf)(element& elem)) {
	using namespace std;
	cout << "Podaj numer elementu do modyfikacji: ";
	int number;
	cin >> number;
	if (number > length)
		cout << "Nie ma tylu elementow na liscie, operacje przerwano";
	else {
		int counter = 1;
		element* temp = top;
		while (counter != number) {
			counter++;
			temp = temp->next;
		}
		pf(*temp);
	}

}

void modify(element& elem) {

}