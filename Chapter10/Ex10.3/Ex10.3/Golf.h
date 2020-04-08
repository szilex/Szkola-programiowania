#pragma once

class Golf {
private:
	char fullname[40];
	int hcp;
public:
	Golf();
	Golf(const char * name, int hc);
	~Golf(){}
	void handicap(int hc);
	void showgolf() const;

};