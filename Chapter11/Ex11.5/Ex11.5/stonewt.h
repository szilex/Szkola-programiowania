#pragma once
#include <iostream>

class Stonewt {
	enum {Lbs_per_stn=14};
	enum Mode{POUNDS,STONES,STONES_LBS};
	Mode mode;
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void mode_pounds() { mode = POUNDS; }
	void mode_stone() { mode = STONES; }
	void mode_stone_lbs() { mode = STONES_LBS; }
	Stonewt operator+(const Stonewt & t);
	Stonewt operator-(const Stonewt & t);
	Stonewt operator*(const Stonewt & t);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt & t);
};