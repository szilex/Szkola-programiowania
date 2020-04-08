#pragma once
#include <string>

class Plorg {
	std::string name;
	int fullness;
public:
	Plorg(const std::string name = "Plorga", const int fullness = 50) { this->name = name; this->fullness = fullness; }
	~Plorg() {} 
	void Refill(int fullness);
	void Introduce();
 };