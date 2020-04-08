#include <iostream>
#include "Plorg.h"

void Plorg::Refill(int fullness) {
	this->fullness = fullness;
}
void Plorg::Introduce() {
	std::cout << "Jestem " << name << ", a moj wspolczynnik to: " << fullness << std::endl;
}