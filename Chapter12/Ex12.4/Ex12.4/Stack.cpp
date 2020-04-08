#include "Stack.h"

using namespace std;

Stack::Stack(int n) {
	size = n;
	top = 0;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
		pitems[i] = unsigned long(i);
}
Stack::Stack(const Stack& st) {
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
}
Stack::~Stack() {
	delete[] pitems;
}
bool Stack::isempty() const {
	return top == 0;
}
bool Stack::isfull() const {
	return top == MAX;
}
bool Stack::push(const Item& item) {
	if (top < MAX) {
		Item* temp = new Item[size + 1];
		temp[top++] = item;
		for (int i = 0; i < top; i++)
			temp[i] = pitems[i];
		delete[] pitems;
		pitems = temp;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item& item) {
	if (top >0) {
		Item* temp = new Item[size - 1];
		 item=pitems[--top] ;
		for (int i = 0; i < top; i++)
			temp[i] = pitems[i];
		delete[] pitems;
		pitems = temp;
		return true;
	}
	else
		return false;
}
Stack& Stack::operator=(const Stack& st) {
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
	return *this;
}