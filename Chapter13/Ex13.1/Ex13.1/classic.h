#pragma once
#include "cd.h"

class Classic:public Cd {
	char* main_song;
public:
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic(const Classic& d);
	Classic();
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
};