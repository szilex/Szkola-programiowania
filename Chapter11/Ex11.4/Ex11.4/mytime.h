#pragma once

#include <iostream>
using std::ostream;

class Time {
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);

	friend Time operator+(const Time& T1, const Time& T2);
	friend Time operator-(const Time& T1, const Time& T2);
	friend Time operator*(const Time& T, double n);
	friend Time operator*(double n, const Time& T);
	friend ostream& operator<<(ostream& os, const Time& T);

};