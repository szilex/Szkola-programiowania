#include "stonewt.h"
using std::cout;

Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = POUNDS;
}
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = STONES_LBS;
}
Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
	mode = POUNDS;
}
Stonewt::~Stonewt() {

}
Stonewt Stonewt::operator+(const Stonewt & t) {
	Stonewt temp;
	temp.pounds = pounds + t.pounds;
	temp.stone = int(temp.pounds) / Lbs_per_stn;
	temp.pds_left = int(temp.pounds)%Lbs_per_stn+temp.pounds-int(temp.pounds);
	temp.mode = POUNDS;
	return temp;
}
Stonewt Stonewt::operator-(const Stonewt & t) {
	Stonewt temp;
	temp.pounds = pounds - t.pounds;
	temp.stone = int(temp.pounds) / Lbs_per_stn;
	temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);
	temp.mode = POUNDS;
	return temp;
}
Stonewt Stonewt::operator*(const Stonewt & t) {
	Stonewt temp;
	temp.pounds = pounds * t.pounds;
	temp.stone = int(temp.pounds) / Lbs_per_stn;
	temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);
	temp.mode = POUNDS;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const Stonewt & t) {
	if (t.mode == Stonewt::POUNDS)
		os << t.pounds << " funtow\n";
	else if(t.mode==Stonewt::STONES)
		os << t.stone<<" kamieni\n";
	else 	os <<  t.stone << " kamieni, "<<t.pds_left<<" funtow\n";
	return 
		os;
}