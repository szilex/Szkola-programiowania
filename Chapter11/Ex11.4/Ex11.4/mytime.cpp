#include "mytime.h"

Time::Time() {
	hours = minutes = 0;
}
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}
void Time::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h) {
	hours += h;
}
void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

Time operator+(const Time& T1, const Time& T2) {
	Time temp;
	temp.minutes = T1.minutes + T2.minutes;
	temp.hours = T1.hours + T2.hours + temp.minutes / 60;
	temp.minutes %= 60;
	return temp;
}
Time operator-(const Time& T1, const Time& T2) {
	Time temp;
	int tot1, tot2;
	tot1 = T2.minutes + T2.hours * 60;
	tot2 = T1.minutes + T2.hours * 60;
	temp.minutes = (tot2 - tot1) % 60;
	temp.hours = (tot2 - tot1) / 60;
	return temp;
}
Time operator*(const Time& T, double n) {
	Time result;
	long totalminutes = T.hours*n * 60 + T.minutes*n;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
Time operator*(double n, const Time& T) {
	return T * n;
}
ostream& operator<<(ostream& os, const Time& T) {
	os << T.hours << " godzin, " << T.minutes << " minut";
	return os;
}