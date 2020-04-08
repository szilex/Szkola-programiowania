#include <iostream>
#include "Move.h"

Move::Move(double a , double b ) {
	x = a;
	y = b;
}
void Move::showmove() const {
	std::cout << "Wartosc x: " << x << ", wartosc y: " << y << std::endl;
}
Move Move::add(const Move &m) const {
	double temp1=x+m.x, temp2=y+m.y;
	Move temp(temp1, temp2);
	return temp;
}
void Move::reset(double a , double b) {
	x = a;
	y = b;
}