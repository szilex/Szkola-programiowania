#pragma once
const int Len = 40;
struct golf {
	char fullname[40];
	int handicap;
};

void setgolf(golf & g, const char * name, int hc);

bool setgolf(golf & g);

void handicap(golf & g, int hc);

void showgolf(const golf & g);