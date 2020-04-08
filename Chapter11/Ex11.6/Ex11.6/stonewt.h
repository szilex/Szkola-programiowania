#pragma once
#include <iostream>

class Stonewt {
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	bool operator>(const Stonewt & t);
	bool operator>=(const Stonewt & t);
	bool operator<(const Stonewt & t);
	bool operator<=(const Stonewt & t);
	bool operator==(const Stonewt & t);
	bool operator!=(const Stonewt & t);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt & t);
};